/*
 * XREFs of ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1800AAC04
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x1800A9794 (--0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1800AACDC (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 *     ?Attach@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAAXPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x1800AC938 (-Attach@-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAAXPEAVTabTipAdapterPol.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x180194AE4 (-InternalRelease@-$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::TabTipAdapterPolicy,KeyboardHosting::TabTipAdapterPolicy,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider &>(
        KeyboardHosting::TabTipAdapterPolicy **a1,
        const struct winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider *a2)
{
  KeyboardHosting::TabTipAdapterPolicy *v4; // rax
  KeyboardHosting::TabTipAdapterPolicy *v5; // rdi
  KeyboardHosting::TabTipAdapterPolicy *v6; // rax
  const struct winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider *v7; // rdx
  KeyboardHosting::TabTipAdapterPolicy *v8; // rbx
  volatile int *v9; // rdx
  int v10; // esi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  KeyboardHosting::TabTipAdapterPolicy *v14; // [rsp+50h] [rbp+30h] BYREF
  KeyboardHosting::TabTipAdapterPolicy *v15; // [rsp+60h] [rbp+40h]
  KeyboardHosting::TabTipAdapterPolicy *v16; // [rsp+68h] [rbp+48h]

  *a1 = 0LL;
  v4 = (KeyboardHosting::TabTipAdapterPolicy *)operator new(0x2D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v15 = v4;
  v14 = v4;
  if ( v4 )
  {
    v16 = v4;
    v6 = KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(v4);
    v14 = 0LL;
    Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::Attach(&v14, v6);
    v5 = 0LL;
    v15 = 0LL;
    v7 = a2;
    v8 = v14;
    v10 = KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(v14, v7);
    if ( v10 >= 0 )
    {
      if ( v8 )
      {
        v11 = *((_QWORD *)v8 + 8);
        while ( v11 >= 0 )
        {
          if ( (_DWORD)v11 != 0x7FFFFFFF )
          {
            v12 = v11;
            v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 8, v11 + 1, v11);
            if ( v12 != v11 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v11 + 16), v9);
LABEL_8:
        v8 = v14;
        v5 = v15;
      }
      *a1 = v8;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease(&v14);
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v5 )
    operator delete(v5, 1uLL);
  return (unsigned int)v10;
}
