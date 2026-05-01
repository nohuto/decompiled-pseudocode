/*
 * XREFs of ?v_CreateSplashScreen@CImmersiveWindowFactory@@EEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z @ 0x1807995C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactory::v_CreateSplashScreen(__int64 a1, char a2, IUnknown **a3)
{
  HRESULT Instance; // ebx
  IUnknown *v7; // rbx
  IUnknown *v8; // rcx
  IUnknown *pUnk; // [rsp+50h] [rbp+20h] BYREF
  IUnknown *v11; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  Instance = -2147024891;
  if ( *(_BYTE *)(a1 + 104) )
  {
    pUnk = 0LL;
    v7 = *(IUnknown **)(a1 + 160);
    if ( v7 )
    {
      v11 = *(IUnknown **)(a1 + 160);
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v11);
      v11 = pUnk;
      pUnk = v7;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
    }
    else
    {
      Instance = CoCreateInstance(
                   &GUID_329b80ec_2230_47b8_905d_a2dcf5171c6f,
                   0LL,
                   4u,
                   &GUID_0e0da070_2224_4934_8090_041f7ff223eb,
                   (LPVOID *)&pUnk);
      if ( Instance < 0
        || (Instance = ((__int64 (__fastcall *)(IUnknown *, _QWORD, __int64))pUnk->lpVtbl[1].QueryInterface)(
                         pUnk,
                         *(_QWORD *)(a1 + 136),
                         a1 + 116),
            Instance < 0) )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pUnk);
        return (unsigned int)Instance;
      }
    }
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&pUnk);
    v8 = pUnk;
    Instance = 0;
    *a3 = pUnk;
    if ( (a2 & 0x20) == 0 )
      CoAllowSetForegroundWindow(v8, 0LL);
    goto LABEL_8;
  }
  return (unsigned int)Instance;
}
