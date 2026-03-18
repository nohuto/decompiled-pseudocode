/*
 * XREFs of SynchronizeContext @ 0x1C00BFCE0
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     _lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_ @ 0x1C00C6020 (_lambda_7336048acd17859272a6f98208d72592_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SynchronizeContext(__int64 a1)
{
  if ( grpdeskRitInput )
    a1 = ***((_QWORD ***)grpdeskRitInput + 1);
  return InputExtensibilityCallout::CoreMsgSendMessage(a1, 21);
}
