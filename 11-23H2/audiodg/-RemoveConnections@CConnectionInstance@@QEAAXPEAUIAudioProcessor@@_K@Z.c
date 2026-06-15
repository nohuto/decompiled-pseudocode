/*
 * XREFs of ?RemoveConnections@CConnectionInstance@@QEAAXPEAUIAudioProcessor@@_K@Z @ 0x14000D3F0
 * Callers:
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000D290 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     wil::details::lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___::_lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___ @ 0x14005C09C (wil--details--lambda_call__lambda_41bc0ba21dd7e8abeb610ebfb99eb05f___--_lambda_call__lambda_41bc.c)
 * Callees:
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14000D710 (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

void __fastcall CConnectionInstance::RemoveConnections(
        CConnectionInstance *this,
        struct IAudioProcessor *a2,
        unsigned __int64 a3)
{
  *((_DWORD *)this + 1) = 0;
  if ( *((_DWORD *)this + 4) )
  {
    if ( *((_DWORD *)this + 4) == 1 )
      CConnectionInstance::RemoveCaptureConnection(this, a2, a3);
  }
  else
  {
    CConnectionInstance::RemoveRenderConnection(this, a2, a3);
  }
}
