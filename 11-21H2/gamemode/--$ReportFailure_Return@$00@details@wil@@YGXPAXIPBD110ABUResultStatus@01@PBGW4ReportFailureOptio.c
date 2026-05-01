/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PBGW4ReportFailureOptions@01@@Z @ 0x10006651
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PBGW4ReportFailureOptions@01@@Z @ 0x1000659C (--$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PBGW4ReportFailureOpt.c)
 * Callees:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x100060EB (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailure.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     __chkstk @ 0x10007440 (__chkstk.c)
 */

void __thiscall wil::details::ReportFailure_Return<1>(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // [esp-34h] [ebp-1490h]
  int v9; // [esp-30h] [ebp-148Ch]
  int v10; // [esp-2Ch] [ebp-1488h]
  _BYTE v11[88]; // [esp+0h] [ebp-145Ch] BYREF
  WCHAR v12[2048]; // [esp+58h] [ebp-1404h] BYREF
  _BYTE v13[1024]; // [esp+1058h] [ebp-404h] BYREF

  wil::details::LogFailure(
    this,
    v8,
    v9,
    v10,
    a5,
    (int)this,
    a6,
    (int)this,
    (int)this,
    v12,
    (int)this,
    v13,
    (int)this,
    (wil *)v11);
}
