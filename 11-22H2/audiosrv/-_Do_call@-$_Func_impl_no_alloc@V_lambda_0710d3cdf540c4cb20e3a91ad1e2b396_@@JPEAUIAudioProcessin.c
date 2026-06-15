/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_0710d3cdf540c4cb20e3a91ad1e2b396_@@JPEAUIAudioProcessingObject@@U_GUID@@I@std@@EEAAJ$$QEAPEAUIAudioProcessingObject@@$$QEAU_GUID@@$$QEAI@Z @ 0x180049CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAcousticEchoCancellation@@@Z @ 0x18002E758 (--$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 std::_Func_impl_no_alloc<_lambda_0710d3cdf540c4cb20e3a91ad1e2b396_,long,IAudioProcessingObject *,_GUID,unsigned int>::_Do_call(
        __int64 a1,
        __int64 *a2,
        ...)
{
  char v3; // bl
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  va_list va; // [rsp+40h] [rbp+18h]
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF
  va_list va1; // [rsp+48h] [rbp+20h]
  va_list va2; // [rsp+50h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v5 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v7 = va_arg(va2, _QWORD);
  v5 = *a2;
  v3 = 0;
  v7 = 0LL;
  if ( **(_BYTE **)(a1 + 8)
    || (v7 = 0LL,
        wil::try_com_query_to<IApoAcousticEchoCancellation,IAudioProcessingObject * &>((__int64 *)va, (__int64)va1)) )
  {
    v3 = 1;
  }
  **(_BYTE **)(a1 + 8) = v3;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)va1);
  return 0LL;
}
