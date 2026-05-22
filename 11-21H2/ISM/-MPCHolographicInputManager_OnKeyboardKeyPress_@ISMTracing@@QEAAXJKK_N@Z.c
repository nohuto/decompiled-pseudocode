/*
 * XREFs of ?MPCHolographicInputManager_OnKeyboardKeyPress_@ISMTracing@@QEAAXJKK_N@Z @ 0x18009EA38
 * Callers:
 *     ??$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJAEAK$$QEAW4InputType@@AEA_N@Z @ 0x18009C134 (--$MPCHolographicInputManager_OnKeyboardKeyPress@AEAJAEAKW4InputType@@AEA_N@ISMTracing@@SAXAEAJA.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_OnKeyboardKeyPress_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        bool a5)
{
  __int64 v8; // rcx
  bool v9; // [rsp+38h] [rbp-31h] BYREF
  int v10; // [rsp+3Ch] [rbp-2Dh] BYREF
  int v11; // [rsp+40h] [rbp-29h] BYREF
  int v12; // [rsp+44h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-21h] BYREF
  int *v14; // [rsp+68h] [rbp-1h]
  __int64 v15; // [rsp+70h] [rbp+7h]
  int *v16; // [rsp+78h] [rbp+Fh]
  __int64 v17; // [rsp+80h] [rbp+17h]
  int *v18; // [rsp+88h] [rbp+1Fh]
  __int64 v19; // [rsp+90h] [rbp+27h]
  bool *v20; // [rsp+98h] [rbp+2Fh]
  __int64 v21; // [rsp+A0h] [rbp+37h]

  v8 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 5u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
  {
    v9 = a5;
    v10 = a4;
    v20 = &v9;
    v11 = a3;
    v18 = &v10;
    v16 = &v11;
    v14 = &v12;
    v12 = a2;
    v21 = 1LL;
    v19 = 4LL;
    v17 = 4LL;
    v15 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1801FFB76, 0LL, 0LL, 6u, &v13);
  }
}
