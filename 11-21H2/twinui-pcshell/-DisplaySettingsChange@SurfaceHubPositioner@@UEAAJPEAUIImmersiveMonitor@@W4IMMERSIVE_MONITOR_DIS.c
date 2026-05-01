/*
 * XREFs of ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180043FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804EDEF4 (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804EE084 (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, GUID *); // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, struct IImmersiveMonitor *, __int64); // rbx
  __int64 AddressOf; // rax
  int v15; // eax
  __int64 v16; // rdx
  SurfaceHubPositioner *v17; // rsi
  int v18; // [rsp+20h] [rbp-20h]
  struct IImmersiveMonitor *v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v21; // [rsp+60h] [rbp+20h] BYREF
  struct IImmersiveMonitor *v22; // [rsp+78h] [rbp+38h] BYREF

  if ( !*(_BYTE *)(a1 + 456) )
    return 0LL;
  if ( (a3 & 0x10) == 0
    || (v6 = SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange((SurfaceHubPositioner *)(a1 - 120), a2),
        v7 = v6,
        v6 >= 0) )
  {
    if ( (a3 & 0x28) != 0 )
    {
      v22 = 0LL;
      v9 = *(_QWORD *)(a1 + 40);
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *))(*(_QWORD *)v9 + 72LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      v11 = v10(v9, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
      v7 = v11;
      if ( v11 < 0 )
      {
        v8 = 471LL;
        goto LABEL_7;
      }
      v21 = 1;
      v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 40) + 32LL))(
              *(_QWORD *)(a1 + 40),
              &v21);
      v7 = v11;
      if ( v11 < 0 )
      {
        v8 = 473LL;
        goto LABEL_7;
      }
      if ( v21 <= 1 )
      {
        v17 = (SurfaceHubPositioner *)(a1 - 120);
      }
      else
      {
        v19[0] = 0LL;
        v12 = *(_QWORD *)(a1 + 40);
        v13 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64))(*(_QWORD *)v12 + 104LL);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v19);
        v15 = v13(v12, 1LL, v22, AddressOf);
        v7 = v15;
        if ( v15 < 0 )
        {
          v16 = 477LL;
LABEL_20:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v16,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v15,
            (int)&v22);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v19);
          goto LABEL_8;
        }
        v17 = (SurfaceHubPositioner *)(a1 - 120);
        v15 = SurfaceHubPositioner::_ReLayoutAllApps(v17, v19[0]);
        v7 = v15;
        if ( v15 < 0 )
        {
          v16 = 478LL;
          goto LABEL_20;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v19);
      }
      v11 = SurfaceHubPositioner::_ReLayoutAllApps(v17, v22);
      v7 = v11;
      if ( v11 < 0 )
      {
        v8 = 480LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v11,
          (int)&v22);
LABEL_8:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
        return v7;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D0,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v6,
    v18);
  return v7;
}
