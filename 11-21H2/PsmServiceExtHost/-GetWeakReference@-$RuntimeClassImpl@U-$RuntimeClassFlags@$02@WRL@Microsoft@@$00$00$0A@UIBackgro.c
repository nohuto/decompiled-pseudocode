/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateChangeHandler@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180092810
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004F84C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x1800923D4 (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800924F0 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180093ABC (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>::GetWeakReference(
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

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a2 = 0LL;
  if ( v2 < 0 )
  {
    v5 = 2 * v2;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), a2);
    *(_QWORD *)a2 = v5;
    return 0LL;
  }
  v7 = (Microsoft::WRL::Details::WeakReferenceImpl *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v7, (struct IUnknown *)(a1 - 16));
    v9 = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 4) = v2;
      v10 = ((__int64)v8 >> 1) | 0x8000000000000000uLL;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v2);
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
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v12);
      }
      Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v9, 1);
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 12), v14);
      *(_QWORD *)a2 = v15;
      return 0LL;
    }
  }
  return 2147942414LL;
}
