/*
 * XREFs of ??1?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180669F3C
 * Callers:
 *     _CSnapAssistControllerBase::AdvanceGuidedSnapAssist_::_1_::dtor$1 @ 0x18066A903 (_CSnapAssistControllerBase--AdvanceGuidedSnapAssist_--_1_--dtor$1.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromAppLayout_::_1_::dtor$2 @ 0x18066C9F6 (_CSnapAssistControllerBase--TriggerSnapAssistFromAppLayout_--_1_--dtor$2.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromApplicationArrangedNotification_::_1_::dtor$2 @ 0x18066CE81 (_CSnapAssistControllerBase--TriggerSnapAssistFromApplicationArrangedNotification_--_1_--dtor$2.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistWithRegions_::_1_::dtor$1 @ 0x18066D1F7 (_CSnapAssistControllerBase--TriggerSnapAssistWithRegions_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@0@@Z @ 0x1802D0C58 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<ISnappedWindow>>::~vector<Microsoft::WRL::ComPtr<ISnappedWindow>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISnappedWindow>>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
