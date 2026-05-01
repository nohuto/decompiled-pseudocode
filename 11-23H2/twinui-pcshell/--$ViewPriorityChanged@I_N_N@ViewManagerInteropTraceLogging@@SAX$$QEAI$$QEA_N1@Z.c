/*
 * XREFs of ??$ViewPriorityChanged@I_N_N@ViewManagerInteropTraceLogging@@SAX$$QEAI$$QEA_N1@Z @ 0x18017DE98
 * Callers:
 *     _lambda_8fce8fe44b6886d54791b41aace8df6d_::operator() @ 0x1801F7F30 (_lambda_8fce8fe44b6886d54791b41aace8df6d_--operator().c)
 *     _lambda_af20d054935790eae4154cb60d5e7853_::operator() @ 0x1801F8744 (_lambda_af20d054935790eae4154cb60d5e7853_--operator().c)
 *     _lambda_3b41c4f33ad0fdc6aff0256cda85c716_::operator() @ 0x1804E63CC (_lambda_3b41c4f33ad0fdc6aff0256cda85c716_--operator().c)
 *     _lambda_d95836077fc497a3191a50b6c6baa704_::operator() @ 0x1804E8440 (_lambda_d95836077fc497a3191a50b6c6baa704_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x1800C31C4 (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ViewPriorityChanged<unsigned int,bool,bool>(int *a1, char *a2, char *a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  char v9; // [rsp+38h] [rbp-19h] BYREF
  char v10; // [rsp+39h] [rbp-18h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  char *v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+80h] [rbp+2Fh]
  char *v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v6 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
         (__int64)a1,
         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    v9 = *a3;
    v10 = *a2;
    v11 = *a1;
    v17 = &v9;
    v15 = &v10;
    v13 = &v11;
    v18 = 1LL;
    v16 = 1LL;
    v14 = 4LL;
    LODWORD(v6) = tlgWriteTransfer_EventWriteTransfer(
                    (__int64)v7,
                    (unsigned __int8 *)dword_1808599E4,
                    0LL,
                    0LL,
                    5u,
                    &v12);
  }
  return (int)v6;
}
