/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIStartupTaskActivatedEventArgs@Activation@ApplicationModel@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1806305EC
 * Callers:
 *     ?QueryInterface@StartupTaskActivatedEventArgsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180631980 (-QueryInterface@StartupTaskActivatedEventArgsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@@U?$CloakedIid@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@@@23@U?$CloakedIid@UIActivatedEventArgsInternal@Activation@ApplicationModel@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800EB084 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIActivatedEventArgsWit.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,IWeakReferenceSource,Windows::ApplicationModel::Activation::IStartupTaskActivatedEventArgs>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v4; // r8
  __int64 result; // rax
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r10d

  if ( InlineIsEqualGUID(a2, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e) )
  {
    *v4 = a1;
    return 0LL;
  }
  result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>::CanCastTo(
             a1 + 8,
             a2);
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( InlineIsEqualGUID(a2, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    *v7 = v8;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v6, &GUID_03b11a58_5276_4d91_8621_54611864d5fa) )
  {
    *v9 = v10 + 8;
    return 0LL;
  }
  return v11;
}
