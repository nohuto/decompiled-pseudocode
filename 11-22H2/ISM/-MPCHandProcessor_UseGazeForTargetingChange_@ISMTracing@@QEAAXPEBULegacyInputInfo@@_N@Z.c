/*
 * XREFs of ?MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N@Z @ 0x1800CF8F4
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800D04B0 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHandProcessor_UseGazeForTargetingChange_(
        ISMTracing *this,
        const struct LegacyInputInfo *a2,
        char a3)
{
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp-49h] BYREF
  char v7; // [rsp+31h] [rbp-48h] BYREF
  char v8; // [rsp+32h] [rbp-47h] BYREF
  char v9; // [rsp+33h] [rbp-46h] BYREF
  int v10; // [rsp+34h] [rbp-45h] BYREF
  int v11; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-39h] BYREF
  int *v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  int *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  char *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  char *v19; // [rsp+90h] [rbp+17h]
  __int64 v20; // [rsp+98h] [rbp+1Fh]
  char *v21; // [rsp+A0h] [rbp+27h]
  __int64 v22; // [rsp+A8h] [rbp+2Fh]
  char *v23; // [rsp+B0h] [rbp+37h]
  __int64 v24; // [rsp+B8h] [rbp+3Fh]

  v5 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v6 = *((_BYTE *)a2 + 997);
    v7 = *((_BYTE *)a2 + 996);
    v8 = *((_BYTE *)a2 + 1204);
    v10 = *((_DWORD *)a2 + 265);
    v11 = *((_DWORD *)a2 + 20);
    v23 = &v6;
    v21 = &v7;
    v19 = &v8;
    v17 = &v9;
    v15 = &v10;
    v13 = &v11;
    v24 = 1LL;
    v22 = 1LL;
    v20 = 1LL;
    v18 = 1LL;
    v16 = 4LL;
    v14 = 4LL;
    v9 = a3;
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_180230B71, 0LL, 0LL, 8u, &v12);
  }
}
