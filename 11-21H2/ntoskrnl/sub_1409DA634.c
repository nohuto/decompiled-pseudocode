/*
 * XREFs of sub_1409DA634 @ 0x1409DA634
 * Callers:
 *     sub_14062AAC8 @ 0x14062AAC8 (sub_14062AAC8.c)
 *     sub_14062AE30 @ 0x14062AE30 (sub_14062AE30.c)
 *     sub_14062BA64 @ 0x14062BA64 (sub_14062BA64.c)
 *     sub_14062BE2C @ 0x14062BE2C (sub_14062BE2C.c)
 *     sub_14062C2E4 @ 0x14062C2E4 (sub_14062C2E4.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     sub_14096A384 @ 0x14096A384 (sub_14096A384.c)
 *     sub_14096D7DC @ 0x14096D7DC (sub_14096D7DC.c)
 */

void __fastcall sub_1409DA634(
        struct _EX_RUNDOWN_REF *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v11; // rdx

  sub_14096A384(a3 << 12, a4 << 12, a3, a7 != 0);
  if ( a4 == a6 )
  {
    MmUnsecureVirtualMemory(a2);
    sub_1402AD030(a1 + 12);
  }
  else
  {
    v11 = a4 + a5;
    if ( a3 != a5 )
      v11 = a5;
    if ( (int)sub_14096D7DC((__int64)a2, v11 << 12, (a6 - a4) << 12) < 0 )
      __int2c();
  }
}
