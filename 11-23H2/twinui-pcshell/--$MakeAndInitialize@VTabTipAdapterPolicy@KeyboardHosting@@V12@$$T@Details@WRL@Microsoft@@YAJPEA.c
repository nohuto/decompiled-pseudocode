/*
 * XREFs of ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$T@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@$$QEA$$T@Z @ 0x180508A4C
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

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::TabTipAdapterPolicy,KeyboardHosting::TabTipAdapterPolicy,std::nullptr_t>(
        KeyboardHosting::TabTipAdapterPolicy **a1,
        KeyboardHosting::TabTipAdapterPolicy *a2)
{
  KeyboardHosting::TabTipAdapterPolicy *v3; // rax
  int v4; // esi
  KeyboardHosting::TabTipAdapterPolicy *v5; // rax
  KeyboardHosting::TabTipAdapterPolicy *v6; // rbx
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  KeyboardHosting::TabTipAdapterPolicy *v11; // [rsp+58h] [rbp+38h] BYREF
  KeyboardHosting::TabTipAdapterPolicy *v12; // [rsp+60h] [rbp+40h] BYREF

  v11 = a2;
  *a1 = 0LL;
  v3 = (KeyboardHosting::TabTipAdapterPolicy *)operator new(0x2D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v3;
  if ( v3 )
  {
    v12 = v3;
    v5 = KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(v3);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::Attach(&v11, (__int64)v5);
    v12 = 0LL;
    v6 = v11;
    v4 = KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(
           v11,
           (const struct winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider *)&v12);
    if ( v4 >= 0 )
    {
      if ( v6 )
      {
        v8 = *((_QWORD *)v6 + 8);
        while ( v8 >= 0 )
        {
          if ( (_DWORD)v8 != 0x7FFFFFFF )
          {
            v9 = v8;
            v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 8, v8 + 1, v8);
            if ( v9 != v8 )
              continue;
          }
          goto LABEL_11;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), v7);
LABEL_11:
        v6 = v11;
      }
      *a1 = v6;
      v4 = 0;
    }
    Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
