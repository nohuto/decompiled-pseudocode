/*
 * XREFs of sub_14080D8A8 @ 0x14080D8A8
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x14080D860 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall sub_14080D8A8(__int64 a1, __int64 a2, LCID a3, __int64 a4, int a5, unsigned int a6, const WCHAR *a7)
{
  wchar_t *Buffer; // rsi
  int v11; // ebx
  WCHAR *v13; // [rsp+50h] [rbp-108h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-100h] BYREF
  _BYTE v15[176]; // [rsp+70h] [rbp-E8h] BYREF

  memset(v15, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  v13 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v15;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
    Buffer = String.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  v11 = sub_140779CA0((__int16 **)&v13, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = sub_140771524(*(__int64 *)&qword_140D00AC0, v13, 3, 0LL, (__int64)Buffer, a2, a5, a7, a6, 0);
  sub_14077BAB8(v13, a1);
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
