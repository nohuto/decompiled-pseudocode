/*
 * XREFs of wil::details::lambda_call__lambda_87d3782d9079e94a32bbf6440560d047___::_lambda_call__lambda_87d3782d9079e94a32bbf6440560d047___ @ 0x1800FB638
 * Callers:
 *     _CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::dtor$10 @ 0x1800FC990 (_CBtLeAudioResourceManager--RefreshStreamsOnDevice_--_1_--dtor$10.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_87d3782d9079e94a32bbf6440560d047___::_lambda_call__lambda_87d3782d9079e94a32bbf6440560d047___(
        __int64 **a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = **a1;
    if ( v2 )
      CAudioSessionManager::Disconnect(*(CAudioSessionManager **)(v2 + 96), 0, 1);
    v3 = a1[1];
    if ( *v3 )
      CAudioSessionManager::Disconnect(*(CAudioSessionManager **)(*v3 + 96), 0, 1);
  }
}
