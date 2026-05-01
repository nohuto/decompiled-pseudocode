/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VObservableItem@@@Details@23@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18057080C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180570A00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180570A00.c)
 *     ?SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x180570BF4 (-SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<ObservableItem>,ISwitchItem,ISwitchItemInternal>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  unsigned int v6; // r9d
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27);
  v6 = 0;
  if ( IsEqualGUID || InlineIsEqualGUID(v3, &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc) )
  {
    *v4 = v5;
  }
  else if ( InlineIsEqualGUID(v7, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb) )
  {
    *v8 = v9 + 8;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v6;
}
