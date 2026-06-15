/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6028ebead6359eb01fe792f246b3a516__void_::_Do_call @ 0x18004BC30
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003FAF0 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Func_impl_no_alloc__lambda_6028ebead6359eb01fe792f246b3a516__void_::_Do_call(__int64 a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64); // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 8), &v2) >= 0
    && v2
    && (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v2, (__int64)&v3) >= 0 )
  {
    (*(void (__fastcall **)(struct IProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager + 72LL))(
      g_ProcessSubmixManager,
      v3);
  }
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v3);
  return Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v2);
}
