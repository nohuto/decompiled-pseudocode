/*
 * XREFs of CcRescheduleLazyWriteScanOnVolume @ 0x140357068
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14029A4E0 (CcLazyWriteScanVolume.c)
 *     CcCoalescingCallBackHelper @ 0x140535580 (CcCoalescingCallBackHelper.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140252440 (KeSetCoalescableTimer.c)
 *     CcScheduleLazyWriteScanVolume @ 0x140299918 (CcScheduleLazyWriteScanVolume.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall CcRescheduleLazyWriteScanOnVolume(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  LARGE_INTEGER v3; // rdx

  if ( *(_BYTE *)(a1 + 1172) )
    return;
  if ( !*(_BYTE *)(a1 + 985) )
  {
    CcScheduleLazyWriteScanVolume((_BYTE *)a1, 0, 0);
    return;
  }
  if ( a2 && (v2 = *a2, *a2 != 0x7FFFFFFFFFFFFFFFLL) && v2 )
  {
    v3.QuadPart = v2 * KeMaximumIncrement;
    if ( v3.QuadPart > 160000000 )
    {
      v3.QuadPart = 160000000LL;
    }
    else
    {
      if ( v3.QuadPart < 10000000 )
        v3 = CcIdleDelay;
      if ( v3.QuadPart <= 0 )
        goto LABEL_7;
    }
    v3.QuadPart = -v3.QuadPart;
  }
  else
  {
    v3 = CcIdleDelay;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 984) )
    KeBugCheckEx(0x34u, 0x7A0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeSetCoalescableTimer((PKTIMER)(a1 + 920), v3, 0, 0x3E8u, 0LL);
}
