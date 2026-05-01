/*
 * XREFs of ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1804ED95C
 * Callers:
 *     ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180150F00 (-OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804EE358 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180098FE0 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_GetMonitorForLaunch(
        SurfaceHubPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        struct IImmersiveMonitor **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v12; // r8
  int ApplicationFromView; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, LPCWCH *); // rdi
  int v16; // eax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, __int64, struct IImmersiveMonitor *, __int64 *); // rbx
  __int64 *v19; // rax
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  LPCWCH lpString1; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v27; // [rsp+80h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v28; // [rsp+90h] [rbp+40h] BYREF
  struct IImmersiveMonitor *v29; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  v28 = 0LL;
  v6 = *((_QWORD *)this + 20);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v6 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
  v8 = v7(v6, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v28);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v27 = 1;
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 20) + 32LL))(
           *((_QWORD *)this + 20),
           &v27);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 497LL;
      goto LABEL_5;
    }
    if ( v27 > 1 )
    {
      v22 = 0LL;
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v22);
      ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(
                              a2,
                              (struct IApplicationView *)AddressOf,
                              v12);
      v9 = ApplicationFromView;
      if ( ApplicationFromView < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F5,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)ApplicationFromView);
LABEL_17:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        goto LABEL_20;
      }
      lpString1 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v14 = v22;
      v15 = *(__int64 (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v22 + 32LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      v24 = -1LL;
      v25 = -1LL;
      v16 = v15(v14, &lpString1);
      v9 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F8,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v16);
LABEL_16:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
        goto LABEL_17;
      }
      if ( CompareStringOrdinal(
             lpString1,
             -1,
             L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel",
             -1,
             1) != 2 )
      {
        v29 = 0LL;
        v17 = *((_QWORD *)this + 20);
        v18 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v17 + 104LL);
        v19 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v29);
        v20 = v18(v17, 1LL, v28, v19);
        v9 = v20;
        if ( v20 >= 0 )
        {
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
          *a3 = v29;
          v9 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FD,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v20);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
        goto LABEL_16;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
    *a3 = v28;
    v9 = 0;
    goto LABEL_20;
  }
  v10 = 495LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
  return v9;
}
