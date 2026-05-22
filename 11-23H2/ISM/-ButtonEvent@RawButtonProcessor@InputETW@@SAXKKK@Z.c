/*
 * XREFs of ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801D28A0
 * Callers:
 *     ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801D2E20 (-OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800F9C60 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::RawButtonProcessor::ButtonEvent(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v10; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-9h] BYREF
  int *v12; // [rsp+68h] [rbp+17h]
  int v13; // [rsp+70h] [rbp+1Fh]
  int v14; // [rsp+74h] [rbp+23h]
  int *v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]
  __int64 *v18; // [rsp+88h] [rbp+37h]
  int v19; // [rsp+90h] [rbp+3Fh]
  int v20; // [rsp+94h] [rbp+43h]

  v3 = a3;
  v5 = a1;
  if ( InputETW::IsEnabled(a1) )
  {
    v7 = wil::details::static_lazy<InputETW>::get(v6, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      v20 = 0;
      v17 = 0;
      v14 = 0;
      v18 = &v10;
      v16 = 4;
      v15 = &v8;
      v12 = &v9;
      v13 = 4;
      v10 = v3;
      v8 = a2;
      v9 = v5;
      v19 = 8;
      tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_180228DE1, 0LL, 0LL, 5u, &v11);
    }
  }
}
