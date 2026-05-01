/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewHostItemEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803CD7C4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@UIViewHostItemPropertyChangedArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803CFAE0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1803CFAE0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewHostItemEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::Holographic::IViewHostItemPropertyChangedArgs>::CanCastTo(
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

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_fd9e009a_061f_45df_a623_54eb80d770a5);
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
  if ( InlineIsEqualGUID(v9, &GUID_9e9bf7a6_7bfc_48e0_87e5_259b27939cd4) )
    *v10 = v11 + 8;
  else
    return (unsigned int)-2147467262;
  return v6;
}
