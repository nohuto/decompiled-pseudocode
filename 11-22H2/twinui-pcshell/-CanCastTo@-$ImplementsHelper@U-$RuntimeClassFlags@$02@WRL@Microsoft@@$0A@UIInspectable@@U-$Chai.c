/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@U?$ChainInterfaces@UIVirtualDesktop2@@UIVirtualDesktop@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWeakReferenceSource@@UIVirtualDesktopPrivate@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013B2FC
 * Callers:
 *     ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x18013CFE8 (-CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtual.c)
 *     ?CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013D108 (-CVirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::ChainInterfaces<IVirtualDesktop2,IVirtualDesktop,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,IVirtualDesktopPrivate,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v3; // rcx
  void **v4; // r8
  _DWORD *v5; // r10
  char *v6; // r11
  unsigned int CanCastTo; // r9d
  char *v8; // r11
  _DWORD *v10; // rcx
  BOOL v11; // eax
  _DWORD *v12; // rcx
  const struct _GUID *v13; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90);
  CanCastTo = 0;
  if ( IsEqualGUID )
  {
    *v4 = v6;
    return 0LL;
  }
  else
  {
    v8 = v6 + 8;
    if ( *v5 == -1468952306
      && v5[1] == *(_DWORD *)&GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30.Data2
      && v5[2] == *(_DWORD *)GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30.Data4
      && v5[3] == *(_DWORD *)&GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30.Data4[4]
      || InlineIsEqualGUID(v3, &GUID_3f07f4be_b107_441a_af0f_39d82529072c)
      || (v11 = InlineIsEqualGUID(v10, &_uuidof__AUIWeakReferenceSource_Details_Platform__),
          v11 || InlineIsEqualGUID(v12, &GUID_c9be252c_e386_425e_b33c_ca422112f51f)) )
    {
      *v4 = v8;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 8), v13, v4);
      if ( CanCastTo == -2147467262 )
        return (unsigned int)-2147467262;
    }
    return CanCastTo;
  }
}
