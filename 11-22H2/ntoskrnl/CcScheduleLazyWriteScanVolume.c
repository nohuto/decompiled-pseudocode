/*
 * XREFs of CcScheduleLazyWriteScanVolume @ 0x140299918
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x1402998D8 (CcScheduleLazyWriteScan.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x140357068 (CcRescheduleLazyWriteScanOnVolume.c)
 * Callees:
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindVolume @ 0x1403C175C (CcNotifyWriteBehindVolume.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

char __fastcall CcScheduleLazyWriteScanVolume(_BYTE *a1, char a2, char a3)
{
  char result; // al
  __int64 v6; // rdx
  _BYTE *v7; // rdi

  result = a1[1172];
  if ( !result || a2 )
  {
    if ( a3 )
    {
      v6 = 8LL;
    }
    else
    {
      result = -result;
      v6 = result != 0 ? 16 : 4;
    }
    if ( a2 )
    {
      result = CcNotifyWriteBehindVolume(a1, v6);
      v7 = a1 + 985;
    }
    else
    {
      v7 = a1 + 985;
      if ( !a1[985] )
      {
        if ( !a1[984] )
          KeBugCheckEx(0x34u, 0x701uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        result = KiSetTimerEx((__int64)(a1 + 920), CcFirstDelay, 0, 0, 0LL);
      }
    }
    if ( !a1[1172] )
      *v7 = 1;
  }
  return result;
}
