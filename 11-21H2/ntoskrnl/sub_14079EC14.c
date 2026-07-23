/*
 * XREFs of sub_14079EC14 @ 0x14079EC14
 * Callers:
 *     sub_1402EDC48 @ 0x1402EDC48 (sub_1402EDC48.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FCA10 @ 0x1406FCA10 (sub_1406FCA10.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 * Callees:
 *     sub_1402EDDF8 @ 0x1402EDDF8 (sub_1402EDDF8.c)
 *     sub_1409E73C8 @ 0x1409E73C8 (sub_1409E73C8.c)
 */

__int64 __fastcall sub_14079EC14(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  int v3; // edx

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 2512);
  if ( (v3 & 0x100) == 0 || _bittest((const signed __int32 *)CurrentThread + 344, 0x12u) )
  {
    if ( (v3 & 0x800) != 0 && !_bittest((const signed __int32 *)CurrentThread + 344, 0x12u) )
      sub_1409E73C8(1LL, a1);
    sub_1402EDDF8(0);
    return 0LL;
  }
  else
  {
    sub_1402EDDF8(0x80000000);
    sub_1409E73C8(2LL, a1);
    return 3221227012LL;
  }
}
