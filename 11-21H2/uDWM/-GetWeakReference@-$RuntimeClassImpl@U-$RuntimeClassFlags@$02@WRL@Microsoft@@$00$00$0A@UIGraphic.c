/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18010A500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009DBD0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x18010A0D4 (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18010A260 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v7; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v9; // r8
  unsigned __int64 v10; // rdx
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rbx
  volatile int *v14; // rdx
  __int64 v15; // r10

  v2 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)a2 = 0LL;
  if ( v2 < 0 )
  {
    v5 = 2 * v2;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), a2);
    *(_QWORD *)a2 = v5;
    return 0LL;
  }
  v7 = (Microsoft::WRL::Details::WeakReferenceImpl *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                       WPF::g_pProcessHeap,
                                                       32LL);
  if ( v7 )
  {
    v8 = Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v7, (struct IUnknown *)(a1 - 8));
    v9 = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 4) = v2;
      v10 = ((__int64)v8 >> 1) | 0x8000000000000000uLL;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v10, v2);
      for ( i = v2 == v12; ; i = v12 == v13 )
      {
        v13 = v12;
        if ( i )
        {
          *(_QWORD *)a2 = v9;
          return 0LL;
        }
        if ( v12 < 0 )
          break;
        *((_DWORD *)v9 + 4) = v12;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v10, v12);
      }
      Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v9, 1);
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 12), v14);
      *(_QWORD *)a2 = v15;
      return 0LL;
    }
  }
  return 2147942414LL;
}
