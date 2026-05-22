/*
 * XREFs of ??$MakeAndInitialize@UCUIWindow@@U1@AEA_KAEA_KAEA_N@Details@WRL@Microsoft@@YAJPEAPEAUCUIWindow@@AEA_K1AEA_N@Z @ 0x180083F54
 * Callers:
 *     ?AddWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0_N@Z @ 0x180084AAC (-AddWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180039650 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CUIWindow,CUIWindow,unsigned __int64 &,unsigned __int64 &,bool &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        char *a4)
{
  unsigned int v8; // ebx
  void *v9; // rax
  __int64 v10; // rdi
  char v11; // r8
  __int64 v12; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  *a1 = 0LL;
  v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v9;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v9);
    *(_QWORD *)v10 = &CUIWindow::`vftable';
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_DWORD *)(v10 + 32) = 0;
    *(_DWORD *)(v10 + 36) = 16;
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_WORD *)(v10 + 48) = 0;
    *(_QWORD *)(v10 + 56) = 0LL;
    *(_QWORD *)(v10 + 64) = 0LL;
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_QWORD *)(v10 + 80) = 0LL;
    v14 = v10;
    v11 = *a4;
    v12 = *a3;
    *(_QWORD *)(v10 + 16) = *a2;
    *(_QWORD *)(v10 + 24) = v12;
    *(_BYTE *)(v10 + 48) = v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v14);
    *a1 = v10;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
