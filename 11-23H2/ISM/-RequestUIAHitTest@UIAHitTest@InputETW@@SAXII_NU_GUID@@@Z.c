/*
 * XREFs of ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x1801B9FF0
 * Callers:
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801B9E4C (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18003F250 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 */

void __fastcall InputETW::UIAHitTest::RequestUIAHitTest(int a1, int a2, unsigned __int8 a3, struct _GUID *a4)
{
  int v5; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  int v12; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-19h] BYREF
  int *v14; // [rsp+68h] [rbp+7h]
  int v15; // [rsp+70h] [rbp+Fh]
  int v16; // [rsp+74h] [rbp+13h]
  int *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  int *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  struct _GUID *v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]

  v5 = a3;
  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v9 = wil::details::static_lazy<InputETW>::get(v8, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v9 > 5u && (*(_BYTE *)(v9 + 16) & 1) != 0 && (*(_QWORD *)(v9 + 24) & 1LL) == *(_QWORD *)(v9 + 24) )
    {
      v25 = 0;
      v22 = 0;
      v19 = 0;
      v16 = 0;
      v20 = &v10;
      v17 = &v11;
      v14 = &v12;
      v21 = 4;
      v18 = 4;
      v15 = 4;
      v10 = v5;
      v11 = a2;
      v12 = a1;
      v23 = a4;
      v24 = 16;
      tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1802288B1, 0LL, 0LL, 6u, &v13);
    }
  }
}
