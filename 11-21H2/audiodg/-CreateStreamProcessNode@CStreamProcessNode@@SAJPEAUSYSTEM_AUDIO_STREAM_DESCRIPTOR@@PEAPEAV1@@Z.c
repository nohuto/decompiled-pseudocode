/*
 * XREFs of ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004778
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001327C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140013204 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x140031A14 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CStreamProcessNode::CreateStreamProcessNode(const WAVEFORMATEX **a1, struct CStreamProcessNode **a2)
{
  IAudioMediaType **v4; // rax
  struct CStreamProcessNode *v5; // rbx
  int v6; // r9d
  unsigned int AudioMediaType; // edi

  v4 = (IAudioMediaType **)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (struct CStreamProcessNode *)v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)a1;
    v4[1] = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 10) = 3;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 6) = v6 != 0;
    *v4 = (IAudioMediaType *)&CStreamProcessNode::`vftable';
    v4[6] = 0LL;
    *((_DWORD *)v4 + 14) = 0;
    AudioMediaType = CreateAudioMediaType(a1[16], a1[16]->cbSize + 18, v4 + 6);
    if ( (AudioMediaType & 0x80000000) == 0 )
    {
      *((_DWORD *)v5 + 14) = *((_DWORD *)a1 + 3);
      *((_DWORD *)v5 + 15) = *(_DWORD *)a1;
      ATL::CComPtr<IAudioMediaType>::operator=((char *)v5 + 8, (char *)v5 + 48);
      ATL::CComPtr<IAudioMediaType>::operator=((char *)v5 + 16, (char *)v5 + 48);
      *a2 = v5;
      return AudioMediaType;
    }
    (**(void (__fastcall ***)(struct CStreamProcessNode *, __int64))v5)(v5, 1LL);
  }
  else
  {
    AudioMediaType = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_459a70a20f2b395031111be1427f992c_Traceguids,
      AudioMediaType);
  }
  AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamProcessNode", 0x19Bu, AudioMediaType);
  return AudioMediaType;
}
