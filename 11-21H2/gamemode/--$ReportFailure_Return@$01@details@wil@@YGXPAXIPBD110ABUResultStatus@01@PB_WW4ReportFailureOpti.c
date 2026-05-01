/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100049AF
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004649 (--$ReportFailure_Base@$01$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 * Callees:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     __chkstk @ 0x10007440 (__chkstk.c)
 */

void __fastcall wil::details::ReportFailure_Return<2>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _WORD *a8,
        int a9)
{
  _BYTE v9[92]; // [esp+10h] [ebp-146Ch] BYREF
  int v10; // [esp+6Ch] [ebp-1410h]
  _BYTE v11[4096]; // [esp+70h] [ebp-140Ch] BYREF
  _BYTE v12[1028]; // [esp+1070h] [ebp-40Ch] BYREF

  v10 = a2;
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, 2, a7, a8, a3, (wil::details *)v11, a3, v12, a3, (wil *)v9);
}
