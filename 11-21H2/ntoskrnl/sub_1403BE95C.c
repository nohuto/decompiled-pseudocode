/*
 * XREFs of sub_1403BE95C @ 0x1403BE95C
 * Callers:
 *     sub_1403BE8FC @ 0x1403BE8FC (sub_1403BE8FC.c)
 *     sub_140522FB0 @ 0x140522FB0 (sub_140522FB0.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     sub_1403B37F0 @ 0x1403B37F0 (sub_1403B37F0.c)
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1403BE95C(__int64 a1)
{
  int v2; // [rsp+30h] [rbp-30h]
  int v3; // [rsp+34h] [rbp-2Ch]
  int v4; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v5[3]; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v6; // [rsp+48h] [rbp-18h] BYREF
  int v7; // [rsp+88h] [rbp+28h]

  v5[1] = 0;
  v2 = 0;
  v4 = 0;
  v5[0] = 0;
  v3 = 0;
  v5[2] = 0;
  v7 = 0;
  v6 = 0LL;
  if ( (int)sub_1403B38C8(a1, 0LL, 2, 16LL, &v6) >= 0 && (unsigned __int8)sub_14042A5E0(0LL, 0LL) )
  {
    sub_14042A5E0(0LL, &v4);
    sub_14042A5E0(0x80000000LL, v5);
  }
  return 0;
}
