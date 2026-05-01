/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_b5b57993037fc12f38ba60be13c6908e_____lambda_b5b57993037fc12f38ba60be13c6908e___ @ 0x18030EF60
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_b5b57993037fc12f38ba60be13c6908e___ @ 0x18030EFE0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_b5b57993037fc12f38ba60be13c6908e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED6EC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_b5b57993037fc12f38ba60be13c6908e_____lambda_b5b57993037fc12f38ba60be13c6908e___(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rdx

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    v6 = *a2;
    *(_QWORD *)v5 = off_180649300;
    *((_QWORD *)v5 + 1) = off_180648330;
    *((_QWORD *)v5 + 6) = v6;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
