/*
 * XREFs of ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18062DD04
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@wil@@YA?AV?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@$$QEAPEAUIApplicationContainerActivationComponent@@AEAEAEAUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18062DE84 (--$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActi.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ApplicationContainerActivationPolicy@@QEAA@XZ @ 0x18062F0BC (--0ApplicationContainerActivationPolicy@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAAXPEAVApplicationContainerActivationPolicy@@@Z @ 0x1806305B8 (-Attach@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@QEAAXPEAVApplicationCont.c)
 *     ?InternalRelease@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180630DA0 (-InternalRelease@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplicationContainerActivationComponent@@_NUtagINITIALWINDOWPLACEMENT@@@Z @ 0x18063222C (-RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplication_ea_18063222C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationContainerActivationPolicy,ApplicationContainerActivationPolicy,IApplicationContainerActivationComponent *,unsigned char &,tagINITIALWINDOWPLACEMENT &>(
        _QWORD *a1,
        __int64 *a2,
        _BYTE *a3,
        __int128 *a4)
{
  ApplicationContainerActivationPolicy *v8; // rax
  int v9; // edi
  ApplicationContainerActivationPolicy *v10; // rax
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  volatile int *v16; // rdx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+30h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (ApplicationContainerActivationPolicy *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = ApplicationContainerActivationPolicy::ApplicationContainerActivationPolicy(v8);
    v20 = 0LL;
    Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::Attach(&v20, v10);
    v11 = *a4;
    v12 = *((_DWORD *)a4 + 4);
    v13 = v20;
    v14 = *a2;
    LOBYTE(v15) = *a3 != 0;
    v18 = v11;
    v19 = v12;
    v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *))ApplicationContainerActivationPolicy::RuntimeClassInitialize)(
           v20,
           v14,
           v15,
           &v18);
    if ( v9 >= 0 )
    {
      if ( v13 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v13 + 100), v16);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease(&v20);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
