/*
 * XREFs of ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x1800BC5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800BC3A8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x1800BC97C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 */

__int64 __fastcall RIMDeviceCollection::OnRIMDeferredRead(RIMDeviceCollection *a1, int a2, void *a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  int InputReportFromRIM; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = 2147549183LL;
    v4 = 510LL;
    goto LABEL_7;
  }
  if ( !a1 )
  {
    v3 = 2147942487LL;
    v4 = 500LL;
LABEL_7:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v3);
    return 0LL;
  }
  *((_BYTE *)a1 + 2736) = 0;
  InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM(a1);
  if ( InputReportFromRIM < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      505LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)InputReportFromRIM);
  return 0LL;
}
