/*
 * XREFs of ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KII@Z @ 0x1800C1D50
 * Callers:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800C3878 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_SendHomeGesture_(
        ISMTracing *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v9; // rcx
  unsigned int v10; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v11; // [rsp+3Ch] [rbp-65h] BYREF
  int v12; // [rsp+40h] [rbp-61h] BYREF
  int v13; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 v14; // [rsp+48h] [rbp-59h] BYREF
  __int64 v15; // [rsp+50h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v17; // [rsp+78h] [rbp-29h]
  __int64 v18; // [rsp+80h] [rbp-21h]
  int *v19; // [rsp+88h] [rbp-19h]
  __int64 v20; // [rsp+90h] [rbp-11h]
  int *v21; // [rsp+98h] [rbp-9h]
  __int64 v22; // [rsp+A0h] [rbp-1h]
  __int64 *v23; // [rsp+A8h] [rbp+7h]
  __int64 v24; // [rsp+B0h] [rbp+Fh]
  unsigned int *v25; // [rsp+B8h] [rbp+17h]
  __int64 v26; // [rsp+C0h] [rbp+1Fh]
  unsigned int *v27; // [rsp+C8h] [rbp+27h]
  __int64 v28; // [rsp+D0h] [rbp+2Fh]

  v9 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v9 > 4u
    && (*(_QWORD *)(v9 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v9 + 24) & 0x400000000001LL) == *(_QWORD *)(v9 + 24) )
  {
    v10 = a6;
    v11 = a5;
    v27 = &v10;
    v25 = &v11;
    v23 = &v14;
    v21 = &v12;
    v19 = &v13;
    v17 = &v15;
    v28 = 4LL;
    v26 = 4LL;
    v24 = 8LL;
    v22 = 4LL;
    v20 = 4LL;
    v18 = 8LL;
    v14 = a4;
    v12 = a3;
    v13 = a2;
    v15 = 50331648LL;
    tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_18022FF71, 0LL, 0LL, 8u, &v16);
  }
}
