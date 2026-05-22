/*
 * XREFs of ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x18009F020
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800A0968 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(
        ISMTracing *this,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        bool a6)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool v11; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-55h] BYREF
  int v13; // [rsp+40h] [rbp-51h] BYREF
  __int64 v14; // [rsp+48h] [rbp-49h] BYREF
  __int64 v15; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+80h] [rbp-11h]
  int v19; // [rsp+84h] [rbp-Dh]
  __int64 *v20; // [rsp+88h] [rbp-9h]
  int v21; // [rsp+90h] [rbp-1h]
  int v22; // [rsp+94h] [rbp+3h]
  int *v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A4h] [rbp+13h]
  unsigned int *v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+B0h] [rbp+1Fh]
  int v28; // [rsp+B4h] [rbp+23h]
  bool *v29; // [rsp+B8h] [rbp+27h]
  int v30; // [rsp+C0h] [rbp+2Fh]
  int v31; // [rsp+C4h] [rbp+33h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v10 = wil::details::static_lazy<ISMTracing>::get(
            v9,
            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v10 > 4u
      && (*(_BYTE *)(v10 + 16) & 1) != 0
      && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
    {
      v31 = 0;
      v28 = 0;
      v25 = 0;
      v22 = 0;
      v19 = 0;
      v11 = a6;
      v12 = a5;
      v29 = &v11;
      v26 = &v12;
      v23 = &v13;
      v20 = &v14;
      v27 = 4;
      v24 = 4;
      v17 = &v15;
      v21 = 8;
      v18 = 8;
      v13 = a4;
      v14 = a3;
      v15 = a2;
      v30 = 1;
      tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801FFCAE, 0LL, 0LL, 7u, &v16);
    }
  }
}
