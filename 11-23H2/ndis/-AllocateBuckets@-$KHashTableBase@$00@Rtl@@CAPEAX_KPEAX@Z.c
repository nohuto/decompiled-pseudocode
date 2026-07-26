/*
 * XREFs of ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x1C011F768
 * Callers:
 *     ??0NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C011F6BC (--0NdisBindBuilderGlobal@@QEAA@XZ.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C013B90C (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall Rtl::KHashTableBase<1>::AllocateBuckets(SIZE_T NumberOfBytes, __int64 a2)
{
  if ( NumberOfBytes <= 8 )
    return (PVOID)(a2 + 16);
  else
    return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6873484Bu);
}
