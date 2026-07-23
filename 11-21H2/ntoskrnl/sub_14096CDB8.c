/*
 * XREFs of sub_14096CDB8 @ 0x14096CDB8
 * Callers:
 *     sub_1406F9060 @ 0x1406F9060 (sub_1406F9060.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 * Callees:
 *     sub_140583E7C @ 0x140583E7C (sub_140583E7C.c)
 *     sub_14096CB14 @ 0x14096CB14 (sub_14096CB14.c)
 */

void __fastcall sub_14096CDB8(__int64 a1, unsigned __int16 a2)
{
  char v2; // al
  _OWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a1 + 48) & 0x70;
  memset(v4, 0, sizeof(v4));
  if ( v2 != 16 )
  {
    sub_14096CB14(a1, (__int64)v4);
    sub_140583E7C(a2, 0x8000u, (__int64)v4, 44, 4200707);
  }
}
