/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800E0900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     MIDL_user_allocate @ 0x18001AC90 (MIDL_user_allocate.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001ACB0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qS @ 0x1800C9BF0 (WPP_SF_qS.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800D6154 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     _lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator() @ 0x1800DF638 (_lambda_d9535dcdb7548fef18ac21c0bf23d41c_--operator().c)
 *     _lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator() @ 0x1800DF6A0 (_lambda_e7a2b3fb80c66b26b9fa382759a6ec05_--operator().c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800DFB8C (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     WPP_SF_dq @ 0x1800E2484 (WPP_SF_dq.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x1800E6208 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800E6F6C (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  int v9; // edi
  const unsigned __int16 *v10; // r8
  int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rdx
  void **v14; // rax
  unsigned __int16 **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 ***v18; // rsi
  __int64 **i; // rbx
  __int64 *v20; // r9
  int v21; // eax
  unsigned int v22; // eax
  int AudioSessionControl; // eax
  struct CServerAudioSessionControl *v24; // rdi
  __int64 v25; // rdx
  signed int v27; // [rsp+40h] [rbp-C0h] BYREF
  struct CServerAudioSessionControl *v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+58h] [rbp-A8h]
  void **v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 **v31; // [rsp+68h] [rbp-98h] BYREF
  struct CAudioSession *v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 ***v33; // [rsp+78h] [rbp-88h]
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+80h] [rbp-80h] BYREF
  __int128 v35; // [rsp+88h] [rbp-78h] BYREF
  char v36; // [rsp+98h] [rbp-68h]
  __int128 v37; // [rsp+A0h] [rbp-60h] BYREF
  char v38; // [rsp+B0h] [rbp-50h]
  _BYTE v39[80]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v33 = a5;
  v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
  v29 = v9;
  *a4 = 0LL;
  *a5 = 0LL;
  *a3 = 0;
  v32 = 0LL;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v39);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
      this,
      v9);
  }
  v10 = (const unsigned __int16 *)((char *)this + 240);
  if ( *((_QWORD *)this + 33) >= 8uLL )
    v10 = *(const unsigned __int16 **)v10;
  v11 = CAudioSessionInstanceId::Initialize(
          (CAudioSessionInstanceId *)v39,
          a2,
          v10,
          &GUID_SystemSounds_AudioSessionId,
          1);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 853LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v11);
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v39);
    goto LABEL_39;
  }
  v11 = CAudioSessionManager::CreateAudioSession(this, a2, (struct CAudioSessionInstanceId *)v39, 14, 0, 0, &v32);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 860LL;
    goto LABEL_11;
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v39);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v34 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v27 = 0;
  v14 = (void **)MIDL_user_allocate(8LL * *((_QWORD *)this + 8));
  v30 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 8LL * *((_QWORD *)this + 8));
    v28[0] = (struct CServerAudioSessionControl *)&v27;
    v28[1] = (struct CServerAudioSessionControl *)&v30;
    v37 = *(_OWORD *)v28;
    v38 = 1;
    v15 = (unsigned __int16 **)MIDL_user_allocate(8LL * *((_QWORD *)this + 8));
    v31 = v15;
    if ( v15 )
    {
      memset_0(v15, 0, 8LL * *((_QWORD *)this + 8));
      v28[0] = (struct CServerAudioSessionControl *)&v27;
      v28[1] = (struct CServerAudioSessionControl *)&v31;
      v35 = *(_OWORD *)v28;
      v36 = 1;
      v18 = (__int64 ***)*((_QWORD *)this + 7);
      for ( i = *v18; i != (__int64 **)v18; i = (__int64 **)*i )
      {
        v20 = i[12];
        v21 = *((_DWORD *)v20 + 161);
        if ( (!v21 || v21 == v9) && *((_DWORD *)v20 + 84) != 2 )
        {
          if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qS(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x1Fu,
              (__int64)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids);
          }
          v28[0] = 0LL;
          v22 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
          AudioSessionControl = CAudioSessionManager::CreateAudioSessionControl(
                                  (CAudioSessionManager *)v28,
                                  (struct CAudioSession *)i[12],
                                  v22,
                                  0,
                                  v28);
          v12 = AudioSessionControl;
          if ( AudioSessionControl < 0 )
          {
            v25 = 916LL;
            goto LABEL_31;
          }
          v24 = v28[0];
          AudioSessionControl = (*(__int64 (__fastcall **)(struct CServerAudioSessionControl *, unsigned __int16 **))(*(_QWORD *)v28[0] + 120LL))(
                                  v28[0],
                                  &v31[v27]);
          v12 = AudioSessionControl;
          if ( AudioSessionControl < 0 )
          {
            v25 = 917LL;
LABEL_31:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v25,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)AudioSessionControl);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v28);
            v36 = 0;
            lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()((__int64)&v35);
            goto LABEL_32;
          }
          v28[0] = 0LL;
          v30[v27++] = v24;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v28);
          v9 = v29;
        }
      }
      *a3 = v27;
      *a4 = v30;
      *v33 = v31;
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), v16, v17, *a3, *a4);
      }
      v12 = 0;
    }
    else
    {
      v12 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x371,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)0x8007000ELL);
LABEL_32:
      v38 = 0;
      lambda_d9535dcdb7548fef18ac21c0bf23d41c_::operator()((__int64)&v37);
    }
  }
  else
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x8007000ELL);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v34);
LABEL_39:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
  return v12;
}
