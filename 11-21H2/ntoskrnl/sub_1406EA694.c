/*
 * XREFs of sub_1406EA694 @ 0x1406EA694
 * Callers:
 *     IoGetDeviceInterfacePropertyData @ 0x1406EA650 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall sub_1406EA694(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  wchar_t *Buffer; // rsi
  int v12; // ebx
  __int64 v14; // [rsp+60h] [rbp-118h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-110h] BYREF
  _BYTE v16[176]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v16, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  v14 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v16;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
    Buffer = String.Buffer;
  }
  else
  {
    Buffer = 0LL;
  }
  v12 = sub_140779CA0(&v14, 0LL, a1);
  if ( v12 >= 0 )
    v12 = sub_14077DA5C(qword_140D00AC0, v14, 3, 0, (__int64)Buffer, a2, a8, a6, a5, a7, 0);
  sub_14077BAB8(v14, a1);
  if ( v12 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v12;
}
