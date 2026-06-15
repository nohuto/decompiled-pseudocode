/*
 * XREFs of ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004978
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000B1F4 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004CBC (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140013204 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x140031A14 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140051850 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CDeviceProcessNode::CreateDeviceProcessNode(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CDeviceProcessNode **a2)
{
  _QWORD *v4; // rax
  char *v5; // rbx
  int v6; // ecx
  void (__fastcall ***v7)(_QWORD, __int64); // rsi
  HRESULT AudioMediaType; // edi
  _QWORD *v10; // rcx
  struct CEndpointInstance *v11; // [rsp+60h] [rbp+18h] BYREF
  void *v12; // [rsp+68h] [rbp+20h]

  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  v5 = (char *)v4;
  if ( v4 )
  {
    v6 = *((_DWORD *)a1 + 18);
    v7 = (void (__fastcall ***)(_QWORD, __int64))v4;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 6) = v6;
    *((_DWORD *)v4 + 10) = 1;
    *v4 = &CDeviceProcessNode::`vftable';
    v4[6] = 0LL;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_459a70a20f2b395031111be1427f992c_Traceguids);
    }
    AudioMediaType = CEndpointInstance::CreateDeviceEndpointInstance(a1, &v11);
    if ( AudioMediaType >= 0 )
    {
      *((_QWORD *)v5 + 4) = v11;
      AudioMediaType = CreateAudioMediaType(
                         *((const WAVEFORMATEX **)a1 + 1),
                         *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 16LL) + 18,
                         (IAudioMediaType **)v5 + 6);
      if ( AudioMediaType >= 0 )
      {
        ATL::CComPtr<IAudioMediaType>::operator=(v5 + 8, v5 + 48);
        ATL::CComPtr<IAudioMediaType>::operator=(v5 + 16, v5 + 48);
        *a2 = (struct CDeviceProcessNode *)v5;
        return (unsigned int)AudioMediaType;
      }
    }
  }
  else
  {
    v7 = 0LL;
    AudioMediaType = -2147024882;
  }
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_459a70a20f2b395031111be1427f992c_Traceguids,
      (unsigned int)AudioMediaType);
    v10 = WPP_GLOBAL_Control;
  }
  if ( v7 )
  {
    (**v7)(v7, 1LL);
    v10 = WPP_GLOBAL_Control;
  }
  if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x20000) != 0 && *((_BYTE *)v10 + 25) >= 2u )
    WPP_SF_d(v10[2], 15LL, &WPP_459a70a20f2b395031111be1427f992c_Traceguids, (unsigned int)AudioMediaType);
  AudDGTraceLoggingErrorHelper("CDeviceProcessNode::CreateDeviceProcessNode", 0x15Cu, AudioMediaType);
  return (unsigned int)AudioMediaType;
}
