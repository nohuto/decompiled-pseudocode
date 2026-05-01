/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIObjectProvider@@UIPresentedWindowOverride@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D2E18
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationActivationHistory@@UIImmersiveWindowManager@@UIImmersiveMonitorNotification@@UIImmersiveWindowManagerInternal@@UIObjectProvider@@UIPresentedWindowOverride@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CFB80 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicat_ea_1800CFB80.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectProvider,IPresentedWindowOverride>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v5; // r8
  __int64 v6; // r10
  unsigned int v7; // ecx

  if ( *a2 == -1509395416
    && a2[1] == *(_DWORD *)&GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data2
    && a2[2] == *(_DWORD *)GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data4
    && a2[3] == *(_DWORD *)&GUID_a6087428_3be3_4d73_b308_7c04a540bf1a.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee);
    v7 = 0;
    if ( IsEqualGUID )
      *v5 = v6 + 8;
    else
      return (unsigned int)-2147467262;
    return v7;
  }
}
