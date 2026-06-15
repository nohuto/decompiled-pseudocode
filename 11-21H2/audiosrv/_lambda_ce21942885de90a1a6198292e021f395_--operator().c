/*
 * XREFs of _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800DF5F4
 * Callers:
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180017A20 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___ @ 0x1800DEF04 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 */

char __fastcall lambda_ce21942885de90a1a6198292e021f395_::operator()(__int64 a1, _QWORD *a2)
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
