/*
 * XREFs of _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x1800124FC
 * Callers:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x180011C08 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     ?RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ @ 0x180012540 (-RemoveStaleObjects@CDeviceGraphObjectsStore@@IEAAXXZ.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180013C14 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___ @ 0x1800E74F0 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

char __fastcall lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v4) < 0 || !v4 )
    v2 = 1;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v4);
  return v2;
}
