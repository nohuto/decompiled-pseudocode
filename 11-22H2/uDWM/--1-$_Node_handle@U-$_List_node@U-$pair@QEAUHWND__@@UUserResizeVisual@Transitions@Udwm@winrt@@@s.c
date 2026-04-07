/*
 * XREFs of ??1?$_Node_handle@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@2@U_Node_handle_map_base@2@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAA@XZ @ 0x1800F9064
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::RegisterBitmap_::_1_::dtor$0 @ 0x1800F9F9E (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransitionHandler--Register.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAAPEAXI@Z @ 0x1800F9454 (--_G-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::_Node_handle<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,std::_Node_handle_map_base,HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>::~_Node_handle<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,std::_Node_handle_map_base,HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>(
        void **a1)
{
  char *v2; // rcx
  __int64 result; // rax

  v2 = (char *)*a1;
  if ( v2 )
  {
    std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>::`scalar deleting destructor'(v2 + 16);
    result = std::_Deallocate<16,0>(*a1, 0x20uLL);
    *a1 = 0LL;
  }
  return result;
}
