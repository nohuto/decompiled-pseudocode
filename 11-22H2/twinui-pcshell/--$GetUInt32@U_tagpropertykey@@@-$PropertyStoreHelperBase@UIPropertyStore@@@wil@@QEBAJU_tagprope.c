/*
 * XREFs of ??$GetUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x18069A410
 * Callers:
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x18069F978 (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A1FC4 (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1806A2560 (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1802D29FC (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetUInt32<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        _DWORD *a3)
{
  int FailIf; // ebx
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+30h] [rbp-48h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-38h] BYREF
  int v9; // [rsp+48h] [rbp-30h]

  *a3 = 0;
  LOWORD(pvar) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, (__int64)&v6, &pvar);
  if ( FailIf >= 0 )
  {
    if ( (_WORD)pvar == 19 )
      *a3 = v9;
    else
      FailIf = -2147352571;
  }
  PropVariantClear(&pvar);
  return (unsigned int)FailIf;
}
