/*
 * XREFs of ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x1800F8340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DA73C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x1800ED9F8 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800F0C08 (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ??0SystemAudioStream@@QEAA@$$QEAU0@@Z @ 0x1800F7004 (--0SystemAudioStream@@QEAA@$$QEAU0@@Z.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x1800F74EC (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x1800F7598 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x1800F8564 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::ConnectToSaDevice(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v9)(__int64 *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  int v21[316]; // [rsp+550h] [rbp+450h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A88h] [rbp+988h]

  v4 = *a2;
  v17[0] = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 56);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v17);
  v10 = v9(a2, v17);
  v11 = v10;
  if ( v10 >= 0 )
  {
    SystemAudioStream::SystemAudioStream((__int64)v18, (__int64)a4);
    v12 = RpcImpersonateClient(0LL);
    if ( v12 )
    {
      v11 = wil::details::in1diag3::Return_Win32(
              retaddr,
              1362LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)v12);
    }
    else
    {
      memset_0(v21, 0, 0x4E8uLL);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v17[0] + 64LL))(
              v17[0],
              a1 + 272,
              0LL,
              *(_QWORD *)(a1 + 576),
              v21);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v13 = SystemAudioStream::move_initialize_from((SystemAudioStream *)a4, (struct SYSTEM_AUDIO_STREAM *)v21);
        v11 = v13;
        if ( v13 >= 0 )
        {
          RpcRevertToSelf();
          wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=(a4 + 5, v20);
          a4[4] = v19;
          v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 80) + 80LL))(
                  *(_QWORD *)(a1 + 80),
                  v17[0],
                  a3);
          v11 = v15;
          if ( v15 >= 0 )
          {
            Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((__int64 *)(a1 + 88), (__int64)a2);
            CBaseStreamGroupProxy::ConnectToSaDevice_Base((CBaseStreamGroupProxy *)a1);
            v11 = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x561,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v15);
          }
          goto LABEL_13;
        }
        v14 = 1369LL;
      }
      else
      {
        v14 = 1366LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v13);
      RpcRevertToSelf();
    }
LABEL_13:
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v18);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54A,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v10);
LABEL_14:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v17);
  return v11;
}
