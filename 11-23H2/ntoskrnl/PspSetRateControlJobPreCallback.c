/*
 * XREFs of PspSetRateControlJobPreCallback @ 0x1409B3530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PspSetEffectiveRateControlJob @ 0x1409B2BD8 (PspSetEffectiveRateControlJob.c)
 */

void __fastcall PspSetRateControlJobPreCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  PspSetEffectiveRateControlJob(a1, *(_QWORD *)(a2 + 24));
  if ( *(_QWORD *)v3 )
    (*(void (__fastcall **)(__int64, _QWORD))v3)(v2, *(_QWORD *)(v3 + 16));
}
