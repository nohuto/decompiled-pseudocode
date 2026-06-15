/*
 * XREFs of _lambda_249a22bcff1aef3e1794295476d640d0_::operator()_Microsoft::WRL::WeakRef_const__ @ 0x1800F638C
 * Callers:
 *     ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F8F80 (-EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV-$vector@V-$ComPtr@UIProcessSubmixProx.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180002C7C (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F6A94 (--$_Emplace_reallocate@AEBV-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_249a22bcff1aef3e1794295476d640d0_::operator()_Microsoft::WRL::WeakRef_const__(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v8) >= 0 && v8 )
  {
    v7 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v8, &v7) >= 0 )
    {
      v3 = *a1;
      v4 = *(_QWORD **)(v3 + 8);
      if ( v4 == *(_QWORD **)(v3 + 16) )
      {
        std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
          v3,
          v4,
          &v7);
      }
      else
      {
        v5 = v7;
        *v4 = v7;
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        *(_QWORD *)(v3 + 8) += 8LL;
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v7);
  }
  return Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v8);
}
