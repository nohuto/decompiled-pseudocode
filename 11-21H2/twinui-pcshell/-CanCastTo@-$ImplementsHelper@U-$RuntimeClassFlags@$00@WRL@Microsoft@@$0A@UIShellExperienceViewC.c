/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180391120
 * Callers:
 *     ??$MakeAndInitialize@VShellExperienceViewChangedArg@?1??_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z@UIShellExperienceViewChangedArg@789Windows@@AEAW46789Windows@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@AEAW4ShellExperienceViewChangeType@4567@AEAJ@Z @ 0x180390BAC (--$MakeAndInitialize@VShellExperienceViewChangedArg@-1--_FireViewChanged@ShellExperienceView@Cor.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803915A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1803915A0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg,IWeakReferenceSource>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // edx
  __int64 v8; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_1b7d8b95_d5cb_4cff_874f_11fdf16217ac);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v3 = v5;
    return 0LL;
  }
  else
  {
    v8 = v5 + 8;
    if ( *v4 == 56
      && v4[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && v4[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && v4[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      *v3 = v8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v6;
  }
}
