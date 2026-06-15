/*
 * XREFs of ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x1400033FC
 * Callers:
 *     ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140003468 (-RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140015CD0 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140018394 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004F59C (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 * Callees:
 *     atexit @ 0x140028478 (atexit.c)
 *     _Init_thread_footer @ 0x140028758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400287C0 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VCAPOProcessingHost@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAPOProcessingHost@@@12@XZ @ 0x14006A4A4 (--$Make@VCAPOProcessingHost@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCAPOProcessingHost@@@12@X.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetAPOProcessingHostInstance(struct IAPOProcessingHost **a1)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( dword_1400CF9B0 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_1400CF9B0);
    if ( dword_1400CF9B0 == -1 )
    {
      v3 = (__int64 *)Microsoft::WRL::Details::Make<CAPOProcessingHost,>(&v8);
      v4 = *v3;
      *v3 = 0LL;
      qword_1400CF920 = v4;
      v5 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      atexit(GetAPOProcessingHostInstance_::_2_::_dynamic_atexit_destructor_for__pAPOProcessingHost__);
      Init_thread_footer(&dword_1400CF9B0);
    }
  }
  if ( qword_1400CF920 )
  {
    *a1 = (struct IAPOProcessingHost *)qword_1400CF920;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1400CF920 + 8LL))(qword_1400CF920);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x8007000ELL,
      v6);
    return 2147942414LL;
  }
}
