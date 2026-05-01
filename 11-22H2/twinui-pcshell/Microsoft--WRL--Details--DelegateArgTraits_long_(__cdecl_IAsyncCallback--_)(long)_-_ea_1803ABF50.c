/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_9cd8ac2da2e7bac8c4911caa5b84bcce___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_9cd8ac2da2e7bac8c4911caa5b84bcce___1_long_ @ 0x1803ABF50
 * Callers:
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1803BA0F8 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004E194 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_9cd8ac2da2e7bac8c4911caa5b84bcce___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_9cd8ac2da2e7bac8c4911caa5b84bcce___1_long_(
        __int64 a1,
        __int64 a2)
{
  __int128 v4; // xmm0
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 8);
  v4 = *(_OWORD *)(a2 + 12);
  v5 = (_QWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 28) = v4;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (_QWORD *)(a1 + 48) != v5 )
  {
    *(_QWORD *)(a1 + 48) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_1807CFDD0;
  return a1;
}
