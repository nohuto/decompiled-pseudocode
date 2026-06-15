/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x14005D084
 * Callers:
 *     _CBridgeToAPOProcessNode::CreateBridgeToApo_::_1_::dtor$1 @ 0x14005D9C0 (_CBridgeToAPOProcessNode--CreateBridgeToApo_--_1_--dtor$1.c)
 *     _CBridgeSourceProcessNode::CreateStreamInstance_::_1_::dtor$1 @ 0x14005DD0B (_CBridgeSourceProcessNode--CreateStreamInstance_--_1_--dtor$1.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140022F00 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall wil::details::out_param_t<std::unique_ptr<CEndpointInstance>>::~out_param_t<std::unique_ptr<CEndpointInstance>>(
        __int64 a1)
{
  CEndpointInstance *result; // rax
  CEndpointInstance *v2; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(CEndpointInstance **)(a1 + 8);
    v2 = **(CEndpointInstance ***)a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
      return CEndpointInstance::`scalar deleting destructor'(v2);
  }
  return result;
}
