/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x140536A9C
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x1402999F8 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindEx @ 0x140536A40 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x140536A70 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x1405393E8 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x140252820 (KiSetTimerEx.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403D0E70 (CcForEachPrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

char __fastcall CcNotifyWriteBehindInternal(__int64 a1, int a2)
{
  char result; // al
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( CcInitializationComplete && *(_BYTE *)(a1 + 1364) )
  {
    if ( CcEnablePerVolumeLazyWriter )
    {
      return CcForEachPrivateVolumeCacheMap(
               a1,
               (__int64 (__fastcall *)(__int64, __int64, __int64))CcNotifyWriteBehindAllVolumesHelper,
               (__int64)&v4);
    }
    else
    {
      if ( (a2 & 1) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 880), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 2) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 904), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 4) != 0 )
      {
        if ( !*(_BYTE *)(a1 + 1048) )
          KeBugCheckEx(0x34u, 0x12ADuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = KiSetTimerEx(a1 + 984, 0LL, 0, 0, 0LL);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 8) != 0 )
      {
        result = KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
        LOBYTE(a2) = v4;
      }
      if ( (a2 & 0x10) != 0 )
        return KeSetEvent((PRKEVENT)(a1 + 952), 0, 0);
    }
  }
  return result;
}
