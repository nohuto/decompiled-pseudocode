/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180052430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001C748 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002219C (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18003EEA0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180052778 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x1800E3F64 (WPP_SF_qS.c)
 *     WPP_SF_qd @ 0x1800E40B4 (WPP_SF_qd.c)
 *     wil::details::lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___::_lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___ @ 0x1800E77A4 (wil--details--lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___--_lambda_call__lambda_d953.c)
 *     wil::details::lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___::_lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___ @ 0x1800E77C4 (wil--details--lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___--_lambda_call__lambda_e7a2.c)
 *     WPP_SF_dq @ 0x1800E9CE4 (WPP_SF_dq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        union _RTL_RUN_ONCE *this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  int v9; // r15d
  const unsigned __int16 *v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  struct _RTL_CRITICAL_SECTION *v13; // r14
  void **v14; // rax
  unsigned __int16 **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 ***Ptr; // rsi
  __int64 **i; // rbx
  __int64 *v20; // r9
  int v21; // eax
  unsigned int v22; // eax
  int AudioSessionControl; // eax
  unsigned int v24; // edi
  struct CServerAudioSessionControl *v25; // rdi
  int v26; // eax
  unsigned int v27; // r15d
  void ***v28; // rdi
  __int64 v30; // rdx
  signed int v31; // [rsp+40h] [rbp-C0h] BYREF
  struct CServerAudioSessionControl *v32[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+58h] [rbp-A8h]
  void **v34; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 **v35; // [rsp+68h] [rbp-98h] BYREF
  struct CAudioSession *v36; // [rsp+70h] [rbp-90h] BYREF
  void ***v37; // [rsp+78h] [rbp-88h]
  unsigned __int16 ***v38; // [rsp+80h] [rbp-80h]
  __int128 v39; // [rsp+88h] [rbp-78h] BYREF
  char v40; // [rsp+98h] [rbp-68h]
  __int128 v41; // [rsp+A0h] [rbp-60h] BYREF
  char v42; // [rsp+B0h] [rbp-50h]
  _BYTE v43[80]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v37 = a4;
  v38 = a5;
  v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
  v33 = v9;
  *a4 = 0LL;
  *a5 = 0LL;
  *a3 = 0;
  v36 = 0LL;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v43);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, this, v9);
  }
  v10 = (const unsigned __int16 *)&this[30];
  if ( this[33].Ptr >= (PVOID)8 )
    v10 = *(const unsigned __int16 **)v10;
  v11 = CAudioSessionInstanceId::Initialize(
          (CAudioSessionInstanceId *)v43,
          a2,
          v10,
          &GUID_SystemSounds_AudioSessionId,
          1);
  v12 = v11;
  if ( v11 < 0 )
  {
    v30 = 854LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v11);
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v43);
    goto LABEL_25;
  }
  v11 = CAudioSessionManager::CreateAudioSession(this, a2, (struct CAudioSessionInstanceId *)v43, 14, 0, 0, &v36);
  v12 = v11;
  if ( v11 < 0 )
  {
    v30 = 861LL;
    goto LABEL_30;
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v43);
  v13 = (struct _RTL_CRITICAL_SECTION *)&this[1];
  EnterCriticalSection((LPCRITICAL_SECTION)&this[1]);
  v31 = 0;
  v14 = (void **)MIDL_user_allocate(8 * (__int64)this[8].Ptr);
  v34 = v14;
  if ( !v14 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x366,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_33;
  }
  memset_0(v14, 0, 8 * (__int64)this[8].Ptr);
  v32[0] = (struct CServerAudioSessionControl *)&v31;
  v32[1] = (struct CServerAudioSessionControl *)&v34;
  v39 = *(_OWORD *)v32;
  v40 = 1;
  v15 = (unsigned __int16 **)MIDL_user_allocate(8 * (__int64)this[8].Ptr);
  v35 = v15;
  if ( !v15 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x372,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x8007000ELL);
    wil::details::lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___::_lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___(&v39);
LABEL_33:
    if ( this != (union _RTL_RUN_ONCE *)-8LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)&this[1]);
    goto LABEL_25;
  }
  memset_0(v15, 0, 8 * (__int64)this[8].Ptr);
  v32[0] = (struct CServerAudioSessionControl *)&v31;
  v32[1] = (struct CServerAudioSessionControl *)&v35;
  v41 = *(_OWORD *)v32;
  v42 = 1;
  Ptr = (__int64 ***)this[7].Ptr;
  for ( i = *Ptr; i != (__int64 **)Ptr; i = (__int64 **)*i )
  {
    v20 = i[12];
    v21 = *((_DWORD *)v20 + 161);
    if ( (!v21 || v21 == v9) && *((_DWORD *)v20 + 84) != 2 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          31,
          (unsigned int)&WPP_c22fced76a16385f24e46043528014d7_Traceguids,
          (_DWORD)v20,
          0LL);
      }
      v32[0] = 0LL;
      v22 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
      AudioSessionControl = CAudioSessionManager::CreateAudioSessionControl(
                              (CAudioSessionManager *)v32,
                              (struct CAudioSession *)i[12],
                              v22,
                              0,
                              v32);
      v24 = AudioSessionControl;
      if ( AudioSessionControl < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x395,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)AudioSessionControl);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
        wil::details::lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___::_lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___(&v41);
        wil::details::lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___::_lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___(&v39);
        if ( v13 )
          LeaveCriticalSection(v13);
        v12 = v24;
        goto LABEL_25;
      }
      v25 = v32[0];
      v26 = (*(__int64 (__fastcall **)(struct CServerAudioSessionControl *, unsigned __int16 **))(*(_QWORD *)v32[0]
                                                                                                + 120LL))(
              v32[0],
              &v35[v31]);
      v27 = v26;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x396,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v26);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
        wil::details::lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___::_lambda_call__lambda_e7a2b3fb80c66b26b9fa382759a6ec05___(&v41);
        wil::details::lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___::_lambda_call__lambda_d9535dcdb7548fef18ac21c0bf23d41c___(&v39);
        if ( v13 )
          LeaveCriticalSection(v13);
        v12 = v27;
        goto LABEL_25;
      }
      v32[0] = 0LL;
      v34[v31++] = v25;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v32);
      v9 = v33;
    }
  }
  *a3 = v31;
  v28 = v37;
  *v37 = v34;
  *v38 = v35;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), v16, v17, *a3, *v28);
  }
  if ( v13 )
    LeaveCriticalSection(v13);
  v12 = 0;
LABEL_25:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v36);
  return v12;
}
