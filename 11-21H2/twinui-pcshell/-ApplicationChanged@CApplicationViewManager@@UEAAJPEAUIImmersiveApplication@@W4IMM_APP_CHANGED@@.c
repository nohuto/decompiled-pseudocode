/*
 * XREFs of ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180142E00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800850E0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::ApplicationChanged(__int64 a1, struct IImmersiveApplication *a2, int a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 *AddressOf; // rax
  int ViewForApplication; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 8 )
    return 0LL;
  v13[0] = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 - 40);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(v13);
  ViewForApplication = CApplicationViewManager::GetViewForApplication(v5, a2, (struct IApplicationView **)AddressOf);
  if ( ViewForApplication >= 0 )
  {
    v12 = 0LL;
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v13[0])(
           v13[0],
           &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0,
           &v12);
    ViewForApplication = v8;
    if ( v8 < 0 )
    {
      v11 = 805LL;
    }
    else
    {
      LOBYTE(v9) = 1;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 40LL))(v12, v9);
      ViewForApplication = v8;
      if ( v8 >= 0 )
        goto LABEL_6;
      v11 = 806LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_6:
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v13);
  return (unsigned int)ViewForApplication;
}
