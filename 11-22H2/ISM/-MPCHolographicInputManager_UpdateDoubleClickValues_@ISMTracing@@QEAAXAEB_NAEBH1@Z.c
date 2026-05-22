/*
 * XREFs of ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x1800C7B18
 * Callers:
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x180053298 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(
        ISMTracing *this,
        const bool *a2,
        int *a3,
        int *a4)
{
  __int64 v7; // rcx
  char v8; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  int v10; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-9h] BYREF
  char *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  int *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  int *v16; // [rsp+88h] [rbp+37h]
  __int64 v17; // [rsp+90h] [rbp+3Fh]

  v7 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    v9 = *a4;
    v10 = *a3;
    v8 = *a2;
    v16 = &v9;
    v14 = &v10;
    v12 = &v8;
    v17 = 4LL;
    v15 = 4LL;
    v13 = 1LL;
    tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_1802300C3, 0LL, 0LL, 5u, &v11);
  }
}
