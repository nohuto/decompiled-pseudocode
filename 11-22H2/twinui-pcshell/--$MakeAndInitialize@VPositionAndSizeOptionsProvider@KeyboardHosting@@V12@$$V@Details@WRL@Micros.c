/*
 * XREFs of ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x1800AA9C0
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1800AACDC (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 * Callees:
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x1800A9B10 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x1801423A0 (-InternalRelease@-$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAK.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::PositionAndSizeOptionsProvider,KeyboardHosting::PositionAndSizeOptionsProvider,>(
        KeyboardHosting::PositionAndSizeOptionsProvider **a1)
{
  KeyboardHosting::PositionAndSizeOptionsProvider *v2; // rax
  KeyboardHosting::PositionAndSizeOptionsProvider *v3; // rax
  volatile int *v4; // rdx
  KeyboardHosting::PositionAndSizeOptionsProvider *v5; // r8
  unsigned int v6; // edi
  KeyboardHosting::PositionAndSizeOptionsProvider *v8; // [rsp+30h] [rbp+8h] BYREF
  KeyboardHosting::PositionAndSizeOptionsProvider *v9; // [rsp+38h] [rbp+10h]
  KeyboardHosting::PositionAndSizeOptionsProvider *v10; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v2 = (KeyboardHosting::PositionAndSizeOptionsProvider *)operator new(
                                                            0x140uLL,
                                                            (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  v9 = v2;
  if ( v2 )
  {
    v10 = v2;
    v3 = KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider(v2);
    v5 = v3;
    v8 = v3;
    if ( v3 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference(
        (KeyboardHosting::PositionAndSizeOptionsProvider *)((char *)v3 + 12),
        v4);
    *a1 = v5;
    v6 = 0;
    Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
