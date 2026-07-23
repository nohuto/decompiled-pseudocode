/*
 * XREFs of sub_14084388C @ 0x14084388C
 * Callers:
 *     sub_140842F74 @ 0x140842F74 (sub_140842F74.c)
 *     sub_1408437A4 @ 0x1408437A4 (sub_1408437A4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140843940 @ 0x140843940 (sub_140843940.c)
 *     sub_140843C1C @ 0x140843C1C (sub_140843C1C.c)
 */

__int64 __fastcall sub_14084388C(__int64 a1, int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ecx
  _DWORD v8[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v9[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  if ( (int)sub_140843C1C(v9, 39LL, a1) < 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbGetEntryFlags");
  }
  else
  {
    v8[0] = 0;
    if ( (int)sub_140843940(v3, v9, 1LL, v8) >= 0 )
      *a2 = v8[0];
    v8[0] = 0;
    v5 = sub_140843940(v4, v9, 0LL, v8);
    v6 = *a2;
    if ( v5 >= 0 )
      LOWORD(v6) = LOWORD(v8[0]) | v6;
    *a2 = v6 & 0xFFF;
  }
  return 1LL;
}
