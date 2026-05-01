/*
 * XREFs of ?QueryInterface@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800810C0
 * Callers:
 *     ?QueryInterface@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FA680 (-QueryInterface@-$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@Applicatio_ea_1801FA680.c)
 *     ?QueryInterface@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FA6A0 (-QueryInterface@-$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@Applicatio_ea_1801FA6A0.c)
 *     ?QueryInterface@?$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@4Collections@Foundation@5@UDisplayRegionIdLifetimeTraits@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801FA6C0 (-QueryInterface@-$SimpleVectorView@UDisplayRegionId@WindowingEnvironment@Applicatio_ea_1801FA6C0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,XWinRT::IntVersionTag,1>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r10
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  void **v10; // r10
  _DWORD *v11; // rcx
  const struct _GUID *v12; // r9
  int CanCastTo; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v6 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return v3;
  }
  if ( InlineIsEqualGUID(v7, &GUID_ebe02ad8_a830_5451_b09a_7856d49cbbec)
    || InlineIsEqualGUID(v8, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
    || InlineIsEqualGUID(v11, &GUID_c6d1be9f_c3ef_5ac8_9005_e82eb498d9ea) )
  {
    *v10 = (void *)v9;
LABEL_11:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v10 + 8LL))(*v10);
    return v3;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v9 + 8), v12, v10);
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
  v3 = CanCastTo;
  if ( CanCastTo >= 0 )
    goto LABEL_11;
  return v3;
}
