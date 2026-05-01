/*
 * XREFs of ??$MakeAndInitialize@VStartupTaskActivatedEventArgsImpl@@V1@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVStartupTaskActivatedEventArgsImpl@@$$QEAPEAUHSTRING__@@@Z @ 0x18062DDD0
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VStartupTaskActivatedEventArgsImpl@@PEAUHSTRING__@@@wil@@YA?AV?$ComPtr@VStartupTaskActivatedEventArgsImpl@@@WRL@Microsoft@@$$QEAPEAUHSTRING__@@@Z @ 0x18062DF34 (--$MakeAndInitializeOrThrow@VStartupTaskActivatedEventArgsImpl@@PEAUHSTRING__@@@wil@@YA-AV-$ComP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009742C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0StartupTaskActivatedEventArgsImpl@@QEAA@XZ @ 0x18062F1C4 (--0StartupTaskActivatedEventArgsImpl@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<StartupTaskActivatedEventArgsImpl,StartupTaskActivatedEventArgsImpl,HSTRING__ *>(
        StartupTaskActivatedEventArgsImpl **a1,
        HSTRING *a2)
{
  StartupTaskActivatedEventArgsImpl *v4; // rax
  int v5; // edi
  StartupTaskActivatedEventArgsImpl *v6; // rbx
  HSTRING v8; // [rsp+30h] [rbp+8h] BYREF
  StartupTaskActivatedEventArgsImpl *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (StartupTaskActivatedEventArgsImpl *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = StartupTaskActivatedEventArgsImpl::StartupTaskActivatedEventArgsImpl(v4);
    v9 = v6;
    v8 = *a2;
    *((_DWORD *)v6 + 18) = 1020;
    v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)v6 + 25, &v8);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(StartupTaskActivatedEventArgsImpl *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
