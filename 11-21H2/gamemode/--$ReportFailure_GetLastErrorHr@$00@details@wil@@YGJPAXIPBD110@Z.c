/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YGJPAXIPBD110@Z @ 0x1000493A
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YGJPAXIPBD@Z @ 0x100033D4 (-Return_GetLastError@in1diag3@details@wil@@YGJPAXIPBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YGJJ@Z @ 0x10002961 (-HrToNtStatus@details@wil@@YGJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z @ 0x10002B2E (-GetLastErrorFail@details@wil@@YGKPAXIPBD110@Z.c)
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x100048D9 (--$ReportFailure_Base@$00$0A@@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOp.c)
 */

unsigned int __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char *a6)
{
  signed int LastErrorFail; // eax
  unsigned int v7; // ebx
  int v8; // ecx
  const char *v10; // [esp+0h] [ebp-2Ch]
  const char *v11; // [esp+4h] [ebp-28h]
  void *v12; // [esp+8h] [ebp-24h]
  _DWORD v13[4]; // [esp+Ch] [ebp-20h] BYREF
  int v14; // [esp+1Ch] [ebp-10h]
  int v15; // [esp+20h] [ebp-Ch]
  void *v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h]

  v16 = a1;
  v17 = a2;
  LastErrorFail = wil::details::GetLastErrorFail(
                    a2,
                    (int)a1,
                    (wil::details *)"wil",
                    a1,
                    (unsigned int)a1,
                    a6,
                    v10,
                    v11,
                    v12);
  v7 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v7 = (unsigned __int16)LastErrorFail | 0x80070000;
  v13[3] = v7;
  v14 = wil::details::HrToNtStatus(v7);
  LOBYTE(v15) = 0;
  v13[0] = v7;
  v13[1] = v14;
  v13[2] = v15;
  wil::details::ReportFailure_Base<1,0>((int)"wil", v8, v8, (int)a6, (int)v13, v8, v8);
  return v7;
}
