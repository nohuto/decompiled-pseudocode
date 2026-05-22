/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180035CD8
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x1800388F4 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x1800390D8 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x18004F568 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180050D90 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x18006C9F2 (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x18006CA04 (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$1 @ 0x18006DB70 (_DWMCursorBroker--Initialize_--_1_--dtor$1.c)
 *     _TestCommandHost::CreateEndpointToReceiveMessages_::_1_::dtor$0 @ 0x18006FA66 (_TestCommandHost--CreateEndpointToReceiveMessages_--_1_--dtor$0.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D324C (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     _SpeechRuntimeListener::InitializeCoreMessaging_::_1_::dtor$0 @ 0x1800D3445 (_SpeechRuntimeListener--InitializeCoreMessaging_--_1_--dtor$0.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x180175354 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     _CursorManager::Initialize_::_1_::dtor$2 @ 0x1801755C2 (_CursorManager--Initialize_--_1_--dtor$2.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801C5DE4 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x1801C609F (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
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
