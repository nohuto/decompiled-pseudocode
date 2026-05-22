/*
 * XREFs of ?MPCInputRouter_UpdateFocusedInputTarget3D_@ISMTracing@@QEAAX_NPEAUIMPCTarget@@0_K@Z @ 0x180118D64
 * Callers:
 *     ??$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAEA_N$$QEAPEAUIMPCFocusTarget@@$$QEA_NAEA_K@Z @ 0x180116488 (--$MPCInputRouter_UpdateFocusedInputTarget3D@AEA_NPEAUIMPCFocusTarget@@_NAEA_K@ISMTracing@@SAXAE.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180117AD4 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_UpdateFocusedInputTarget3D_(
        ISMTracing *this,
        char a2,
        struct IMPCTarget *a3,
        char a4,
        unsigned __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  char v10; // [rsp+30h] [rbp-61h] BYREF
  char v11; // [rsp+31h] [rbp-60h] BYREF
  int PIDOfTarget; // [rsp+34h] [rbp-5Dh] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-59h] BYREF
  struct IMPCTarget *v14; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-41h] BYREF
  char *v16; // [rsp+70h] [rbp-21h]
  int v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+7Ch] [rbp-15h]
  struct IMPCTarget **v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+88h] [rbp-9h]
  int v21; // [rsp+8Ch] [rbp-5h]
  char *v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+9Ch] [rbp+Bh]
  int *p_PIDOfTarget; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+ACh] [rbp+1Bh]
  unsigned __int64 *v28; // [rsp+B0h] [rbp+1Fh]
  int v29; // [rsp+B8h] [rbp+27h]
  int v30; // [rsp+BCh] [rbp+2Bh]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v9 = wil::details::static_lazy<ISMTracing>::get(
           v8,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
    {
      v13 = a5;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v21 = 0;
      v18 = 0;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a3);
      v28 = &v13;
      p_PIDOfTarget = &PIDOfTarget;
      v22 = &v10;
      v19 = &v14;
      v16 = &v11;
      v29 = 8;
      v20 = 8;
      v10 = a4;
      v14 = a3;
      v11 = a2;
      v26 = 4;
      v23 = 1;
      v17 = 1;
      tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_180234467, 0LL, 0LL, 7u, &v15);
    }
  }
}
