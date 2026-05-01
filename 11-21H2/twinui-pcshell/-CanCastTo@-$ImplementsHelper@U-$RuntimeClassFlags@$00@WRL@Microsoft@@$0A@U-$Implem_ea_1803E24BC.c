/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803E24BC
 * Callers:
 *     ??$?0VViewEventArgsForWindowingSettings@@@?$com_ptr_t@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVViewEventArgsForWindowingSettings@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1803DAABC (--$-0VViewEventArgsForWindowingSettings@@@-$com_ptr_t@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E57F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1803E57F0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs>::CanCastTo(
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
  if ( InlineIsEqualGUID(v9, &GUID_559064cb_9dc0_4491_9a6c_ace3cd4e51c8) )
    *v10 = v11 + 8;
  else
    return (unsigned int)-2147467262;
  return v6;
}
