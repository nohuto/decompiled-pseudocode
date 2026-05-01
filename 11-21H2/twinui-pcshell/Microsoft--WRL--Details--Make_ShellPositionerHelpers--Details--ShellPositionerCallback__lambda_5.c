/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a_____lambda_5df9a5d4ba38bb669e81df66bead270a___ @ 0x1802F29CC
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_5df9a5d4ba38bb669e81df66bead270a___ @ 0x1802F2A2C (ShellPositionerHelpers--PerformCallbackOnView__lambda_5df9a5d4ba38bb669e81df66bead270a___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a___::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a___ @ 0x1802F3704 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a_____lambda_5df9a5d4ba38bb669e81df66bead270a___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a___::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a___(
           v4,
           a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
