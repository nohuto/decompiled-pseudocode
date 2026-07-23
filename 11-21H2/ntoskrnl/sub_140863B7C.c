/*
 * XREFs of sub_140863B7C @ 0x140863B7C
 * Callers:
 *     sub_14024E2C8 @ 0x14024E2C8 (sub_14024E2C8.c)
 *     sub_1406D1E90 @ 0x1406D1E90 (sub_1406D1E90.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 */

__int64 sub_140863B7C()
{
  int v0; // eax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]

  v3 = -1;
  v0 = 1;
  if ( dword_140D00BC4 == 1 )
    v0 = 3;
  Buffer = v0;
  ZwUpdateWnfStateData(&stru_1400134B8, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return sub_1407525EC(&stru_1400134A8, 4u, &dword_140D00BC4);
}
