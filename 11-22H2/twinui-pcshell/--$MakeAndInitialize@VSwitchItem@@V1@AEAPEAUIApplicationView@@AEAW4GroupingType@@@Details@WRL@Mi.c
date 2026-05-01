/*
 * XREFs of ??$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItem@@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Z @ 0x1805703F8
 * Callers:
 *     ?SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x180570BF4 (-SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??0SwitchItem@@QEAA@XZ @ 0x1805704D0 (--0SwitchItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ @ 0x180570970 (-InternalRelease@-$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x180570AEC (-RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItem,SwitchItem,IApplicationView * &,enum GroupingType &>(
        SwitchItem **a1,
        _QWORD *a2,
        unsigned int *a3)
{
  SwitchItem *v6; // rax
  int v7; // esi
  SwitchItem *v8; // rdi
  volatile int *v9; // rdx
  SwitchItem *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (SwitchItem *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( v6 )
  {
    v8 = SwitchItem::SwitchItem(v6);
    v11 = v8;
    v12 = 0LL;
    v7 = SwitchItem::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((SwitchItem *)((char *)v8 + 92), v9);
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
