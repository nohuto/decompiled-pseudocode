/*
 * XREFs of ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140022F2C
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000C590 (-CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STRE.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CStreamProcessNode::CreateStreamProcessNode(const WAVEFORMATEX **a1, struct CStreamProcessNode **a2)
{
  char *v4; // rax
  char *v5; // rbx
  int v6; // r9d
  struct IUnknown **v7; // r14
  unsigned int AudioMediaType; // edi

  v4 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_DWORD *)a1;
    v7 = (struct IUnknown **)(v4 + 48);
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 10) = 3;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_DWORD *)v4 + 6) = v6 != 0;
    *(_QWORD *)v4 = &CStreamProcessNode::`vftable';
    *((_QWORD *)v4 + 6) = 0LL;
    *((_DWORD *)v4 + 14) = 0;
    AudioMediaType = CreateAudioMediaType(a1[16], a1[16]->cbSize + 18, (IAudioMediaType **)v4 + 6);
    if ( (AudioMediaType & 0x80000000) == 0 )
    {
      *((_DWORD *)v5 + 14) = *((_DWORD *)a1 + 3);
      *((_DWORD *)v5 + 15) = *(_DWORD *)a1;
      if ( *((struct IUnknown **)v5 + 1) != *v7 )
        ATL::AtlComPtrAssign((struct IUnknown **)v5 + 1, *v7);
      if ( *((struct IUnknown **)v5 + 2) != *v7 )
        ATL::AtlComPtrAssign((struct IUnknown **)v5 + 2, *v7);
      *a2 = (struct CStreamProcessNode *)v5;
      return AudioMediaType;
    }
    (**(void (__fastcall ***)(char *, __int64))v5)(v5, 1LL);
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
      &WPP_62a3f78b253e347743ca076fbdb7a17c_Traceguids,
      AudioMediaType);
  }
  AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamProcessNode", 0x1AAu, AudioMediaType);
  return AudioMediaType;
}
