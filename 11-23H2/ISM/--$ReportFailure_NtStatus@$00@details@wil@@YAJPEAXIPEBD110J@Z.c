/*
 * XREFs of ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800CC770
 * Callers:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18011B374 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18003183C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180093924 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_NtStatus<1>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v10; // eax
  unsigned int v11; // edi
  int v13; // [rsp+20h] [rbp-58h]
  unsigned int v14; // [rsp+58h] [rbp-20h]
  unsigned __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+68h] [rbp-10h]

  v10 = wil::details::NtStatusToHr((wil::details *)(unsigned int)a7);
  v11 = v10;
  LOBYTE(v14) = 1;
  v15 = __PAIR64__((unsigned int)a7, v10);
  v16 = v14;
  wil::details::ReportFailure_Base<1,0>(a1, a2, a3, v14, v13, a6, (int *)&v15, 0LL);
  return v11;
}
