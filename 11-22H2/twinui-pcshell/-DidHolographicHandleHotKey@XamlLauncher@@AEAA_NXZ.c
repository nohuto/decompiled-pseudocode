/*
 * XREFs of ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x1801B3A68
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F9B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800DE5F0 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIShellPositionerActivationHandler@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIShellPositionerActivationHandler@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18039469C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIShellPositionerActivationHandler@@@WRL@Microsoft@@@@YAPEAPEAX.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall XamlLauncher::DidHolographicHandleHotKey(XamlLauncher *this)
{
  XamlLauncher *v1; // rbx
  void **v2; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( *((_BYTE *)this + 176) )
  {
    v7 = 0LL;
    v1 = (XamlLauncher *)((char *)this + 48);
    v2 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellPositionerActivationHandler>>(&v7);
    if ( XamlLauncher::QueryService(
           v1,
           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
           v2) >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v7 + 48LL))(v7, 1LL, &v6);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x747,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v3);
    }
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v7);
  }
  return v6 != 0;
}
