/*
 * XREFs of ?RuntimeClassInitialize@CSplashScreen@@QEAAJPEAUHWND__@@_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Z @ 0x18006B894
 * Callers:
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18006B7CC (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??4?$ComPtr@UIApplicationPresentationLayer@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationPresentationLayer@@@Z @ 0x18006C40C (--4-$ComPtr@UIApplicationPresentationLayer@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationPresenta.c)
 */

__int64 __fastcall CSplashScreen::RuntimeClassInitialize(
        CSplashScreen *this,
        HWND a2,
        char a3,
        struct IApplicationPresentationLayer *a4,
        struct IInspectable *a5)
{
  __int64 v7; // rax
  char *v9; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 18) = a2;
  Microsoft::WRL::ComPtr<IApplicationPresentationLayer>::operator=((char *)this + 120, a4);
  *((_BYTE *)this + 168) = a3;
  v9 = (char *)this + 160;
  v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v9);
  return Microsoft::WRL::AsWeak<IInspectable>(a5, v7);
}
