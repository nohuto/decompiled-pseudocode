/*
 * XREFs of ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D1C4
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180007204 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D45C (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18012F5E8 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180131DE8 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x1801321C8 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CaptureMonitor::HandleDefaultDeviceChanges(char *pv)
{
  int v2; // r14d
  __int64 v3; // rbx
  int (__fastcall *v4)(__int64, LPVOID *); // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, LPVOID *); // rdi
  _QWORD *v8; // rcx
  CAudioSessionManager *v9; // rcx
  unsigned __int16 v10; // dx
  LPVOID pva; // [rsp+60h] [rbp+30h] BYREF
  LPVOID v13; // [rsp+68h] [rbp+38h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  pva = 0LL;
  if ( !*((_QWORD *)pv + 9) )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)pv + 24) + 64LL) + 32LL))(
           *(_QWORD *)(*((_QWORD *)pv + 24) + 64LL),
           1LL,
           0LL,
           &v15) < 0 )
      goto LABEL_25;
    v3 = v15;
    v4 = *(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v15 + 40LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v13,
      0LL);
    if ( v4(v3, &v13) < 0 )
      goto LABEL_25;
    v5 = pv + 128;
    if ( *((_QWORD *)pv + 19) >= 8uLL )
      v5 = (_QWORD *)*v5;
    if ( (unsigned int)_o__wcsnicmp(v5, v13, *((_QWORD *)pv + 18)) )
      goto LABEL_13;
  }
  if ( !*((_QWORD *)pv + 13)
    && (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)pv + 24) + 64LL) + 32LL))(
         *(_QWORD *)(*((_QWORD *)pv + 24) + 64LL),
         0LL,
         0LL,
         &v14) >= 0 )
  {
    v6 = v14;
    v7 = *(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pva,
      0LL);
    if ( v7(v6, &pva) >= 0 )
    {
      v8 = pv + 160;
      if ( *((_QWORD *)pv + 23) >= 8uLL )
        v8 = (_QWORD *)*v8;
      if ( (unsigned int)_o__wcsnicmp(v8, pva, *((_QWORD *)pv + 22)) )
      {
LABEL_13:
        CMonitor::Stop(*((CMonitor **)pv + 25));
        CMonitorManager::CaptureMonitor::UninitializeSynchronously((CMonitorManager::CaptureMonitor *)pv);
        v2 = CMonitorManager::CaptureMonitor::Initialize(pv);
        if ( v2 >= 0 )
        {
          if ( pv[49] )
          {
            v2 = CMonitor::Start(*((CMonitor **)pv + 25));
            if ( v2 < 0 )
            {
              v9 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                v10 = 65;
                goto LABEL_24;
              }
            }
          }
        }
        else
        {
          v9 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            v10 = 64;
LABEL_24:
            WPP_SF_d(*((_QWORD *)v9 + 2), v10, (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, v2);
          }
        }
      }
    }
  }
LABEL_25:
  if ( pva )
    CoTaskMemFree(pva);
  if ( v13 )
    CoTaskMemFree(v13);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
  return (unsigned int)v2;
}
