/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@PEAVCVisual@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@PEAVCVisual@@@detail@@@std@@@std@@QEAA@XZ @ 0x18011AFA0
 * Callers:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x180102664 (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180119570 (-ensure_extra_capacity@-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@det.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18011B304 (-ensure_extra_capacity@-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<detail::aligned_storage_for<CVisual *> [0],std::default_delete<detail::aligned_storage_for<CVisual *> [0]>>::~unique_ptr<detail::aligned_storage_for<CVisual *> [0],std::default_delete<detail::aligned_storage_for<CVisual *> [0]>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
