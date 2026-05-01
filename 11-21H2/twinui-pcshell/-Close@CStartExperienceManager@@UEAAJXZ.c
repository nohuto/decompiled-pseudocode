/*
 * XREFs of ?Close@CStartExperienceManager@@UEAAJXZ @ 0x18012EA20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_33710664@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180073164 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_33710664@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStartExperienceManager::Close(CStartExperienceManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 120) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 32LL))(*((_QWORD *)this + 62));
    *((_DWORD *)this + 120) = 0;
  }
  if ( *((_DWORD *)this + 121) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 32LL))(*((_QWORD *)this + 62));
    *((_DWORD *)this + 121) = 0;
  }
  if ( *((_DWORD *)this + 122) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 32LL))(*((_QWORD *)this + 62));
    *((_DWORD *)this + 122) = 0;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_33710664>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_33710664>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( *((_DWORD *)this + 123) )
  {
    v5 = *((_QWORD *)this + 64);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      *((_DWORD *)this + 123) = 0;
    }
  }
  v13 = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 30);
  v7 = **v6;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  v8 = v7(v6, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v13);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13C,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v11);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 62);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  return 0LL;
}
