/*
 * XREFs of ?_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z @ 0x1804E0E30
 * Callers:
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E1108 (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::_PrepareTaggingInfoForApp(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v6; // rbx
  int v7; // eax
  struct IApplicationView *v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r8
  void (__fastcall *v14)(__int64, ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  ApplicationViewHelpers *v19; // [rsp+60h] [rbp+18h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v2 = *(_QWORD *)a2;
  v19 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v2 + 32);
  v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &v20);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v6);
  v7 = v5(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 455LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)v10);
    goto LABEL_12;
  }
  if ( !ApplicationViewHelpers::GetWindowForView(
          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v19,
          v8) )
  {
    v9 = -2147467259;
    v11 = 458LL;
    v10 = 2147500037LL;
    goto LABEL_5;
  }
  v12 = *((_QWORD *)this + 26);
  v13 = 0LL;
  v18 = 0LL;
  if ( v12 )
  {
    v14 = *(void (__fastcall **)(__int64, ApplicationViewHelpers *, GUID *, __int64 *))(*(_QWORD *)v12 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
    v14(v12, v19, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v18);
    v13 = v18;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct IAppLayoutOperationItem *, __int64, _QWORD))(**((_QWORD **)this + 23)
                                                                                             + 24LL))(
          *((_QWORD *)this + 23),
          a2,
          v13,
          *((_QWORD *)this + 25));
  v9 = v15;
  if ( v15 >= 0 )
    v9 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D2,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v15);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
LABEL_12:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
  return v9;
}
