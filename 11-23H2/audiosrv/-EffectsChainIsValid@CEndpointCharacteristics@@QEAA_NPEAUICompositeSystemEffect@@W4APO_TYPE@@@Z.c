/*
 * XREFs of ?EffectsChainIsValid@CEndpointCharacteristics@@QEAA_NPEAUICompositeSystemEffect@@W4APO_TYPE@@@Z @ 0x180045C00
 * Callers:
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002AAD0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CEndpointCharacteristics::EffectsChainIsValid(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  bool v4; // bl
  __int64 (__fastcall ***v5)(); // rdx
  __int128 v7; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall **v8)(); // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v10)(); // [rsp+68h] [rbp-20h]
  int v11; // [rsp+A0h] [rbp+18h] BYREF

  v11 = a3;
  v3 = *a2;
  *(_QWORD *)&v7 = a1;
  *((_QWORD *)&v7 + 1) = &v11;
  v8 = off_18017AE68;
  v9 = v7;
  v10 = &v8;
  v4 = (*(int (__fastcall **)(__int64 *, __int64 (__fastcall ***)()))(v3 + 40))(a2, &v8) >= 0;
  if ( v10 )
  {
    v5 = &v8;
    LOBYTE(v5) = v10 != &v8;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v10)[4])(v10, v5);
  }
  return v4;
}
