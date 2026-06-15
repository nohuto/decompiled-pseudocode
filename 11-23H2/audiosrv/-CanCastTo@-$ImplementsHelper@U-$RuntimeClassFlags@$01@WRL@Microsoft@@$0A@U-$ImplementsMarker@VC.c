/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCBtAudioResourceManagerBase@@@Details@23@UISessionInternalEvents@@UIEndpointCustomFormatHandler@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F5A8C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtAudioResourceManagerBase@@UISessionInternalEvents@@UIEndpointCustomFormatHandler@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F9B80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800F9B80.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIEndpointCustomFormatHandler@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F5A54 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIEndpointCustomFormatH.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CBtAudioResourceManagerBase>,ISessionInternalEvents,IEndpointCustomFormatHandler>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _QWORD *v5; // r8
  __int64 v6; // r9
  const struct _GUID *v7; // r10
  __int64 result; // rax
  const struct _GUID *v9; // r10

  if ( InlineIsEqualGUID(a2, &GUID_39a3af14_c4e0_431e_84af_4d4c1087da45) )
    goto LABEL_7;
  if ( InlineIsEqualGUID(v2, &GUID_19c0b8fb_6913_4145_a14a_555adcca25cf) )
  {
    *v5 = v6;
    result = 0LL;
  }
  else
  {
    result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>::CanCastTo(
               v6 + 8,
               v7);
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v7, &GUID_a68ab569_b923_4330_a258_1735412d392e) )
    {
LABEL_7:
      *v3 = v4;
      return 0LL;
    }
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IEndpointCustomFormatHandler>::CanCastTo(
             v4 + 8,
             v9);
  }
  return result;
}
