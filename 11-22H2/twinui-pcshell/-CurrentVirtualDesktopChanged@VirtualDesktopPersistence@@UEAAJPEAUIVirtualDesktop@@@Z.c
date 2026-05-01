/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180617920
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118CC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsRemoteVirtualDesktop@VirtualDesktopPersistence@@AEAA_NPEAUIVirtualDesktop@@@Z @ 0x180617B84 (-IsRemoteVirtualDesktop@VirtualDesktopPersistence@@AEAA_NPEAUIVirtualDesktop@@@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::CurrentVirtualDesktopChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2)
{
  VirtualDesktopPersistence *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, const wchar_t *, int, _QWORD *, __int64); // rbx
  __int64 v11; // rdx
  int v12; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)a2 + 32LL))(a2, v13);
  if ( v5 < 0 )
  {
    v6 = 74LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v13[0] != 0x4658059A45DB96FFLL || v13[1] != 0x1012647F7CCD4687LL )
  {
    v12 = 1;
    if ( !VirtualDesktopPersistence::IsRemoteVirtualDesktop(v4, a2) )
    {
      v9 = *((_QWORD *)this + 2);
      v12 = 0;
      v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, const wchar_t *, int, _QWORD *, __int64))(*(_QWORD *)v9 + 32LL);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
        1u,
        3u,
        v8);
      LOBYTE(v11) = 1;
      v5 = v10(v9, v11, 0LL, L"CurrentVirtualDesktop", 3, v13, 16LL);
      if ( v5 < 0 )
      {
        v6 = 85LL;
        goto LABEL_3;
      }
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const WCHAR *, int, int *, __int64))(**((_QWORD **)this + 2)
                                                                                               + 32LL))(
           *((_QWORD *)this + 2),
           0LL,
           0LL,
           L"IsCurrentVDRemote",
           4,
           &v12,
           4LL);
    if ( v5 < 0 )
    {
      v6 = 88LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
