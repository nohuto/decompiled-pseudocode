/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180026FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180027210 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F07C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v4; // r14
  __int64 v5; // rbp
  _DWORD *v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  bool v9; // zf
  signed __int64 v10; // rax
  signed __int64 v12; // rcx
  __int64 v13; // r10

  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a2 = 0LL;
  if ( v4 < 0 )
  {
LABEL_11:
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v4 + 12), a2);
    *(_QWORD *)a2 = v13;
    return 0LL;
  }
  v5 = a1 - 16;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_DWORD *)(v7 + 16) = 0x3FFFFFFF;
    *(_QWORD *)v7 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    *(_QWORD *)(v7 + 24) = v5;
    *(_DWORD *)(v7 + 12) = 2;
    v8 = (v7 >> 1) | 0x8000000000000000uLL;
    *(_DWORD *)(v7 + 16) = v4;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v8, v4);
    v9 = v4 == v10;
    v4 = v10;
    if ( v9 )
    {
LABEL_6:
      *(_QWORD *)a2 = v7;
      return 0LL;
    }
    while ( v4 >= 0 )
    {
      v12 = v4;
      *(_DWORD *)(v7 + 16) = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v8, v4);
      if ( v4 == v12 )
        goto LABEL_6;
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v7,
      1u);
    goto LABEL_11;
  }
  return 2147942414LL;
}
