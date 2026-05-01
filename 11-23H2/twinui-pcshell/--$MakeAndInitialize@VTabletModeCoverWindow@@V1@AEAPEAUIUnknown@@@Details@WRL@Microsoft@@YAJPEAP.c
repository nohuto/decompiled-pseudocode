/*
 * XREFs of ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x180104C18
 * Callers:
 *     ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180104690 (-CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x1800F701C (-RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z.c)
 *     ??0TabletModeCoverWindow@@QEAA@XZ @ 0x180104CBC (--0TabletModeCoverWindow@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1801401BC (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeCoverWindow,TabletModeCoverWindow,IUnknown * &>(
        TabletModeCoverWindow **a1,
        struct IUnknown **a2)
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
