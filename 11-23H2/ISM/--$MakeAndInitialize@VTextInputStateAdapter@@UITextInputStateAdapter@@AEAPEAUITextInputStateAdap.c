/*
 * XREFs of ??$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Z @ 0x1801F386C
 * Callers:
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x1801D0F24 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063F38 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0TextInputStateAdapter@@QEAA@XZ @ 0x1801F395C (--0TextInputStateAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801F55C4 (-RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TextInputStateAdapter,ITextInputStateAdapter,ITextInputStateAdapterOwner * &>(
        _QWORD *a1,
        struct ITextInputStateAdapterOwner **a2)
{
  void *v4; // rax
  int v5; // ebx
  TextInputStateAdapter *v6; // rdi
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  TextInputStateAdapter *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v9 = (TextInputStateAdapter *)v4;
  if ( v4 )
  {
    v6 = TextInputStateAdapter::TextInputStateAdapter((TextInputStateAdapter *)v4);
    v9 = v6;
    v8 = 0LL;
    v5 = TextInputStateAdapter::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(TextInputStateAdapter *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_357266b0_f382_4b51_bb07_358e832a9d12,
             a1);
      (*(void (__fastcall **)(TextInputStateAdapter *))(*(_QWORD *)v6 + 16LL))(v6);
      return (unsigned int)v5;
    }
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v9);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v8);
  return (unsigned int)v5;
}
