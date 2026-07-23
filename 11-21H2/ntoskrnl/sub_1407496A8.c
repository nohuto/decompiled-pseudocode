/*
 * XREFs of sub_1407496A8 @ 0x1407496A8
 * Callers:
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14081C1B0 @ 0x14081C1B0 (sub_14081C1B0.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall sub_1407496A8(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  wchar_t *Buffer; // rax
  unsigned int v14; // ebx
  __int64 v16; // rax
  unsigned int *v17; // rdx
  UNICODE_STRING String; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v19[176]; // [rsp+70h] [rbp-F8h] BYREF

  memset(v19, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741808;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !v11 )
    return (unsigned int)-1073741808;
  v12 = *(_QWORD *)(v11 + 48);
  if ( !v12 )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v19;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
    v12 = *(_QWORD *)(v11 + 48);
    Buffer = String.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  v14 = sub_14077DA5C(qword_140D00AC0, v12, 1, 0, (__int64)Buffer, a2, a8, (__int64)a6, a5, (__int64)a7, 0);
  if ( *(_DWORD *)(a2 + 16) != 2 )
    goto LABEL_7;
  v16 = *(_QWORD *)a2 - 0x49A9D97AF0E20F09LL;
  if ( *(_QWORD *)a2 == 0x49A9D97AF0E20F09LL )
    v16 = *(_QWORD *)(a2 + 8) - 0x2EBBE6226EBB4680LL;
  if ( v16 )
  {
LABEL_7:
    if ( v14 != -1073741275 )
      return v14;
    return (unsigned int)-1073741772;
  }
  if ( v14 != -1073741772 && v14 != -1073741275 )
  {
    if ( !v14 )
      sub_14081C1B0(a1, a6, (unsigned int)*a7);
    return v14;
  }
  v17 = *(unsigned int **)(*(_QWORD *)(a1 + 312) + 88LL);
  if ( !v17 )
    return (unsigned int)-1073741772;
  if ( a7 )
    *a7 = *v17;
  if ( a5 >= *v17 )
  {
    memmove(a6, v17 + 1, *v17);
    return 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
}
