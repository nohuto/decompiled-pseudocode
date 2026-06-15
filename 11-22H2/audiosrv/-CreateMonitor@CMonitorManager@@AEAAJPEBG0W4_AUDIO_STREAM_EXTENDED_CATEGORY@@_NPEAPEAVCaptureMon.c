/*
 * XREFs of ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x18012C5B4
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A578 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x18012C818 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18012CA38 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E3A84 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F1010 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z @ 0x18012B910 (--0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D45C (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CreateMonitor(__int64 a1, _WORD *a2, _WORD *a3, int a4, char a5, _QWORD *a6)
{
  _QWORD *v10; // rsi
  int v11; // edi
  LPVOID v12; // rax
  const char *v13; // r9
  void *v14; // rbx
  int v15; // eax
  unsigned int v16; // edi
  const char *v17; // r9
  __int64 result; // rax
  ATL::CAtlException *v19; // rbx
  int v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  ATL::CAtlException *v23; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v22 = 0LL;
  v21 = 0LL;
  v10 = a6;
  *a6 = 0LL;
  v11 = 0;
  v12 = operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    try
    {
      if ( v12 )
        v14 = (void *)CMonitorManager::CaptureMonitor::CaptureMonitor((__int64)v12, a1, a2, a3, a4, a5);
      else
        v14 = 0LL;
      v21 = v14;
    }
    catch ( ATL::CAtlException *v23 )
    {
      v19 = v23;
      if ( *(_DWORD *)v23 == -1073741571 )
        _o__resetstkoflw();
      v10 = a6;
      v11 = *(_DWORD *)v19;
      v14 = v21;
    }
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        2745LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v11,
        v20);
    if ( !v14 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        2747LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        v13);
    v15 = CMonitorManager::CaptureMonitor::Initialize(v14);
    v16 = v15;
    if ( v15 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        2751LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v15,
        v20);
    v21 = 0LL;
    *v10 = v14;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x55u,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v14);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
    result = v16;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAC7,
                           (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                           v17);
  }
  return result;
}
