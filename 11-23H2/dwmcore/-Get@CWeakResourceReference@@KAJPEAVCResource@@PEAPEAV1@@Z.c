/*
 * XREFs of ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x180082A9C
 * Callers:
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180082A4C (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800E1D14 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18020F2B4 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180235570 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18023C60C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x1802649A0 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@_N@1@AEBQEBVCResource@@@Z @ 0x1800CA07C (--$_Try_emplace@AEBQEBVCResource@@$$V@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceRe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWeakResourceReference::Get(struct CResource *a1, void (__fastcall ****a2)(LPVOID))
{
  unsigned int v2; // esi
  HANDLE ProcessHeap; // rax
  unsigned int v5; // ecx
  void (__fastcall ***v6)(LPVOID); // rdi
  struct CResource *v7; // rax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  struct CResource *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  v2 = 0;
  if ( (*((_BYTE *)a1 + 32) & 8) != 0 )
  {
    v6 = *(void (__fastcall ****)(LPVOID))(*(_QWORD *)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Try_emplace<CResource const * const &,>(
                                                        a1,
                                                        v9,
                                                        &v10)
                                         + 24LL);
    if ( v6 )
      (**v6)(v6);
  }
  else
  {
    ProcessHeap = GetProcessHeap();
    v6 = (void (__fastcall ***)(LPVOID))HeapAlloc(ProcessHeap, 8u, 0x30uLL);
    if ( !v6 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x20u, 0LL);
      return v2;
    }
    v7 = v10;
    *((_DWORD *)v6 + 2) = 0;
    v6[3] = 0LL;
    v6[4] = 0LL;
    v6[5] = 0LL;
    *v6 = (void (__fastcall **)(LPVOID))&CWeakResourceReference::`vftable';
    v6[2] = (void (__fastcall **)(LPVOID))v7;
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Try_emplace<CResource const * const &,>(
                             &CWeakResourceReference::`vftable',
                             v9,
                             v6 + 2)
              + 24LL) = v6;
    *((_DWORD *)v6[2] + 8) |= 8u;
    (**v6)(v6);
  }
  *a2 = v6;
  return v2;
}
