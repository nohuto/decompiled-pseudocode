/*
 * XREFs of ?LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800ADE00
 * Callers:
 *     ?LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z @ 0x1800AE3B4 (-LogMPCInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall ISMTracing::LogMPCGameControllerInputReport(struct InputInfo *a1, const bool *a2)
{
  __int64 v4; // rcx
  char v5; // [rsp+30h] [rbp-49h] BYREF
  int v6; // [rsp+34h] [rbp-45h] BYREF
  int v7; // [rsp+38h] [rbp-41h] BYREF
  int v8; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v9; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-29h] BYREF
  int *v11; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+78h] [rbp-1h]
  int *v13; // [rsp+80h] [rbp+7h]
  __int64 v14; // [rsp+88h] [rbp+Fh]
  int *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  __int64 *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  char *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]

  v4 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)a1,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
  {
    v5 = *a2;
    v9 = *((_QWORD *)a1 + 2);
    v6 = *((_DWORD *)a1 + 2);
    v7 = *((_DWORD *)a1 + 1);
    v8 = *(_DWORD *)a1;
    v19 = &v5;
    v17 = &v9;
    v15 = &v6;
    v13 = &v7;
    v11 = &v8;
    v20 = 1LL;
    v18 = 8LL;
    v16 = 4LL;
    v14 = 4LL;
    v12 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1802010E1, 0LL, 0LL, 7u, &v10);
  }
}
