/*
 * XREFs of RmDisconnectProcessManager @ 0x18001C400
 * Callers:
 *     RmConnectProcessManager @ 0x18001C300 (RmConnectProcessManager.c)
 * Callees:
 *     sub_1800010E0 @ 0x1800010E0 (sub_1800010E0.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     HamFreeBuffer_0 @ 0x180009A20 (HamFreeBuffer_0.c)
 *     sub_1800123BC @ 0x1800123BC (sub_1800123BC.c)
 *     sub_1800131B4 @ 0x1800131B4 (sub_1800131B4.c)
 */

__int64 __fastcall RmDisconnectProcessManager(void *a1)
{
  if ( (unsigned int)dword_180032000 > 4 && sub_1800010E0((__int64)&dword_180032000, 2LL) )
    sub_1800011A0((__int64)&dword_180032000, byte_18002A7ED);
  sub_1800131B4((__int64)a1);
  sub_1800123BC((__int64)a1);
  HamFreeBuffer_0(a1);
  if ( (unsigned int)dword_180032000 > 4 && sub_1800010E0((__int64)&dword_180032000, 3LL) )
    sub_1800011A0((__int64)&dword_180032000, byte_18002A829);
  return 0LL;
}
