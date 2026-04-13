/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180083600
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180083770 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::SimpleClassFactory<WnfHelper::WnfNameResolver,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD *); // rbx
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rdi
  int v10; // esi
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD *); // rbx
  unsigned int v12; // edi
  __int64 (__fastcall ***v13)(_QWORD, __int64, _QWORD *); // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL, a3, a4);
    return 2147746064LL;
  }
  v7 = 0LL;
  v13 = 0LL;
  v8 = (volatile signed __int32 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 3) = 1;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWnfNameResolver>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v9 = &WnfHelper::WnfNameResolver::`vftable';
    v10 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::QueryInterface(
            v9,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v13);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release(v9);
    if ( v10 >= 0 )
    {
      v11 = v13;
      v12 = (**v13)(v13, a3, a4);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v11)[2])(v11);
      return v12;
    }
    v7 = v13;
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v7 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v7)[2])(v7);
  return (unsigned int)v10;
}
