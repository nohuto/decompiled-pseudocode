/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3_____lambda_fedc7e4f644c4c51595793f53b0e36e3___ @ 0x1803AB2A8
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_fedc7e4f644c4c51595793f53b0e36e3___ @ 0x1803AB308 (ShellPositionerHelpers--PerformCallbackOnView__lambda_fedc7e4f644c4c51595793f53b0e36e3___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3___::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3___ @ 0x1803AC140 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3_____lambda_fedc7e4f644c4c51595793f53b0e36e3___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3___::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3___(
           v4,
           a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
