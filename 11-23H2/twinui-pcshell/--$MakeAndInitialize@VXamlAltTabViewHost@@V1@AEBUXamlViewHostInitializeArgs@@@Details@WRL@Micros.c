/*
 * XREFs of ??$MakeAndInitialize@VXamlAltTabViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180761AC8
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180761B90 (--$MakeAndInitializeOrThrow@VXamlAltTabViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV-$Co.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E050C (-InternalRelease@-$ComPtr@VCAltTabViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0XamlAltTabViewHost@@QEAA@XZ @ 0x180762928 (--0XamlAltTabViewHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlAltTabViewHost,XamlAltTabViewHost,XamlViewHostInitializeArgs const &>(
        XamlAltTabViewHost **a1,
        const struct XamlViewHostInitializeArgs *a2)
{
  XamlAltTabViewHost *v4; // rax
  int v5; // esi
  XamlAltTabViewHost *v6; // rdi
  volatile int *v7; // rdx
  XamlAltTabViewHost *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (XamlAltTabViewHost *)operator new(0x218uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( v4 )
  {
    v6 = XamlAltTabViewHost::XamlAltTabViewHost(v4);
    v9 = v6;
    v10 = 0LL;
    v5 = XamlAltTabViewHost::RuntimeClassInitialize(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((XamlAltTabViewHost *)((char *)v6 + 132), v7);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
