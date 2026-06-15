/*
 * XREFs of _lambda_6721409c6d8d6be39a12e154768b61d2_::operator() @ 0x1800029B4
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180016FE0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800F6D54 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800F6D54.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 */

char __fastcall lambda_6721409c6d8d6be39a12e154768b61d2_::operator()(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v4) < 0 || !v4 )
    v2 = 1;
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v4);
  return v2;
}
