/*
 * XREFs of ??$com_query_to_nothrow@UIAudioSystemEffectsCustomFormats@@AEAV?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@wil@@@wil@@YAJAEAV?$com_ptr_t@UIAudioProcessingObject@@Uerr_returncode_policy@wil@@@0@PEAPEAUIAudioSystemEffectsCustomFormats@@@Z @ 0x180143F80
 * Callers:
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@CEndpointCharacteristics@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18014872C (-GetCustomDeviceFormatsSupportedOnEndpoint@CEndpointCharacteristics@@QEAAJPEAIPEAPEAPEAUtWAVEFOR.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::com_query_to_nothrow<IAudioSystemEffectsCustomFormats,wil::com_ptr_t<IAudioProcessingObject,wil::err_returncode_policy> &>(
        _QWORD *a1,
        __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097, a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
      (const char *)(unsigned int)v2);
  return v3;
}
