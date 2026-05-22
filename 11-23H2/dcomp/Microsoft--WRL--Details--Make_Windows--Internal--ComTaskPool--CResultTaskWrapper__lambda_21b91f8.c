/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21b91f8ed7e4c7f4d9826ebf89a77415____long_&__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___ @ 0x1800A1BC8
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___ @ 0x1800A1DC4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_21b91f8ed7e4c7f4d9826ebf89a77415.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407_____::_MakeAllocator_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407_____ @ 0x1800A2004 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambd.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18010E2CC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180110CC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21b91f8ed7e4c7f4d9826ebf89a77415____long____lambda_21b91f8ed7e4c7f4d9826ebf89a77415___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  LPVOID v6; // rax
  _OWORD *v7; // rbx
  LPVOID v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = DefaultHeap::Alloc(0x30uLL);
  v9 = v6;
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
    v7[1] = *(_OWORD *)a3;
    *((_QWORD *)v7 + 4) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)v7 = &off_1801C18A0;
    *((_QWORD *)v7 + 5) = a2;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>>::Release();
    v9 = 0LL;
    *a1 = v7;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407_____::_MakeAllocator_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_90b75ecb1bcd1b4e7d5d99e276904407_____(&v9);
  return a1;
}
