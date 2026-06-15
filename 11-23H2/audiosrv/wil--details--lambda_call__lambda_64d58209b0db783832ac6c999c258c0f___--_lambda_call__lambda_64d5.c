/*
 * XREFs of wil::details::lambda_call__lambda_64d58209b0db783832ac6c999c258c0f___::_lambda_call__lambda_64d58209b0db783832ac6c999c258c0f___ @ 0x1800F542C
 * Callers:
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnMicrophoneEndpoint_::_1_::dtor$2 @ 0x1800F64F5 (_CBtAudioResourceManagerBase--CreateSaDeviceOnMicrophoneEndpoint_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$6 @ 0x1800F6F99 (_CBtAudioResourceManagerBase--CreateSaDeviceOnRenderEndpoint_--_1_--dtor$6.c)
 * Callees:
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E24 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_64d58209b0db783832ac6c999c258c0f___::_lambda_call__lambda_64d58209b0db783832ac6c999c258c0f___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(*(CBtAudioResourceManagerBase **)a1);
  }
  return result;
}
