/*
 * XREFs of KiIpiSendRequestEx @ 0x1402EB5F0
 * Callers:
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     KxFlushSingleTb @ 0x1402EB340 (KxFlushSingleTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EB4C4 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x14036D4F0 (KeInvalidateAllCaches.c)
 *     KxFlushMultipleTb @ 0x14038E914 (KxFlushMultipleTb.c)
 *     KxFlushEntireTb @ 0x1403B241C (KxFlushEntireTb.c)
 *     KeInvalidateRangeAllCaches @ 0x140460040 (KeInvalidateRangeAllCaches.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140253F00 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x14034E7B0 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIpiSendRequestEx(
        __int64 a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        void (__fastcall *a6)(__int64),
        __int64 a7)
{
  int v8; // ebx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 result; // rax

  v8 = a3;
  if ( a2 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 )
    {
LABEL_3:
      KiIpiSendRequest(a1, a2, v8, a4, a5);
      if ( a6 )
        a6(a7);
      v12 = 0;
      while ( 1 )
      {
        result = *(unsigned int *)(a1 + 11648);
        if ( !(_DWORD)result )
          break;
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      return result;
    }
  }
  else if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, a3) )
  {
    goto LABEL_3;
  }
  result = (__int64)a6;
  if ( a6 )
    return ((__int64 (__fastcall *)(__int64))a6)(a7);
  return result;
}
