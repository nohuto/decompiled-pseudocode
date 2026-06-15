/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14005A3D0
 * Callers:
 *     _CAudioProcessor::ValidateConnectionFormatMatchesEndpoint_::_1_::dtor$1 @ 0x140036EB2 (_CAudioProcessor--ValidateConnectionFormatMatchesEndpoint_--_1_--dtor$1.c)
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$1 @ 0x140037940 (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$1.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$34 @ 0x1400386D0 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$34.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x140038890 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$11.c)
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
