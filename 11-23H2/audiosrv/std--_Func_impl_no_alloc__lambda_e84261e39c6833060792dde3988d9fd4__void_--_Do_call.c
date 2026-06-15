/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e84261e39c6833060792dde3988d9fd4__void_::_Do_call @ 0x18004BBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180022708 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Func_impl_no_alloc__lambda_e84261e39c6833060792dde3988d9fd4__void_::_Do_call(__int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(*(_QWORD *)(a1 + 8) + 912LL), &v3) >= 0 && v3 )
    CAudioSession::PostStateCheckExpirationWork(*(CAudioSession **)(a1 + 8));
  return Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v3);
}
