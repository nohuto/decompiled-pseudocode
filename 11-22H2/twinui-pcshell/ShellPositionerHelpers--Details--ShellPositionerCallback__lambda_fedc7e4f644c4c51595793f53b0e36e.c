/*
 * XREFs of ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3___::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3___ @ 0x1803AC140
 * Callers:
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3_____lambda_fedc7e4f644c4c51595793f53b0e36e3___ @ 0x1803AB2A8 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_f.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180015C50 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 */

_QWORD *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3___::ShellPositionerCallback__lambda_fedc7e4f644c4c51595793f53b0e36e3___(
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
  *a1 = off_1807CFF90;
  a1[1] = off_1807CFFB8;
  return a1;
}
