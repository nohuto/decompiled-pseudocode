/*
 * XREFs of ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010F07C
 * Callers:
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x18010F6B8 (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CVirtualAudioStream@@QEAA@XZ @ 0x18010F2A0 (--0CVirtualAudioStream@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010FE90 (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualAudioStream,CVirtualAudioStream,IAudioProcess * &,enum _AUDIO_STREAM_EXTENDED_CATEGORY,unsigned short const * &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 &>(
        CVirtualAudioStream **a1,
        struct IAudioProcess **a2,
        unsigned int *a3,
        const unsigned __int16 **a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a5)
{
  CVirtualAudioStream *v9; // rax
  int v10; // edi
  CVirtualAudioStream *v11; // rbx

  *a1 = 0LL;
  v9 = (CVirtualAudioStream *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = CVirtualAudioStream::CVirtualAudioStream(v9);
    v10 = CVirtualAudioStream::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(CVirtualAudioStream *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v10 = 0;
    }
    if ( v11 )
      (*(void (__fastcall **)(CVirtualAudioStream *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
