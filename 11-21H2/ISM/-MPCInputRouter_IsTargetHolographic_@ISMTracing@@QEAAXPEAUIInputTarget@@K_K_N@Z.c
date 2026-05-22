/*
 * XREFs of ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x1800F114C
 * Callers:
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800F0D74 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800F0254 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_IsTargetHolographic_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        __int64 a4,
        bool a5)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  bool v10; // [rsp+30h] [rbp-51h] BYREF
  int PIDOfTarget; // [rsp+34h] [rbp-4Dh] BYREF
  int v12; // [rsp+38h] [rbp-49h] BYREF
  __int64 v13; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-31h] BYREF
  bool *v15; // [rsp+70h] [rbp-11h]
  int v16; // [rsp+78h] [rbp-9h]
  int v17; // [rsp+7Ch] [rbp-5h]
  int *v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+8Ch] [rbp+Bh]
  __int64 *v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+9Ch] [rbp+1Bh]
  int *p_PIDOfTarget; // [rsp+A0h] [rbp+1Fh]
  int v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+ACh] [rbp+2Bh]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v9 = wil::details::static_lazy<ISMTracing>::get(
           v8,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v9 > 5u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
    {
      v26 = 0;
      v23 = 0;
      v20 = 0;
      v17 = 0;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
      v10 = a5;
      p_PIDOfTarget = &PIDOfTarget;
      v21 = &v13;
      v18 = &v12;
      v15 = &v10;
      v25 = 4;
      v19 = 4;
      v13 = a4;
      v12 = a3;
      v22 = 8;
      v16 = 1;
      tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_180203BCE, 0LL, 0LL, 6u, &v14);
    }
  }
}
