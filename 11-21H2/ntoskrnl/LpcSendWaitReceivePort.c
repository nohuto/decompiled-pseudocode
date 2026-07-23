/*
 * XREFs of LpcSendWaitReceivePort @ 0x1406CE2B0
 * Callers:
 *     sub_1406CDFAC @ 0x1406CDFAC (sub_1406CDFAC.c)
 *     sub_14092A168 @ 0x14092A168 (sub_14092A168.c)
 *     sub_140935044 @ 0x140935044 (sub_140935044.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  int v9; // [rsp+40h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  LOBYTE(v9) = 0;
  v7 = sub_1407AD040(a1, a2 | 2u, a3, 0, a4, a5, 0LL, a6, v9);
  if ( v7 == -1073740029 )
  {
    v7 = -1073741769;
  }
  else if ( v7 == -1073740031 )
  {
    v7 = -1073741229;
  }
  KeLeaveCriticalRegion();
  return v7;
}
