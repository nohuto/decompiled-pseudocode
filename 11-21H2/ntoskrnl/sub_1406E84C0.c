/*
 * XREFs of sub_1406E84C0 @ 0x1406E84C0
 * Callers:
 *     sub_14076D2BC @ 0x14076D2BC (sub_14076D2BC.c)
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 */

bool __fastcall sub_1406E84C0(int a1, const wchar_t *a2)
{
  char v2; // bl
  int v5; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v6[3]; // [rsp+44h] [rbp-74h] BYREF
  wchar_t Str1[40]; // [rsp+50h] [rbp-68h] BYREF

  v2 = 0;
  v5 = 78;
  v6[0] = 0;
  if ( (int)sub_14077CD90(a1, (unsigned int)L"HTREE\\ROOT\\0", 0, 37, (__int64)v6, (__int64)Str1, (__int64)&v5, 0) >= 0 )
  {
    Str1[38] = 0;
    return wcsicmp(Str1, a2) == 0;
  }
  return v2;
}
