/*
 * XREFs of ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x180002634
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     AudioServerIsOffloadCapable @ 0x1800F34B0 (AudioServerIsOffloadCapable.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18000FE54 (-TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceReso.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall AllowUseofOffloadResources(
        struct CEndpointCharacteristics *a1,
        struct IAudioProcess *a2,
        unsigned int a3)
{
  char v6; // bl
  struct ISaDeviceResourceManager *v8; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct IProcessSubmixManager *))(*(_QWORD *)g_ProcessSubmixManager + 64LL))(g_ProcessSubmixManager) )
    return 0;
  v8 = 0LL;
  if ( (int)TryGetSaDeviceResourceManagerForEndpoint(a1, &v8) < 0
    || !v8
    || (*(unsigned __int8 (__fastcall **)(struct ISaDeviceResourceManager *))(*(_QWORD *)v8 + 88LL))(v8) )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, _QWORD))(*(_QWORD *)a2 + 144LL))(a2, a3, 0LL) )
      v6 = 1;
  }
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v8);
  return v6;
}
