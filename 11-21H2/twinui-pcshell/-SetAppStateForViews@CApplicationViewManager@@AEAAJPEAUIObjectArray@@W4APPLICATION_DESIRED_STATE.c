/*
 * XREFs of ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x180055EC8
 * Callers:
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x180055C90 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x1803109C0 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_288154352f0edaa8a1b00de8c47b1028___ @ 0x180056048 (ShellPositionerHelpers--PerformCallbackOnView__lambda_288154352f0edaa8a1b00de8c47b1028___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::SetAppStateForViews(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  unsigned int v5; // r13d
  int v6; // ebx
  int v7; // r14d
  unsigned int v8; // r15d
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // r13d
  void (__fastcall *v12)(__int64, GUID *, IUnknown **); // rbx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h] BYREF
  int v19; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  unsigned int v22; // [rsp+A8h] [rbp+50h] BYREF
  int v23; // [rsp+B0h] [rbp+58h]
  int v24; // [rsp+B8h] [rbp+60h]

  v23 = a3;
  v3 = a3;
  v5 = 0;
  v24 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v22);
  if ( v6 < 0 )
  {
    v14 = 934LL;
  }
  else
  {
    if ( v22 )
    {
      v7 = 0;
      v8 = 0;
      while ( 1 )
      {
        v16 = 0LL;
        v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
        v10 = v9(a2, v8, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v16);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3AD,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v10,
            v15);
        }
        else
        {
          v18 = v16;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
          v19 = v3;
          punk = 0LL;
          v11 = v5 | 2;
          v24 = v11;
          v12 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 32) + 32LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          v12(a1 + 32, &GUID_00000000_0000_0000_c000_000000000046, &punk);
          v5 = v11 & 0xFFFFFFFC | 1;
          v6 = ShellPositionerHelpers::PerformCallbackOnView__lambda_288154352f0edaa8a1b00de8c47b1028___(punk);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
          v3 = v23;
          if ( v23 == 1 && v6 >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
            return (unsigned int)v6;
          }
          if ( v7 >= 0 )
            v7 = v6;
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
        if ( ++v8 >= v22 )
          return (unsigned int)v7;
      }
    }
    v6 = -2147319765;
    v14 = 935LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v6,
    v15);
  return (unsigned int)v6;
}
