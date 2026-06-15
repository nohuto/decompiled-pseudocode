/*
 * XREFs of ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18001D888
 * Callers:
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800212E0 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001D4A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800E3F14 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMuteHardware::FindMuteControlForEndpoint(
        CMuteHardware *this,
        struct IUnknown *a2,
        struct IPartsList *a3)
{
  int v6; // ebx
  CAudioSessionManager *v7; // r10
  struct IUnknown *v8; // rcx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  struct IUnknown *v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF
  int v16; // [rsp+88h] [rbp+38h] BYREF
  int v17; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  v16 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids, this);
  }
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_26;
  }
  v12 = 0LL;
  pv = 0LL;
  v15 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))a2->lpVtbl[1].QueryInterface)(
         a2,
         &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
         23LL);
  if ( v6 >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].Release)(a2, &pv);
    if ( v6 >= 0 )
    {
      v7 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
      {
        if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            15,
            (unsigned int)&WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids,
            (_DWORD)this,
            (__int64)pv);
          v7 = WPP_GLOBAL_Control;
        }
        if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v7 + 7) & 0x10000) != 0
          && *((_BYTE *)v7 + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)v7 + 2), 16LL, &WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids, this);
          v7 = WPP_GLOBAL_Control;
        }
      }
      v8 = v14;
      if ( v14 != a2 )
      {
        ATL::AtlComQIPtrAssign(&v14, a2, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21);
        v8 = v14;
        v7 = WPP_GLOBAL_Control;
      }
      if ( v8 )
      {
        v6 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v8->lpVtbl[3].Release)(v8, &v16);
        if ( v6 < 0 )
          goto LABEL_22;
        v7 = WPP_GLOBAL_Control;
      }
      if ( v16 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 64LL))(v12, &v15);
        if ( v6 < 0 )
          goto LABEL_22;
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, _QWORD))(*(_QWORD *)v15 + 104LL))(v15, 0LL, &v17, 0LL);
        v11 = v17;
        if ( v10 < 0 )
          v11 = 1;
        v17 = v11;
        if ( v11 == 1 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, struct IPartsList *, GUID *, GUID *, char *))(*(_QWORD *)v12 + 72LL))(
                 v12,
                 a3,
                 &GUID_35caf6e4_f3b3_4168_bb4b_55e77a461c7e,
                 &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
                 (char *)this + 48);
          if ( v6 < 0 )
            goto LABEL_22;
        }
        v7 = WPP_GLOBAL_Control;
      }
      if ( *((_QWORD *)this + 6) )
        goto LABEL_19;
      v6 = (*(__int64 (__fastcall **)(__int64, struct IPartsList *, GUID *, char *))(*(_QWORD *)v12 + 32LL))(
             v12,
             a3,
             &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
             (char *)this + 48);
      if ( v6 >= 0 )
      {
        v7 = WPP_GLOBAL_Control;
LABEL_19:
        if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v7 + 7) & 0x10000) != 0
          && *((_BYTE *)v7 + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)v7 + 2), 17LL, &WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids, this);
        }
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(**((_QWORD **)this + 6) + 104LL))(
               *((_QWORD *)this + 6),
               23LL,
               &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
               (char *)this + 56);
      }
    }
  }
LABEL_22:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v6 < 0 )
  {
    if ( *((_DWORD *)this + 16) )
    {
      (*(void (__fastcall **)(_QWORD, CMuteHardware *))(**((_QWORD **)this + 6) + 120LL))(*((_QWORD *)this + 6), this);
      *((_DWORD *)this + 16) = 0;
    }
    AudSrvTraceLoggingErrorHelper("CMuteHardware::FindMuteControlForEndpoint", 0x1AFu, v6);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
LABEL_26:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v14);
  return (unsigned int)v6;
}
