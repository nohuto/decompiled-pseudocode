/*
 * XREFs of wil::details::lambda_call__lambda_45f3313619d66960fcd08ff852f00b90___::_lambda_call__lambda_45f3313619d66960fcd08ff852f00b90___ @ 0x180113958
 * Callers:
 *     _CBtAudioResourceManager::CreateSaDeviceOnHfpMicrophoneEndpoint_::_1_::dtor$2 @ 0x1801145CD (_CBtAudioResourceManager--CreateSaDeviceOnHfpMicrophoneEndpoint_--_1_--dtor$2.c)
 *     _CBtAudioResourceManager::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$6 @ 0x180114E21 (_CBtAudioResourceManager--CreateSaDeviceOnRenderEndpoint_--_1_--dtor$6.c)
 * Callees:
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_45f3313619d66960fcd08ff852f00b90___::_lambda_call__lambda_45f3313619d66960fcd08ff852f00b90___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups(*(CBtAudioResourceManager **)a1);
  }
  return result;
}
