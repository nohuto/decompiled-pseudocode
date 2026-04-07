/*
 * XREFs of ?CreateSolidColorBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x18004B5EC
 * Callers:
 *     ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x18004B174 (-Initialize@CCompositionEffectCache@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180041C18 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1984 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCompositionEffectCache::CreateSolidColorBrush(unsigned int a1, _QWORD *a2)
{
  __int64 *v3; // r9
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v11 = 0LL;
  v4 = *v3;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 64))(v3, a1, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
      (const char *)(unsigned int)v5,
      v9);
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)&v11);
    return v6;
  }
  else
  {
    v7 = (**v11)(v11, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, a2);
    if ( v7 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xA2,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
        (const char *)(unsigned int)v7,
        v9);
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)&v11);
    return 0LL;
  }
}
