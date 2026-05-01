/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCMultitaskingViewElementBase@@@Details@23@UIVirtualDesktopBarElement@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18056CFC8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIVirtualDesktopBarElement@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18056E9A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18056E9A0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IVirtualDesktopBarElement>::CanCastTo(
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

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861);
  v6 = 0;
  if ( IsEqualGUID || InlineIsEqualGUID(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d) )
  {
    *v4 = v5;
  }
  else if ( InlineIsEqualGUID(v7, &GUID_85b9f1f8_fde5_4c2f_852f_d7b23f7d3a96) )
  {
    *v8 = v9 + 208;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v6;
}
