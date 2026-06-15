/*
 * XREFs of ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001D8B0
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14001CF18 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001B78C (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140052860 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14005288C (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
  struct IUnknown **v9; // r14
  _QWORD *v11; // rcx
  struct CEndpointInstance *v12; // [rsp+60h] [rbp+18h] BYREF
  void *v13; // [rsp+68h] [rbp+20h]

  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v4;
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
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_62a3f78b253e347743ca076fbdb7a17c_Traceguids);
    }
    AudioMediaType = CEndpointInstance::CreateDeviceEndpointInstance(a1, &v12);
    if ( AudioMediaType >= 0 )
    {
      v9 = (struct IUnknown **)(v5 + 48);
      *((_QWORD *)v5 + 4) = v12;
      AudioMediaType = CreateAudioMediaType(
                         *((const WAVEFORMATEX **)a1 + 1),
                         *(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 16LL) + 18,
                         (IAudioMediaType **)v5 + 6);
      if ( AudioMediaType >= 0 )
      {
        if ( *((struct IUnknown **)v5 + 1) != *v9 )
          ATL::AtlComPtrAssign((struct IUnknown **)v5 + 1, *v9);
        if ( *((struct IUnknown **)v5 + 2) != *v9 )
          ATL::AtlComPtrAssign((struct IUnknown **)v5 + 2, *v9);
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
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_62a3f78b253e347743ca076fbdb7a17c_Traceguids);
    v11 = WPP_GLOBAL_Control;
  }
  if ( v7 )
  {
    (**v7)(v7, 1LL);
    v11 = WPP_GLOBAL_Control;
  }
  if ( v11 != &WPP_GLOBAL_Control && (*((_DWORD *)v11 + 7) & 0x20000) != 0 && *((_BYTE *)v11 + 25) >= 2u )
    WPP_SF_d(v11[2], 15LL, &WPP_62a3f78b253e347743ca076fbdb7a17c_Traceguids, (unsigned int)AudioMediaType);
  AudDGTraceLoggingErrorHelper("CDeviceProcessNode::CreateDeviceProcessNode", 0x16Bu, AudioMediaType);
  return (unsigned int)AudioMediaType;
}
