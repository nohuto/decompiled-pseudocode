/*
 * XREFs of CcNotifyWriteBehindInternal @ 0x140536FEC
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x140299C88 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindEx @ 0x140536F90 (CcNotifyWriteBehindEx.c)
 *     CcNotifyWriteBehindHelper @ 0x140536FC0 (CcNotifyWriteBehindHelper.c)
 *     CcExitPartition @ 0x140539938 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403D1050 (CcForEachPrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
