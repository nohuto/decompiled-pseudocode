/*
 * XREFs of StorUnitReleaseIdentifyNamespaceResources @ 0x1C0023DE0
 * Callers:
 *     StorAdapterNVMeInitializeEnumUnitIdentifyInfo @ 0x1C0084424 (StorAdapterNVMeInitializeEnumUnitIdentifyInfo.c)
 *     StorAdapterNVMeEnumerate @ 0x1C008607C (StorAdapterNVMeEnumerate.c)
 * Callees:
 *     <none>
 */

void __fastcall StorUnitReleaseIdentifyNamespaceResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 3416);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x494E6152u);
    *(_QWORD *)(a1 + 3416) = 0LL;
  }
  v3 = *(void **)(a1 + 3424);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x494E6152u);
    *(_QWORD *)(a1 + 3424) = 0LL;
  }
}
