/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800270E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180027210 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F07C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  signed __int64 v4; // rdi
  __int64 v5; // rdi
  signed __int32 i; // eax
  __int64 v8; // rbp
  _DWORD *v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  signed __int64 v14; // rdi
  signed __int64 v15; // rcx
  volatile int *v16; // rdx
  __int64 v17; // r10

  v4 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  if ( v4 >= 0 )
  {
    v8 = a1 - 16;
    v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (__int64)v9;
    if ( v9 )
    {
      v9[3] = 1;
      *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_DWORD *)(v10 + 16) = 0x3FFFFFFF;
      *(_QWORD *)v10 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
      *(_QWORD *)(v10 + 24) = v8;
      *(_DWORD *)(v10 + 12) = 2;
      v11 = (v10 >> 1) | 0x8000000000000000uLL;
      *(_DWORD *)(v10 + 16) = v4;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v11, v4);
      v12 = v4 == v13;
      v14 = v13;
      if ( v12 )
      {
LABEL_9:
        *a2 = v10;
        return 0LL;
      }
      else
      {
        while ( v14 >= 0 )
        {
          v15 = v14;
          *(_DWORD *)(v10 + 16) = v14;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v11, v14);
          if ( v14 == v15 )
            goto LABEL_9;
        }
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
          (Microsoft::WRL::Details::WeakReferenceImpl *)v10,
          1u);
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v14 + 12), v16);
        *a2 = v17;
        return 0LL;
      }
    }
    else
    {
      return 2147942414LL;
    }
  }
  else
  {
    v5 = 2 * v4;
    for ( i = *(_DWORD *)(v5 + 12); i != 0x7FFFFFFF; i = *(_DWORD *)(v5 + 12) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 12), i + 1, i) )
        break;
    }
    *a2 = v5;
    return 0LL;
  }
}
