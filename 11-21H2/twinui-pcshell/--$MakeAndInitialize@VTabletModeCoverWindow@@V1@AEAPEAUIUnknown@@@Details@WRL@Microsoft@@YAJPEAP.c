/*
 * XREFs of ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x18014F9BC
 * Callers:
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x18014F898 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x1800D83E4 (-RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0TabletModeCoverWindow@@QEAA@XZ @ 0x18014FA60 (--0TabletModeCoverWindow@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C9F8 (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeCoverWindow,TabletModeCoverWindow,IUnknown * &>(
        TabletModeCoverWindow **a1,
        IUnknown **a2)
{
  TabletModeCoverWindow *v4; // rax
  TabletModeCoverWindow *v5; // rdi
  volatile int *v6; // rdx
  int v7; // esi
  TabletModeCoverWindow *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (TabletModeCoverWindow *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( v4 )
  {
    v5 = TabletModeCoverWindow::TabletModeCoverWindow(v4);
    v9 = v5;
    v10 = 0LL;
    v7 = TabletModeCoverWindow::RuntimeClassInitialize(v5, *a2);
    if ( v7 >= 0 )
    {
      if ( v5 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((TabletModeCoverWindow *)((char *)v5 + 92), v6);
      *a1 = v5;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
