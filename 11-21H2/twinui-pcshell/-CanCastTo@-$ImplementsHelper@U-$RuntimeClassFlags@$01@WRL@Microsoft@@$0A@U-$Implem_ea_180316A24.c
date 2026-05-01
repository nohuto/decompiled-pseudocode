/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UICustomShellManager@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180316A24
 * Callers:
 *     ??$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18015FBBC (--$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007FED0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,ICustomShellManager,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int CanCastTo; // r11d
  BOOL IsEqualGUID; // eax
  void **v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r10d

  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                a1,
                (int *)a2,
                a3);
  if ( CanCastTo == -2147467262 )
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_0b86d836_f65d_4516_a7e9_5ba7c2681877);
    CanCastTo = 0;
    if ( IsEqualGUID )
    {
      *v6 = (void *)v7;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v7 + 8), a2, v6);
      if ( CanCastTo == v8 )
        return v8;
    }
  }
  return CanCastTo;
}
