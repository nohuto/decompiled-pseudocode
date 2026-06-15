/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14004F110
 * Callers:
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$1 @ 0x140035319 (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$1.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$23 @ 0x1400357B9 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$23.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x140035C0E (_FillAPOInitSystemEffectsStructure_--_1_--dtor$11.c)
 *     _CAudioProcessor::ValidateConnectionFormatMatchesEndpoint_::_1_::dtor$1 @ 0x1400360E9 (_CAudioProcessor--ValidateConnectionFormatMatchesEndpoint_--_1_--dtor$1.c)
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::dtor$6 @ 0x140036700 (_CAPOProcessingHost--RegisterAPONotifications_--_1_--dtor$6.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$3 @ 0x14004F47F (_FillAuxiliaryInputInitStruct_--_1_--dtor$3.c)
 *     _CBridgeToApoAuxInput::RuntimeClassInitialize_::_1_::dtor$0 @ 0x14004F99C (_CBridgeToApoAuxInput--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CBridgeSourceEndpoint::RuntimeClassInitialize_::_1_::dtor$0 @ 0x140079EC8 (_CBridgeSourceEndpoint--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CBridgeSourceEndpoint::RuntimeClassInitialize_::_1_::dtor$1 @ 0x140079ED4 (_CBridgeSourceEndpoint--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CBridgeToRenderGraph::RuntimeClassInitialize_::_1_::dtor$0 @ 0x14007A574 (_CBridgeToRenderGraph--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
