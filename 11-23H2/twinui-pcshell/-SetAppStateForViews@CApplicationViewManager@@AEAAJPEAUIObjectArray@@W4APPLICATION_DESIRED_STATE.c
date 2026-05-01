/*
 * XREFs of ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18004D0E4
 * Callers:
 *     ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x18004D060 (-SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_ST.c)
 *     ?SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@Z @ 0x1803CC2E0 (-SetViewStateForDesiredAppState@CApplicationViewManager@@UEAAJPEBGW4APPLICATION_DESIRED_STATE@@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___ @ 0x1801D8534 (ShellPositionerHelpers--PerformCallbackOnView__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BD28 (--1-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationViewManager::SetAppStateForViews(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  unsigned int v5; // r13d
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // r14d
  unsigned int v10; // r15d
  __int64 (__fastcall *v11)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  int v13; // r13d
  void (__fastcall *v14)(__int64, GUID *, IUnknown **); // rbx
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
  if ( v6 >= 0 )
  {
    if ( v22 )
    {
      v9 = 0;
      v10 = 0;
      while ( 1 )
      {
        v16 = 0LL;
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
        v12 = v11(a2, v10, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v16);
        if ( v12 >= 0 )
        {
          v18 = v16;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
          v19 = v3;
          punk = 0LL;
          v13 = v5 | 2;
          v24 = v13;
          v14 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 + 32) + 32LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          v14(a1 + 32, &GUID_00000000_0000_0000_c000_000000000046, &punk);
          v5 = v13 & 0xFFFFFFFC | 1;
          v6 = ShellPositionerHelpers::PerformCallbackOnView__lambda_8914cc4465c7915cfbd8b08b3bc0fff7___(punk);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&punk);
          Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(&v18);
          v3 = v23;
          if ( v23 == 1 && v6 >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
            return (unsigned int)v6;
          }
          if ( v9 >= 0 )
            v9 = v6;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3AA,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v12,
            v15);
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
        if ( ++v10 >= v22 )
          return (unsigned int)v9;
      }
    }
    v6 = -2147319765;
    v7 = 932LL;
  }
  else
  {
    v7 = 931LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v6,
    v15);
  return (unsigned int)v6;
}
