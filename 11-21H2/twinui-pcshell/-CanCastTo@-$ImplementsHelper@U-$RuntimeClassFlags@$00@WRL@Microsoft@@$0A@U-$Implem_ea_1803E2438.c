/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803E2438
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x1803DCC30 (--$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E5760 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1803E5760.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForSwitch>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  void **v3; // r8
  __int64 v4; // r10
  const struct _GUID *v5; // r11
  unsigned int v6; // r9d
  unsigned int CanCastTo; // eax
  _DWORD *v8; // r11
  _DWORD *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57);
  v6 = 0;
  if ( IsEqualGUID )
    goto LABEL_5;
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), v5, v3);
  if ( CanCastTo != -2147467262 )
    return CanCastTo;
  if ( InlineIsEqualGUID(v8, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
LABEL_5:
    *v3 = (void *)v4;
    return v6;
  }
  if ( InlineIsEqualGUID(v9, &GUID_8a11574c_5d5f_48d7_bd8c_d7a801fca248) )
    *v10 = v11 + 8;
  else
    return (unsigned int)-2147467262;
  return v6;
}
