/*
 * XREFs of ??$MakeAndInitialize@VMagnifierToggleTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@@Z @ 0x1801AEFCC
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AFD80 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ @ 0x1801AF2F8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputTarget@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@@Z @ 0x1801B0CF4 (-RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV-$ComPtr@VMagnifierControllerProxy@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierToggleTarget,IInputTarget,Microsoft::WRL::ComPtr<MagnifierControllerProxy> &,Microsoft::WRL::ComPtr<InputSite> &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  void *v8; // rdi
  int v9; // esi
  __int64 v10; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget>(v6);
    *v7 = &MagnifierToggleTarget::`vftable';
    v7[2] = 0LL;
    v7[3] = 0LL;
    *((_BYTE *)v7 + 32) = 0;
    v12 = *a3;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v12);
    v10 = *a2;
    v13 = v10;
    if ( v10 )
      (**(void (__fastcall ***)(__int64))(v10 + 16))(v10 + 16);
    v9 = MagnifierToggleTarget::RuntimeClassInitialize(v8, &v13, &v12);
    if ( v9 >= 0 )
      v9 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
             a1);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
