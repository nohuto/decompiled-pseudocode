/*
 * XREFs of ?DelayedInitialization@CAppViewManager@@UEAAJXZ @ 0x1801A9BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180044940 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::DelayedInitialization(CAppViewManager *this)
{
  void *v2; // rbx
  int (__fastcall *v3)(void *, __int64 *); // rdi
  unsigned int i; // esi
  HRESULT v5; // eax
  unsigned int v6; // ebx
  void *v7; // rbx
  __int64 (__fastcall *v8)(void *, char *); // rsi
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, _QWORD, GUID *, ApplicationViewHelpers **); // rdi
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v13; // r8
  __int64 v14; // rdx
  void *v15; // [rsp+30h] [rbp-20h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v19; // [rsp+80h] [rbp+30h] BYREF
  int v20; // [rsp+88h] [rbp+38h] BYREF
  ApplicationViewHelpers *v21; // [rsp+90h] [rbp+40h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &ppvOut) >= 0 )
  {
    v22 = 0LL;
    v2 = ppvOut;
    v3 = *(int (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    if ( v3(v2, &v22) >= 0 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 24LL))(v22, &v19) >= 0 )
    {
      for ( i = 0; i < v19; ++i )
      {
        v21 = 0LL;
        v10 = v22;
        v11 = *(int (__fastcall **)(__int64, _QWORD, GUID *, ApplicationViewHelpers **))(*(_QWORD *)v22 + 32LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
        if ( v11(v10, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v21) >= 0
          && ((*(int (__fastcall **)(ApplicationViewHelpers *, int *))(*(_QWORD *)v21 + 216LL))(v21, &v20) < 0 || !v20) )
        {
          v17[0] = 0LL;
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(v17);
          if ( (int)ApplicationViewHelpers::GetApplicationFromView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v21,
                      (struct IApplicationView *)AddressOf,
                      v13) >= 0 )
            (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this + 4) + 32LL))(
              (char *)this + 32,
              v17[0],
              2LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v17);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  }
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  v5 = IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 409LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_9;
  }
  v7 = v15;
  v8 = *(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v15 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  v5 = v8(v7, (char *)this + 152);
  v6 = v5;
  if ( v5 < 0 )
  {
    v14 = 410LL;
    goto LABEL_20;
  }
  v6 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v6;
}
