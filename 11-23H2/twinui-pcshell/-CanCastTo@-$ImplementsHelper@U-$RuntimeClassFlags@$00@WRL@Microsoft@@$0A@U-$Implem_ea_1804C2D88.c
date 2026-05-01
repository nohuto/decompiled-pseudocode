/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804C2D88
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804C7510 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1804C7510.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSelectTargetView>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  void **v2; // r8
  const struct _GUID *v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  _DWORD *v6; // r10
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r8
  __int64 v11; // r9

  if ( InlineIsEqualGUID(a2, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57) )
  {
    *v2 = (void *)v4;
    return 0LL;
  }
  result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), v3, v2);
  if ( (_DWORD)result == -2147467262 )
    result = 2147500034LL;
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v6, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
    {
      *v8 = v9;
      return 0LL;
    }
    if ( InlineIsEqualGUID(v7, &GUID_741390c6_ef1e_43ce_bfc2_6cfb131c012e) )
    {
      *v10 = v11 + 8;
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
