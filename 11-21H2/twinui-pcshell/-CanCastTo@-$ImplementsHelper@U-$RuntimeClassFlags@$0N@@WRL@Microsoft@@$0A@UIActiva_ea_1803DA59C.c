/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIBrokeredViewTabConverterStatics@Tabs@ComposableShell@Internal@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803DA59C
 * Callers:
 *     ??$CreateActivationFactory@VBrokeredViewTabConverterStatics@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1803DA3A0 (--$CreateActivationFactory@VBrokeredViewTabConverterStatics@@@Details@WRL@Microsoft@@YAJPEAIPEBU.c)
 *     ?QueryInterface@BrokeredViewTabConverterStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803DA690 (-QueryInterface@BrokeredViewTabConverterStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  void **v2; // r8
  __int64 v3; // r10
  const struct _GUID *v4; // r11
  unsigned int CanCastTo; // eax
  _DWORD *v7; // r11
  _QWORD *v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *v2 = (void *)v3;
    return 0LL;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 8), v4, v2);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(v7, &GUID_fb7d2c9e_f26c_49db_8031_0da0f4ed5643) )
        *v8 = v10 + 40;
      else
        return (unsigned int)-2147467262;
    }
    else
    {
      return CanCastTo;
    }
    return v9;
  }
}
