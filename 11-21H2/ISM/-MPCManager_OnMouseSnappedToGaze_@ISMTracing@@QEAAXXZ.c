/*
 * XREFs of ?MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ @ 0x180099094
 * Callers:
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x18009A05C (-OnMouseSnappedToGaze@MPCManager@@QEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall ISMTracing::MPCManager_OnMouseSnappedToGaze_(ISMTracing *this)
{
  _DWORD *v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_DWORD *)wil::details::static_lazy<ISMTracing>::get(
                   (__int64)this,
                   _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 4u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v1, (unsigned __int8 *)dword_1801FF981, 0LL, 0LL, 2u, &v2);
}
