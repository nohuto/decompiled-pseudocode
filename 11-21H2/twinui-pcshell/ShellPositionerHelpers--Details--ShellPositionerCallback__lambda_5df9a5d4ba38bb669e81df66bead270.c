/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a___::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a___ @ 0x1802F3704
 * Callers:
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a_____lambda_5df9a5d4ba38bb669e81df66bead270a___ @ 0x1802F29CC (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_5.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800ED6EC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 */

_QWORD *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a___::ShellPositionerCallback__lambda_5df9a5d4ba38bb669e81df66bead270a___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)a1);
  a1[6] = 0LL;
  if ( a1 + 6 != a2 )
  {
    a1[6] = *a2;
    *a2 = 0LL;
  }
  a1[7] = a2[1];
  *a1 = off_180648A10;
  a1[1] = off_180648330;
  return a1;
}
