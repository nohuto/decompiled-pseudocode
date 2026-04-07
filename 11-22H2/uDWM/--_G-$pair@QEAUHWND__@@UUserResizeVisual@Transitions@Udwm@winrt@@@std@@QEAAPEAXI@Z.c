/*
 * XREFs of ??_G?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAAPEAXI@Z @ 0x1800F9454
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F89F0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@U.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F8FEC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Tra.c)
 *     ??1?$_Node_handle@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@2@U_Node_handle_map_base@2@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAA@XZ @ 0x1800F9064 (--1-$_Node_handle@U-$_List_node@U-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@s.c)
 *     ?RegisterBitmap@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAXPEAUHWND__@@PEAVCBitmapSource@@@Z @ 0x1800F9EA0 (-RegisterBitmap@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x1800FA3C4 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Ud.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>::`scalar deleting destructor'(
        __int64 a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 8);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  return a1;
}
