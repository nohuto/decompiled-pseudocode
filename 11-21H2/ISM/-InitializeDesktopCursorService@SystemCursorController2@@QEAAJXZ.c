/*
 * XREFs of ?InitializeDesktopCursorService@SystemCursorController2@@QEAAJXZ @ 0x180041694
 * Callers:
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180041344 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002E38C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAAX_NW4.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x1800417D8 (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController2::InitializeDesktopCursorService(
        SystemCursorController2 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v5; // rbx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  std::_Ref_count_base *v10; // rcx
  int v12[2]; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_QWORD *)this + 10) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller2.cpp",
      a4);
  v5 = (char *)operator new(0x30uLL);
  *(_OWORD *)v5 = 0LL;
  *((_DWORD *)v5 + 2) = 1;
  *((_DWORD *)v5 + 3) = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<DesktopSystemCursorService>::`vftable';
  *((_QWORD *)v5 + 3) = this;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 2) = &DesktopSystemCursorService::`vftable';
  *((_QWORD *)v5 + 5) = 0LL;
  *(_QWORD *)v12 = v5 + 16;
  v6 = SystemCursorServiceBase::InitializeBase((SystemCursorServiceBase *)(v5 + 16));
  v9 = v6;
  if ( v6 >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl,
      0,
      v7,
      v8);
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    *((_QWORD *)this + 10) = *(_QWORD *)v12;
    v10 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = v5;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "desktopsystemcursorservice.cpp",
      (const char *)(unsigned int)v6,
      v12[0]);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller2.cpp",
      (const char *)v9,
      v13);
  }
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v9;
}
