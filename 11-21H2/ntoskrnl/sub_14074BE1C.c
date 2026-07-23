/*
 * XREFs of sub_14074BE1C @ 0x14074BE1C
 * Callers:
 *     sub_14074B9B0 @ 0x14074B9B0 (sub_14074B9B0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402D2BD8 @ 0x1402D2BD8 (sub_1402D2BD8.c)
 */

__int64 __fastcall sub_14074BE1C(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_FilterContexts; // rsi

  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) & 0x100) == 0 )
  {
    p_FilterContexts = (struct _FAST_MUTEX *)&AdvancedHeader[2].FilterContexts;
    ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].FilterContexts);
    --AdvancedHeader[1].AllocationSize.HighPart;
    --AdvancedHeader[1].FileSize.LowPart;
    if ( AdvancedHeader[1].AllocationSize.HighPart || !sub_1402D2BD8(AdvancedHeader, 0, 0) )
      KeReleaseGuardedMutex(p_FilterContexts);
  }
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0LL;
}
