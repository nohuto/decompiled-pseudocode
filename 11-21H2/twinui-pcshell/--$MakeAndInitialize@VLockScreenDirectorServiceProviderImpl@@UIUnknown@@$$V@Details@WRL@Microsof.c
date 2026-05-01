/*
 * XREFs of ??$MakeAndInitialize@VLockScreenDirectorServiceProviderImpl@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AD36C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800AD2F0 (-CreateInstance@-$SimpleClassFactory@VLockScreenDirectorServiceProviderImpl@@$0A@@WRL@Microsoft@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007FED0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ?RuntimeClassInitialize@LockScreenDirectorServiceProviderImpl@@QEAAJXZ @ 0x1800AF73C (-RuntimeClassInitialize@LockScreenDirectorServiceProviderImpl@@QEAAJXZ.c)
 *     ??0LockScreenDirectorServiceProviderImpl@@QEAA@XZ @ 0x1800D2D1C (--0LockScreenDirectorServiceProviderImpl@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014FBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UILockScreenDirec.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<LockScreenDirectorServiceProviderImpl,IUnknown,>(
        LockScreenDirectorServiceProviderImpl **a1)
{
  LockScreenDirectorServiceProviderImpl *v2; // rax
  LockScreenDirectorServiceProviderImpl *v3; // rdi
  int v4; // ebx
  _DWORD *v5; // rcx
  int *v7; // r9
  int CanCastTo; // eax

  *a1 = 0LL;
  v2 = (LockScreenDirectorServiceProviderImpl *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = LockScreenDirectorServiceProviderImpl::LockScreenDirectorServiceProviderImpl(v2);
  v4 = LockScreenDirectorServiceProviderImpl::RuntimeClassInitialize(v3);
  if ( v4 >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v3;
      (*(void (__fastcall **)(LockScreenDirectorServiceProviderImpl *))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = 0;
      goto LABEL_5;
    }
    if ( InlineIsEqualGUID(v5, &GUID_c853771a_f336_4cf8_9a27_1570293ab52d) )
    {
      *a1 = v3;
      v4 = 0;
LABEL_13:
      (*(void (__fastcall **)(LockScreenDirectorServiceProviderImpl *))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_5;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,CImmersiveShellComponent>::CanCastTo(
                  (__int64)v3 + 8,
                  v7,
                  a1);
    v4 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v4 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_13;
    }
  }
LABEL_5:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::Release(v3);
  return (unsigned int)v4;
}
