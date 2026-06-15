/*
 * XREFs of ?GetFormatCount@CCompositeSystemEffect@@UEAAJPEAI@Z @ 0x18014F300
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18004201C (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@wil@@YAJAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@PEAPEAUIAudioSystemEffectsCustomFormats@@@Z @ 0x18014ED00 (--$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV-$ComPtr@UIAudioProcessingObject@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCompositeSystemEffect::GetFormatCount(CCompositeSystemEffect *this, unsigned int *a2)
{
  int v3; // edx
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *((_DWORD *)this + 14);
  if ( v3 )
  {
    v7 = 0LL;
    v4 = (_QWORD *)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                     (__int64)this + 48,
                     v3 - 1);
    wil::com_query_to_nothrow<IAudioSystemEffectsCustomFormats,Microsoft::WRL::ComPtr<IAudioProcessingObject> &>(
      v4,
      (__int64)&v7);
    if ( v7 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, a2);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
      return v5;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  }
  return 0LL;
}
