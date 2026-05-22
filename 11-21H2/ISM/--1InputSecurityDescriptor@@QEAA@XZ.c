/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180126590
 * Callers:
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x180054E94 (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     _InputRedirectionProcessor::Initialize_::_1_::dtor$0 @ 0x180055F03 (_InputRedirectionProcessor--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x180055F8F (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x180055FA1 (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$1 @ 0x180058341 (_DWMCursorBroker--Initialize_--_1_--dtor$1.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800BA178 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     _SpeechRuntimeListener::InitializeCoreMessaging_::_1_::dtor$0 @ 0x1800BA3A9 (_SpeechRuntimeListener--InitializeCoreMessaging_--_1_--dtor$0.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18015614C (-Initialize@CursorManager@@IEAAJXZ.c)
 *     _CursorManager::Initialize_::_1_::dtor$2 @ 0x18015639B (_CursorManager--Initialize_--_1_--dtor$2.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801A7A54 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x1801A7D0F (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall InputSecurityDescriptor::~InputSecurityDescriptor(InputSecurityDescriptor *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(v2);
    *(_QWORD *)this = 0LL;
  }
}
