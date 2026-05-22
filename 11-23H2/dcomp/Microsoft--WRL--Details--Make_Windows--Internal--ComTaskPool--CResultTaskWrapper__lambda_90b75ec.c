/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407____long_&__lambda_90b75ecb1bcd1b4e7d5d99e276904407___ @ 0x1800A1C68
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_90b75ecb1bcd1b4e7d5d99e276904407___ @ 0x1800A1EA4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_90b75ecb1bcd1b4e7d5d99e276904407.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407_____::_MakeAllocator_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407_____ @ 0x1800A2004 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambd.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18010E2CC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180110CC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407____long____lambda_90b75ecb1bcd1b4e7d5d99e276904407___(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  LPVOID v6; // rax
  _QWORD *v7; // rbx
  __int128 v8; // xmm0
  LPVOID v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = DefaultHeap::Alloc(0x28uLL);
  v10 = v6;
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
    v8 = *a3;
    v7[4] = a2;
    *v7 = &off_1801C1878;
    *((_OWORD *)v7 + 1) = v8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>>::Release();
    v10 = 0LL;
    *a1 = v7;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407_____::_MakeAllocator_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407_____(&v10);
  return a1;
}
