/*
 * XREFs of sub_14076D9FC @ 0x14076D9FC
 * Callers:
 *     sub_14076D7D4 @ 0x14076D7D4 (sub_14076D7D4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14076DAF0 @ 0x14076DAF0 (sub_14076DAF0.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

__int64 __fastcall sub_14076D9FC(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  int v4; // [rsp+60h] [rbp-88h] BYREF
  int v5; // [rsp+64h] [rbp-84h] BYREF
  __int128 v6; // [rsp+68h] [rbp-80h] BYREF
  wchar_t Str2[40]; // [rsp+80h] [rbp-68h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  v5 = 0;
  v4 = 0;
  v6 = 0LL;
  if ( (v1 & 1) != 0 )
  {
    v2 = sub_14077DA5C(
           qword_140D00AC0,
           *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
           3,
           0,
           0LL,
           (__int64)&qword_140010A78,
           (__int64)&v4,
           (__int64)&v6,
           16,
           (__int64)&v5,
           0);
    if ( v2 >= 0 && v4 == 13 && v5 == 16 )
    {
      v2 = sub_140773030(&v6, Str2);
      if ( v2 >= 0 )
        return (unsigned int)sub_14076DAF0(Str2);
    }
  }
  return (unsigned int)v2;
}
