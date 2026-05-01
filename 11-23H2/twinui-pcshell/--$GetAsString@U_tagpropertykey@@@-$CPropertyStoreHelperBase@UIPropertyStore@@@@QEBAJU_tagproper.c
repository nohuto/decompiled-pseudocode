/*
 * XREFs of ??$GetAsString@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1802EA0AC
 * Callers:
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x1802EA428 (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1806CF52C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1802D29FC (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        PWSTR *a3)
{
  int FailIf; // ebx
  __int16 v5; // ax
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+30h] [rbp-38h]
  PROPVARIANT propvar[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  *a3 = 0LL;
  LOWORD(propvar[0]) = 0;
  v7 = *a2;
  v8 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, (__int64)&v7, propvar);
  if ( FailIf >= 0 )
  {
    v5 = (__int16)propvar[0];
    if ( LOWORD(propvar[0]) == 31 && propvar[1] )
    {
      *a3 = (PWSTR)propvar[1];
      *(_OWORD *)propvar = 0LL;
      v10 = 0LL;
      FailIf = 0;
    }
    else
    {
      *a3 = 0LL;
      if ( v5 )
        FailIf = PropVariantToStringAlloc(propvar, a3);
      else
        FailIf = -2147023728;
    }
  }
  PropVariantClear(propvar);
  return (unsigned int)FailIf;
}
