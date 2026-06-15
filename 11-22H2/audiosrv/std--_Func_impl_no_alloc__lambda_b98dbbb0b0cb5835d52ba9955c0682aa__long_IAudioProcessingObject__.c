/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b98dbbb0b0cb5835d52ba9955c0682aa__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x18004A020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ??$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAcousticEchoCancellation@@@Z @ 0x18002E758 (--$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAP.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180149658 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Func_impl_no_alloc__lambda_b98dbbb0b0cb5835d52ba9955c0682aa__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int128 *a3,
        int *a4)
{
  int v5; // esi
  unsigned int v6; // ebx
  _DWORD *v8; // rcx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r9
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+80h] [rbp+28h] BYREF
  __int64 v14; // [rsp+88h] [rbp+30h] BYREF
  __int128 *v15; // [rsp+90h] [rbp+38h] BYREF
  __int64 v16; // [rsp+98h] [rbp+40h] BYREF

  v12 = *a3;
  v5 = *a4;
  v13 = *a2;
  v6 = 0;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(*(_QWORD *)(a1 + 8))
    || **(_DWORD **)(a1 + 16) != 2
    || v5 )
  {
    v14 = 0LL;
    if ( wil::try_com_query_to<IApoAcousticEchoCancellation,IAudioProcessingObject * &>(&v13, (__int64)&v14) )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(a1 + 8) + 8288LL);
      if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 256LL) )
      {
        LODWORD(v13) = **(_DWORD **)(a1 + 16);
        v15 = &v12;
        v16 = *(_QWORD *)(v11 + 48);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
          v9,
          (unsigned int)&unk_180196648,
          v10,
          v11,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v13);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
      return (unsigned int)-2005139401;
    }
    else
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    }
  }
  return v6;
}
