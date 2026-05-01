/*
 * XREFs of ??$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVLightDismissElement@@AEAPEAUILightDismissElementHost@@AEAI@Z @ 0x1804D621C
 * Callers:
 *     ?LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z @ 0x1804D6580 (-LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0LightDismissElement@@QEAA@XZ @ 0x1804D6320 (--0LightDismissElement@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<LightDismissElement,LightDismissElement,ILightDismissElementHost * &,unsigned int &>(
        LightDismissElement **a1,
        _QWORD *a2,
        int *a3)
{
  unsigned int v6; // ebx
  LightDismissElement *v7; // rax
  LightDismissElement *v8; // rdi
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rcx
  LightDismissElement *v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v7 = (LightDismissElement *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = LightDismissElement::LightDismissElement(v7);
    v13 = v8;
    v9 = *a3;
    v10 = *a2;
    v11 = *((_QWORD *)v8 + 29);
    if ( v11 != *a2 )
    {
      if ( v10 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*a2);
        v11 = *((_QWORD *)v8 + 29);
      }
      *((_QWORD *)v8 + 29) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    *((_DWORD *)v8 + 60) = v9;
    (*(void (__fastcall **)(LightDismissElement *))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v8;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
