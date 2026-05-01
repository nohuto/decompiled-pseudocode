/*
 * XREFs of ??$make_shared@VSnapAssistState@@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@67@HAEAPEAUHWND__@@AEAPEAUHWND__@@AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@std@@YA?AV?$shared_ptr@VSnapAssistState@@@0@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@0@AEBURect@Foundation@67@$$QEAHAEAPEAUHWND__@@4AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@Z @ 0x1807698BC
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@45@HAEAPEAUHWND__@@AEAPEAUHWND__@@AEAUISnapAssistCallback2@WindowSnapping@Shell@345@@?$_Ref_count_obj2@VSnapAssistState@@@std@@QEAA@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@1@AEBURect@Foundation@67@$$QEAHAEAPEAUHWND__@@4AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@Z @ 0x180768A04 (--$-0AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV-$vector.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<SnapAssistState,winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource &,std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion> &,winrt::Windows::Foundation::Rect const &,int,HWND__ * &,HWND__ * &,winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2 &>(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 v12; // rax
  void *v14; // [rsp+60h] [rbp+8h]

  v14 = operator new(0xD0uLL);
  v12 = std::_Ref_count_obj2<SnapAssistState>::_Ref_count_obj2<SnapAssistState>(
          (__int64)v14,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8);
  *a1 = v12 + 16;
  a1[1] = v12;
  return a1;
}
