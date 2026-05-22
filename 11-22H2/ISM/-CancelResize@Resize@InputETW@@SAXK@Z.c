/*
 * XREFs of ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x180171C5C
 * Callers:
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180171D04 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18004097C (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

void __fastcall InputETW::Resize::CancelResize(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = a1;
  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v3 = wil::details::static_lazy<InputETW>::get(v2, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    {
      v8 = 0;
      v6 = &v4;
      v4 = v1;
      v7 = 8;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1802362AE, 0LL, 0LL, 3u, &v5);
    }
  }
}
