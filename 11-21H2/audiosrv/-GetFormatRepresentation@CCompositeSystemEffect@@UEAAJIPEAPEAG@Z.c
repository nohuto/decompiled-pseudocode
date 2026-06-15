/*
 * XREFs of ?GetFormatRepresentation@CCompositeSystemEffect@@UEAAJIPEAPEAG@Z @ 0x18014F390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18004201C (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@wil@@YAJAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@PEAPEAUIAudioSystemEffectsCustomFormats@@@Z @ 0x18014ED00 (--$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV-$ComPtr@UIAudioProcessingObject@.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetFormatRepresentation(
        CCompositeSystemEffect *this,
        unsigned int a2,
        unsigned __int16 **a3)
{
  int v5; // edx
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v5 = *((_DWORD *)this + 14);
  if ( v5 )
  {
    v9 = 0LL;
    v6 = (_QWORD *)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                     (__int64)this + 48,
                     v5 - 1);
    wil::com_query_to_nothrow<IAudioSystemEffectsCustomFormats,Microsoft::WRL::ComPtr<IAudioProcessingObject> &>(
      v6,
      (__int64)&v9);
    if ( v9 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int16 **))(*(_QWORD *)v9 + 40LL))(v9, a2, a3);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
      return v7;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  }
  return 0LL;
}
