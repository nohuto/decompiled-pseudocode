/*
 * XREFs of ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18006B7CC
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18006C584 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@CSplashScreen@@QEAAJPEAUHWND__@@_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Z @ 0x18006B894 (-RuntimeClassInitialize@CSplashScreen@@QEAAJPEAUHWND__@@_NPEAUIApplicationPresentationLayer@@PEA.c)
 *     ??0CSplashScreen@@QEAA@XZ @ 0x18006C470 (--0CSplashScreen@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180166A30 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSplashScreen,CSplashScreen,HWND__ * &,bool &,IApplicationPresentationLayer *,IInspectable *>(
        volatile signed __int64 **a1,
        HWND *a2,
        char *a3,
        struct IApplicationPresentationLayer **a4,
        struct IInspectable **a5)
{
  CSplashScreen *v9; // rax
  volatile signed __int64 *v10; // rbx
  struct IApplicationPresentationLayer *v11; // r9
  char v12; // r8
  HWND v13; // rdx
  volatile int *v14; // rdx
  int v15; // edi
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  struct IInspectable *v19; // [rsp+20h] [rbp-28h]
  volatile signed __int64 *v20; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (CSplashScreen *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = (volatile signed __int64 *)CSplashScreen::CSplashScreen(v9);
    v11 = *a4;
    v12 = *a3;
    v13 = *a2;
    v19 = *a5;
    v20 = v10;
    v15 = CSplashScreen::RuntimeClassInitialize((CSplashScreen *)v10, v13, v12, v11, v19);
    if ( v15 >= 0 )
    {
      if ( v10 )
      {
        v16 = *((_QWORD *)v10 + 8);
        while ( v16 >= 0 )
        {
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange64(v10 + 8, v16 + 1, v16);
            if ( v17 != v16 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v16 + 16), v14);
      }
LABEL_8:
      *a1 = v10;
      v15 = 0;
    }
    Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v20);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
