/*
 * XREFs of ??$make_shared@VUwpAppViewInfo@@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@std@@YA?AV?$shared_ptr@VUwpAppViewInfo@@@0@AEAW4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180622CA4
 * Callers:
 *     ?UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1806238FC (-UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafet.c)
 *     ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1806273D0 (-UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<UwpAppViewInfo,enum Windows::Internal::FamilySafety::AppLimits::ViewState &>(
        _QWORD *a1,
        _DWORD *a2)
{
  _QWORD *result; // rax
  _DWORD *v5; // [rsp+40h] [rbp+8h]

  v5 = operator new(0x18uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootConnectingState>::`vftable';
  v5[4] = *a2;
  a1[1] = v5;
  result = a1;
  *a1 = v5 + 4;
  return result;
}
