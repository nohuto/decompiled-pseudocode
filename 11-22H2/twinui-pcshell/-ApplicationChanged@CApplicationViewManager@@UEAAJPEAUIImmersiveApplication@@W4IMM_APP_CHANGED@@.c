/*
 * XREFs of ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18002FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800152F0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::ApplicationChanged(__int64 a1, struct IImmersiveApplication *a2, int a3)
{
  RTL_SRWLOCK *v5; // rbx
  int ViewForApplication; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  struct IApplicationView *v11[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 8 )
    return 0LL;
  v11[0] = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 - 40);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
  ViewForApplication = CApplicationViewManager::GetViewForApplication(v5, a2, v11);
  if ( ViewForApplication >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    v7 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v11[0])(
           v11[0],
           &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
           &v10);
    ViewForApplication = v7;
    if ( v7 < 0 )
    {
      v9 = 808LL;
    }
    else
    {
      LOBYTE(v8) = 1;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, v8);
      ViewForApplication = v7;
      if ( v7 >= 0 )
      {
LABEL_6:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
        goto LABEL_7;
      }
      v9 = 809LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v7,
      v10);
    goto LABEL_6;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
  return (unsigned int)ViewForApplication;
}
