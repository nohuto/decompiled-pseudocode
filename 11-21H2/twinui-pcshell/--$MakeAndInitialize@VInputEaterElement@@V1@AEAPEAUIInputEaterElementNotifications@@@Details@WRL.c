/*
 * XREFs of ??$MakeAndInitialize@VInputEaterElement@@V1@AEAPEAUIInputEaterElementNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVInputEaterElement@@AEAPEAUIInputEaterElementNotifications@@@Z @ 0x1804D66A0
 * Callers:
 *     ?InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D68F4 (-InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0InputEaterElement@@QEAA@XZ @ 0x1804D6798 (--0InputEaterElement@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputEaterElement,InputEaterElement,IInputEaterElementNotifications * &>(
        InputEaterElement **a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  InputEaterElement *v5; // rax
  InputEaterElement *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  InputEaterElement *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (InputEaterElement *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = InputEaterElement::InputEaterElement(v5);
    v10 = v6;
    v7 = *a2;
    v8 = *((_QWORD *)v6 + 27);
    if ( v8 != v7 )
    {
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v8 = *((_QWORD *)v6 + 27);
      }
      *((_QWORD *)v6 + 27) = v7;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v6 )
      (*(void (__fastcall **)(InputEaterElement *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
