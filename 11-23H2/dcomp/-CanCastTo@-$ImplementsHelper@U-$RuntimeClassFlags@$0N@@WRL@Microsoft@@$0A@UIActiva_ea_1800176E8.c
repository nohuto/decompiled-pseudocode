/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@23@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@789@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800176E8
 * Callers:
 *     ??$CreateActivationFactory@VCompositorFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180017390 (--$CreateActivationFactory@VCompositorFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YA.c)
 *     ?QueryInterface@CompositorFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E100 (-QueryInterface@CompositorFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteropCompositorFactoryPartner@Composition@UI@Windows@@@WRL@Microsoft@@UICompositorStatics@Composition@UI@Windows@@UIInteropCompositorFactoryRestricted@567@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180108110 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIInterop_ea_180108110.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::IInteropCompositorFactoryPartner>,Windows::UI::Composition::ICompositorStatics,Windows::UI::Composition::IInteropCompositorFactoryRestricted,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  void **v4; // r8
  unsigned int v5; // ebx
  unsigned int CanCastTo; // eax
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rax
  const struct _GUID *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  unsigned int v15; // r10d

  v5 = 0;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *v4 = (void *)a1;
    return 0LL;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), a2, v4);
  if ( CanCastTo == -2147467262 )
  {
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b) )
    {
      v10 = a1 + 40;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_080db93e_121e_4d97_8b74_1dfcf91987ea) )
      {
        *v12 = v13;
        return v5;
      }
      if ( !(unsigned int)InlineIsEqualGUID(v11, &GUID_b27006d1_d095_432c_9d79_038d269d7aa3) )
        return v15;
      v10 = v14 + 8;
    }
    *v9 = v10;
  }
  else
  {
    return CanCastTo;
  }
  return v5;
}
