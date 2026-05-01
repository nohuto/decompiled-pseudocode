/*
 * XREFs of ??$GetAsInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAJ@Z @ 0x1803EBC50
 * Callers:
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803ED85C (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _lambda_b82ac4fb33360f3f9c564012a0e4845d_::operator() @ 0x18064CC94 (_lambda_b82ac4fb33360f3f9c564012a0e4845d_--operator().c)
 * Callees:
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1802D29FC (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 */

__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetAsInt32<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        LONG *a3)
{
  int FailIf; // ebx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+30h] [rbp-38h]
  PROPVARIANT propvarIn[5]; // [rsp+40h] [rbp-28h] BYREF

  *a3 = 0;
  LOWORD(propvarIn[0]) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a1, (__int64)&v6, propvarIn);
  if ( FailIf >= 0 )
  {
    *a3 = 0;
    if ( LOWORD(propvarIn[0]) )
      FailIf = PropVariantToInt32(propvarIn, a3);
    else
      FailIf = -2147023728;
  }
  PropVariantClear(propvarIn);
  return (unsigned int)FailIf;
}
