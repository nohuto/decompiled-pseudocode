/*
 * XREFs of ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x1800A5110
 * Callers:
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800A55F4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 */

void __fastcall ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3,
        const bool *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // al
  char v10; // [rsp+38h] [rbp-19h] BYREF
  char v11; // [rsp+39h] [rbp-18h] BYREF
  char v12; // [rsp+3Ah] [rbp-17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  char *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  char *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  char *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v8 = wil::details::static_lazy<ISMTracing>::get(
           v7,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
    {
      v9 = *a4;
      v22 = 0;
      v19 = 0;
      v16 = 0;
      v10 = v9;
      v11 = *a3;
      v12 = *a2;
      v20 = &v10;
      v17 = &v11;
      v14 = &v12;
      v21 = 1;
      v18 = 1;
      v15 = 1;
      tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1802005C7, 0LL, 0LL, 5u, &v13);
    }
  }
}
