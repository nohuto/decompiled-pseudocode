/*
 * XREFs of _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x18003F988
 * Callers:
 *     std::for_each_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_530575f8b419a08780554bb070101504___ @ 0x18003F8C8 (std--for_each_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--We.c)
 * Callees:
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180022838 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003FAF0 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_530575f8b419a08780554bb070101504_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, __int64); // rdi
  __int64 v7; // rax
  _BYTE v8[72]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v9; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v10; // [rsp+B8h] [rbp+48h] BYREF

  v9 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v9) >= 0 && v9 )
  {
    v10 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v9, &v10) >= 0 )
    {
      v5 = v10;
      v6 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 232LL);
      v7 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v8, a1);
      v6(v5, v7);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v9);
  return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
}
