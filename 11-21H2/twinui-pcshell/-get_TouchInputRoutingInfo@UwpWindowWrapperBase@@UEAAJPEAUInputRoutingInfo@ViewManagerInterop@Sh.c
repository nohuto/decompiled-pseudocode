/*
 * XREFs of ?get_TouchInputRoutingInfo@UwpWindowWrapperBase@@UEAAJPEAUInputRoutingInfo@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180419D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UwpWindowWrapperBase::get_TouchInputRoutingInfo(
        UwpWindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::InputRoutingInfo *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  return result;
}
