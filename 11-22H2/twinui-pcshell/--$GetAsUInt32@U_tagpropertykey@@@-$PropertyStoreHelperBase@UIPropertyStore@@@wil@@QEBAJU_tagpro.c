/*
 * XREFs of ??$GetAsUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1807413FC
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x180742E3C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x18079AEB0 (-IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z.c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1802D29FC (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 */

__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        ULONG *a3)
{
  int v4; // eax
  int FailIf; // ebx
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+30h] [rbp-38h]
  PROPVARIANT propvarIn[5]; // [rsp+40h] [rbp-28h] BYREF

  v7 = *a2;
  LOWORD(propvarIn[0]) = 0;
  v4 = *((_DWORD *)a2 + 4);
  *a3 = 0;
  v8 = v4;
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, (__int64)&v7, propvarIn);
  if ( FailIf >= 0 )
  {
    *a3 = 0;
    if ( LOWORD(propvarIn[0]) )
      FailIf = PropVariantToUInt32(propvarIn, a3);
    else
      FailIf = -2147023728;
  }
  PropVariantClear(propvarIn);
  return (unsigned int)FailIf;
}
