/*
 * XREFs of sub_14080DA78 @ 0x14080DA78
 * Callers:
 *     IoSetDevicePropertyData @ 0x14080D9D0 (IoSetDevicePropertyData.c)
 * Callees:
 *     sub_1403A5358 @ 0x1403A5358 (sub_1403A5358.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_14085ADDC @ 0x14085ADDC (sub_14085ADDC.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall sub_14080DA78(__int64 a1, __int64 a2, LCID a3, __int64 a4, int a5, unsigned int a6, const WCHAR *a7)
{
  __int64 v10; // rdi
  const WCHAR *v11; // rdx
  wchar_t *Buffer; // rcx
  int v13; // ebx
  __int64 v15; // rax
  UNICODE_STRING String; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v17[176]; // [rsp+60h] [rbp-E8h] BYREF

  memset(v17, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  if ( !a1 || (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0 || (v11 = *(const WCHAR **)(v10 + 48)) == 0LL )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v17;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
    v11 = *(const WCHAR **)(v10 + 48);
    Buffer = String.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  v13 = sub_140771524(*(__int64 *)&qword_140D00AC0, v11, 1, 0LL, (__int64)Buffer, a2, a5, a7, a6, 0);
  if ( v13 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 16) != 2 )
      goto LABEL_8;
    v15 = *(_QWORD *)a2 - 0x49A9D97AF0E20F09LL;
    if ( *(_QWORD *)a2 == 0x49A9D97AF0E20F09LL )
      v15 = *(_QWORD *)(a2 + 8) - 0x2EBBE6226EBB4680LL;
    if ( v15 )
      goto LABEL_8;
    v13 = sub_14085ADDC(a1, a7, a6);
  }
  if ( v13 == -1073741275 )
    v13 = -1073741772;
LABEL_8:
  if ( *(int *)(v10 + 300) >= 773 )
    sub_1403A5358(v10);
  return (unsigned int)v13;
}
