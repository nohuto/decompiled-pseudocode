/*
 * XREFs of ??1?$unordered_map@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@5@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x1800F9148
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::WindowJointResizeTransitionHandler_::_1_::dtor$3 @ 0x1800685E8 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHand_ea_1800685E8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F8A40 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Ue.c)
 */

__int64 __fastcall std::unordered_map<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>::~unordered_map<HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  return std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
