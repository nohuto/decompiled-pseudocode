/*
 * XREFs of ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D45C
 * Callers:
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x18012C5B4 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D1C4 (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800281F0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800E4308 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1800E4358 (WPP_SF_qqq.c)
 *     ??0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z @ 0x18012B7BC (--0CMonitor@@QEAA@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z.c)
 *     WPP_SF_dD @ 0x18012FC68 (WPP_SF_dD.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18013030C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CMonitorManager::CaptureMonitor::Initialize(_QWORD *pv)
{
  char *v1; // r14
  CMonitor **v2; // r15
  __int64 v3; // rax
  int v4; // ebx
  char *v5; // r13
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rdx
  struct IMMDevice *v10; // rbx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  _QWORD *v17; // rdx
  struct IMMDevice *v18; // rbx
  HRESULT (__stdcall *v19)(IMMDevice *, LPWSTR *); // rdi
  LPVOID v20; // rax
  __int64 v21; // rbx
  CAudioSessionManager *v22; // rcx
  HANDLE *v23; // rbx
  struct _TP_WAIT *ThreadpoolWait; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  ATL::CAtlException *v28; // rbx
  char *v29; // [rsp+20h] [rbp-A8h]
  struct IMMDevice *v30; // [rsp+30h] [rbp-98h] BYREF
  LPVOID pva; // [rsp+38h] [rbp-90h] BYREF
  LPVOID Src; // [rsp+40h] [rbp-88h] BYREF
  __int64 v33; // [rsp+48h] [rbp-80h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v35; // [rsp+60h] [rbp-68h]
  CMonitor **v36; // [rsp+68h] [rbp-60h]
  HANDLE *v37; // [rsp+70h] [rbp-58h]
  char *v38; // [rsp+78h] [rbp-50h]
  ATL::CAtlException *v39; // [rsp+80h] [rbp-48h] BYREF
  bool v41; // [rsp+D8h] [rbp+10h] BYREF
  LPVOID v42; // [rsp+E0h] [rbp+18h]
  struct IMMDevice *v43; // [rsp+E8h] [rbp+20h] BYREF

  v1 = (char *)pv;
  v30 = 0LL;
  v43 = 0LL;
  Src = 0LL;
  pva = 0LL;
  v33 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v35 = 0LL;
  v2 = (CMonitor **)(pv + 25);
  v36 = (CMonitor **)(pv + 25);
  v3 = pv[25];
  if ( v3 && *(_DWORD *)(v3 + 56) != 6 )
  {
    PropVariantClear(pvar);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v33);
    v4 = -2147023649;
    goto LABEL_74;
  }
  v5 = (char *)(pv + 24);
  v38 = (char *)(pv + 24);
  v6 = *(__int64 **)(pv[24] + 64LL);
  v7 = *v6;
  if ( *((_QWORD *)v1 + 9) )
  {
    v9 = v1 + 56;
    if ( *((_QWORD *)v1 + 10) >= 8uLL )
      v9 = (_QWORD *)*v9;
    v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, struct IMMDevice **))(v7 + 40))(v6, v9, &v30);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, struct IMMDevice **))(v7 + 32))(v6, 1LL, 0LL, &v30);
  }
  v4 = v8;
  if ( v8 < 0 )
    goto LABEL_63;
  v10 = v30;
  GetId = v30->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &Src,
    0LL);
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(v10, &Src);
  if ( v4 < 0 )
    goto LABEL_63;
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( *((_WORD *)Src + v13) );
  std::wstring::assign(v1 + 128, Src, v13);
  v14 = *(__int64 **)(*(_QWORD *)v5 + 64LL);
  v15 = *v14;
  if ( *((_QWORD *)v1 + 13) )
  {
    v17 = v1 + 88;
    if ( *((_QWORD *)v1 + 14) >= 8uLL )
      v17 = (_QWORD *)*v17;
    v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, struct IMMDevice **))(v15 + 40))(v14, v17, &v43);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, struct IMMDevice **))(v15 + 32))(v14, 0LL, 0LL, &v43);
  }
  v4 = v16;
  if ( v16 < 0 )
    goto LABEL_63;
  v18 = v43;
  v19 = v43->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pva,
    0LL);
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v19)(v18, &pva);
  if ( v4 < 0 )
    goto LABEL_63;
  do
    ++v12;
  while ( *((_WORD *)pva + v12) );
  std::wstring::assign(v1 + 160, pva, v12);
  if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))v30->lpVtbl->OpenPropertyStore)(v30, 0LL, &v33) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v33 + 40LL))(
           v33,
           &PKEY_MonitorStreamCategory,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      if ( LODWORD(pvar[1]) >= 0x18 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x56u,
            (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
            (int)pvar[1]);
        }
      }
      else
      {
        *((_DWORD *)v1 + 30) = pvar[1];
      }
    }
    v20 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v42 = v20;
    if ( v20 )
      v21 = CMonitor::CMonitor((__int64)v20, *((_DWORD *)v1 + 30), v1[49] == 0);
    else
      v21 = 0LL;
    if ( *v2 )
      (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)*v2 + 16LL))(*v2);
    *v2 = (CMonitor *)v21;
    if ( !v21 )
    {
      v4 = -2147024882;
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control )
      {
LABEL_68:
        if ( v1[48] )
        {
          (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 32LL))(*((_QWORD *)v1 + 5), v1);
          v1[48] = 0;
        }
        goto LABEL_70;
      }
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
      {
LABEL_64:
        if ( v22 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v22 + 7) & 0x800000) != 0
          && *((_BYTE *)v22 + 25) >= 2u )
        {
          WPP_SF_d(*((_QWORD *)v22 + 2), 0x5Bu, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v4);
        }
        goto LABEL_68;
      }
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x57u, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
LABEL_63:
      v22 = WPP_GLOBAL_Control;
      goto LABEL_64;
    }
    v29 = v1 + 40;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v43->lpVtbl->Activate)(
           v43,
           &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
           1LL);
    if ( v4 < 0 )
      goto LABEL_63;
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v1 + 5) + 24LL))(*((_QWORD *)v1 + 5), v1);
    if ( v4 < 0 )
      goto LABEL_63;
    v1[48] = 1;
    try
    {
      v23 = (HANDLE *)(v1 + 32);
      v37 = (HANDLE *)(v1 + 32);
      *((_QWORD *)v1 + 4) = CreateEventW(0LL, 0, 0, 0LL);
    }
    catch ( ATL::CAtlException *v39 )
    {
      v28 = v39;
      if ( *(_DWORD *)v39 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v42) = *(_DWORD *)v28;
      v4 = (int)v42;
      v1 = (char *)pv;
      if ( (int)v42 < 0 )
        goto LABEL_63;
      v2 = v36;
      v23 = v37;
      v5 = v38;
    }
    ThreadpoolWait = CreateThreadpoolWait(CMonitorManager::OnCaptureMonitorTerminated, v1, 0LL);
    *((_QWORD *)v1 + 2) = ThreadpoolWait;
    if ( !ThreadpoolWait )
    {
      v4 = -2147024882;
      goto LABEL_63;
    }
    SetThreadpoolWait(ThreadpoolWait, *v23, 0LL);
    *((_QWORD *)*v2 + 21) = *v23;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x58u,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v1,
        *v2);
    }
    v4 = CMonitor::Initialize(*v2, v30, v43, &v41);
    if ( v4 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x5Au,
          (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
          v1,
          v1,
          *v2);
      }
      *(_QWORD *)(*(_QWORD *)v5 + 304LL) = 0LL;
      *((_DWORD *)v1 + 6) = 0;
      goto LABEL_70;
    }
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v29) = v41;
      WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), v25, v26, (unsigned int)v4, v29);
      v22 = WPP_GLOBAL_Control;
    }
    if ( v41 )
      goto LABEL_64;
    v4 = 1;
  }
LABEL_70:
  PropVariantClear(pvar);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v33);
  if ( pva )
    CoTaskMemFree(pva);
  if ( Src )
    CoTaskMemFree(Src);
LABEL_74:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v43);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v30);
  return (unsigned int)v4;
}
