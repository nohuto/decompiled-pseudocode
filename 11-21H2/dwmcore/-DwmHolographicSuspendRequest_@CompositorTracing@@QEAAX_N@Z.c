/*
 * XREFs of ?DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z @ 0x180024DCC
 * Callers:
 *     ?ToggleSuspension@CHolographicManager@@UEAAX_N@Z @ 0x180024D30 (-ToggleSuspension@CHolographicManager@@UEAAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x180024E64 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicSuspendRequest_(CompositorTracing *this, char a2)
{
  _DWORD *v3; // rcx
  int v4; // ecx
  char v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  char *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v3 = *(_DWORD **)(wil::details::static_lazy<CompositorTracing>::get(
                      this,
                      _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 4u )
  {
    if ( (unsigned __int8)tlgKeywordOn(v3, 0x400000000000LL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = a2;
      v8 = 1;
      tlgWriteTransfer_EventWriteTransfer(v4, (int)&dword_180373928, 0, 0, 3u, &v6);
    }
  }
}
