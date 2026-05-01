/*
 * XREFs of ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x1800B994C
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1800B9828 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x1800B99D8 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x18017B88C (-InternalRelease@-$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAK.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::PositionAndSizeOptionsProvider,KeyboardHosting::PositionAndSizeOptionsProvider,>(
        __int64 *a1)
{
  KeyboardHosting::PositionAndSizeOptionsProvider *v2; // rax
  __int64 v3; // rax
  volatile int *v4; // rdx
  __int64 v5; // r9
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  KeyboardHosting::PositionAndSizeOptionsProvider *v9; // [rsp+38h] [rbp+10h]
  KeyboardHosting::PositionAndSizeOptionsProvider *v10; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v2 = (KeyboardHosting::PositionAndSizeOptionsProvider *)operator new(
                                                            0xE0uLL,
                                                            (const struct std::nothrow_t *)&std::nothrow);
  v8 = (__int64)v2;
  v9 = v2;
  if ( v2 )
  {
    v10 = v2;
    v3 = KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider(v2);
    v5 = v3;
    v8 = v3;
    if ( v3 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 12), v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease(&v8);
    return 0;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
}
