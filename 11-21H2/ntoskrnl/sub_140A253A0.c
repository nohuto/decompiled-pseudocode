/*
 * XREFs of sub_140A253A0 @ 0x140A253A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

bool __fastcall sub_140A253A0(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  char v4; // bl
  int v7; // [rsp+60h] [rbp-1B8h] BYREF
  _DWORD v8[3]; // [rsp+64h] [rbp-1B4h] BYREF
  wchar_t Str2[200]; // [rsp+70h] [rbp-1A8h] BYREF

  v4 = 0;
  v7 = 0;
  v8[0] = 0;
  if ( (int)sub_14077DA5C(a1, a2, 1, 0, 0LL, (__int64)qword_140010918, (__int64)&v7, (__int64)Str2, 400, (__int64)v8, 0) >= 0
    && v7 == 18 )
  {
    return wcsicmp(a4, Str2) == 0;
  }
  return v4;
}
