/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18055C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106484 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopPersistence::CurrentVirtualDesktopChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2)
{
  int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD, const wchar_t *, int, _QWORD *, __int64); // rbx
  __int64 v10; // rdx
  _QWORD v11[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)a2 + 32LL))(a2, v11);
  if ( v3 < 0 )
  {
    v5 = 86LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v7 = v11[0] - 0x4658059A45DB96FFLL;
  if ( v11[0] == 0x4658059A45DB96FFLL )
    v7 = v11[1] - 0x1012647F7CCD4687LL;
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 2);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, const wchar_t *, int, _QWORD *, __int64))(*(_QWORD *)v8 + 32LL);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
      1u,
      3u,
      v4);
    LOBYTE(v10) = 1;
    v3 = v9(v8, v10, 0LL, L"CurrentVirtualDesktop", 3, v11, 16LL);
    if ( v3 < 0 )
    {
      v5 = 93LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
