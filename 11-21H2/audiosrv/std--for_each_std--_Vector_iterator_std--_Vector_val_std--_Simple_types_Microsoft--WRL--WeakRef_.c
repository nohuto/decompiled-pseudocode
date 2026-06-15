/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_0e41d75607236968788bdd59460e85d3___ @ 0x1800FB774
 * Callers:
 *     ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800FCECC (-GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Micros.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800FB384 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800FB3E0 (--$_Emplace_reallocate@AEBV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISaDev.c)
 */

// Hidden C++ exception states: #wind=2
__int64 ***__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_0e41d75607236968788bdd59460e85d3___(
        __int64 ***a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 **a4)
{
  _QWORD *i; // rsi
  __int64 *v8; // rdx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    v11 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(i, &v11) >= 0 && v11 )
    {
      v10 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v11, &v10) >= 0 )
      {
        v8 = a4[1];
        if ( v8 == a4[2] )
        {
          std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ISaDeviceProxy> const &>(
            a4,
            v8,
            &v10);
        }
        else
        {
          *v8 = v10;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8);
          ++a4[1];
        }
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v11);
  }
  *a1 = a4;
  return a1;
}
