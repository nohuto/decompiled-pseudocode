/*
 * XREFs of ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x180106010
 * Callers:
 *     <none>
 * Callees:
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180016C84 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800427FC (-move_initialize_from@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ??4?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z @ 0x180043E58 (--4-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmixProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x180046EBC (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180046F0C (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CF0EC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     wil::details::lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___::_lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___ @ 0x1800D85C8 (wil--details--lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___--_lambda_call__lambda_15af.c)
 *     ??0SystemAudioStream@@QEAA@$$QEAU0@@Z @ 0x1801044A4 (--0SystemAudioStream@@QEAA@$$QEAU0@@Z.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::ConnectToSaDevice(__int64 a1, __int64 *a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v9)(__int64 *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _BYTE v17[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v19[32]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  int v22[316]; // [rsp+550h] [rbp+450h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A88h] [rbp+988h]

  v4 = *a2;
  v18 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 56);
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v18);
  v10 = v9(a2, &v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    SystemAudioStream::SystemAudioStream((__int64)v19, (__int64)a4);
    v12 = RpcImpersonateClient(0LL);
    if ( v12 )
    {
      v11 = wil::details::in1diag3::Return_Win32(
              retaddr,
              2272LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)v12);
    }
    else
    {
      v17[1] = 1;
      memset_0(v22, 0, 0x4E8uLL);
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v18 + 64LL))(
              v18,
              a1 + 344,
              0LL,
              *(_QWORD *)(a1 + 696),
              v22);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v14 = SystemAudioStream::move_initialize_from((SystemAudioStream *)a4, (struct SYSTEM_AUDIO_STREAM *)v22);
        v11 = v14;
        if ( v14 >= 0 )
        {
          RpcRevertToSelf();
          wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::operator=(a4 + 5, v21);
          a4[4] = v20;
          v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 80) + 120LL))(
                  *(_QWORD *)(a1 + 80),
                  v18,
                  a3);
          v11 = v15;
          if ( v15 >= 0 )
          {
            Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((__int64 *)(a1 + 88), (__int64)a2);
            CBaseStreamGroupProxy::ConnectToSaDevice_Base((CBaseStreamGroupProxy *)a1);
            SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v19);
            v11 = 0;
            goto LABEL_13;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8EF,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v15);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8E7,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v14);
          RpcRevertToSelf();
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E4,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v13);
        wil::details::lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___::_lambda_call__lambda_15af8d8cc10e76121fd4ef8a2ec9e537___((__int64)v17);
      }
    }
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10);
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v18);
  return v11;
}
