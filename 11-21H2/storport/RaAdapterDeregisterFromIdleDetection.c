/*
 * XREFs of RaAdapterDeregisterFromIdleDetection @ 0x1C0048618
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C008C850 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall RaAdapterDeregisterFromIdleDetection(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 4832);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 4832) = 0LL;
    PoFxUnregisterDevice(*v1);
    ExFreePoolWithTag(v1, 0x4F506152u);
  }
}
