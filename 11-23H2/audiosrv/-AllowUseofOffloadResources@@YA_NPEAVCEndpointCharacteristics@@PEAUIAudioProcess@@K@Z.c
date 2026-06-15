/*
 * XREFs of ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x18011CBB8
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180123830 (AudioServerIsFormatSupported.c)
 *     AudioServerIsOffloadCapable @ 0x180124560 (AudioServerIsOffloadCapable.c)
 * Callees:
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800102C0 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AllowUseofOffloadResources(
        struct CEndpointCharacteristics *this,
        struct IAudioProcess *a2,
        unsigned int a3)
{
  char result; // al
  char v7; // bl
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  result = (*(__int64 (__fastcall **)(struct IProcessSubmixManager *))(*(_QWORD *)g_ProcessSubmixManager + 64LL))(g_ProcessSubmixManager);
  v7 = 0;
  if ( result )
  {
    v8 = 0LL;
    if ( (int)CEndpointCharacteristics::TryGetCustomResourceManagerService(
                this,
                &GUID_39a3af14_c4e0_431e_84af_4d4c1087da45,
                &v8) < 0
      || !v8
      || (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v8 + 88LL))(v8) )
    {
      if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, _QWORD))(*(_QWORD *)a2 + 144LL))(a2, a3, 0LL) )
        v7 = 1;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
    return v7;
  }
  return result;
}
