/*
 * XREFs of ?SetStopResult@?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x180464AFC
 * Callers:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18045D29C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 *     ?SetStopResult@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXJPEAJ@Z @ 0x180464AB4 (-SetStopResult@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAA.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18047ABCC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1802D9BA8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

bool __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        __int64 a1,
        int a2,
        int *a3)
{
  int v4; // eax
  const struct wil::FailureInfo *v5; // rdx
  int v6; // edx
  int v7; // eax
  _BYTE v9[168]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 < 1 )
  {
    memset_0(v9, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v9, v5);
  }
  v6 = *(_DWORD *)(a1 + 76);
  if ( v6 >= 0 )
  {
    *(_DWORD *)(a1 + 76) = a2;
    v6 = a2;
  }
  if ( a3 )
  {
    *a3 = v6;
    v4 = *(_DWORD *)(a1 + 72);
  }
  v7 = v4 - 1;
  *(_DWORD *)(a1 + 72) = v7;
  return v7 == 0;
}
