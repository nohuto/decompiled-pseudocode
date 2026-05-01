/*
 * XREFs of ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x1800EB294
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1800EA870 (-Run@-$CTaskWrapper@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ??0CLaunchActivatedEventArgs@@QEAA@XZ @ 0x1800EB4B0 (--0CLaunchActivatedEventArgs@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800EBAC4 (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
        CLaunchActivatedEventArgs **a1,
        HSTRING *a2,
        HSTRING *a3)
{
  CLaunchActivatedEventArgs *v6; // rax
  CLaunchActivatedEventArgs *v7; // rax
  HSTRING v8; // r8
  HSTRING v9; // rdx
  CLaunchActivatedEventArgs *v10; // rbx
  int v11; // edi
  CLaunchActivatedEventArgs *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (CLaunchActivatedEventArgs *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = CLaunchActivatedEventArgs::CLaunchActivatedEventArgs(v6);
    v8 = *a3;
    v9 = *a2;
    v10 = v7;
    v13 = v7;
    v11 = CLaunchActivatedEventArgs::RuntimeClassInitialize(v7, v9, v8);
    if ( v11 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(CLaunchActivatedEventArgs *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
