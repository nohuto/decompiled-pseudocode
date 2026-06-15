/*
 * XREFs of std::_Func_impl_no_alloc__lambda_48766acb0ab47ece138fadd90b55d198__void_::_Do_call @ 0x1800D7150
 * Callers:
 *     <none>
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D629C (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall std::_Func_impl_no_alloc__lambda_48766acb0ab47ece138fadd90b55d198__void_::_Do_call(__int64 a1)
{
  AudioEffectsWatcher *v2; // rdi
  HRESULT result; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(AudioEffectsWatcher **)(a1 + 8);
  result = CoInitializeEx(0LL, 0);
  if ( result >= 0 )
  {
    v4 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 16), &v4) >= 0 )
    {
      if ( v4 )
        AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(v2);
    }
    CoUninitialize();
    return Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v4);
  }
  return result;
}
