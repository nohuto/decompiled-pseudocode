/*
 * XREFs of ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C0054A68
 * Callers:
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C0054720 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C00547BC (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1C0054934 (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1C00549D4 (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputThreadBase::InputThreadState::IsEmpty(CInputThreadBase::InputThreadState *this)
{
  __int64 v1; // r8
  __int64 v3; // rdx

  v1 = *((_QWORD *)this + 1);
  v3 = (v1 == 0) ^ (*((_QWORD *)this + 2) == 0LL) ^ (unsigned int)(*((_DWORD *)this + 6) == 0);
  if ( (_DWORD)v3 != (*(_DWORD *)this == 0) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v3, v1);
    v1 = *((_QWORD *)this + 1);
  }
  return v1 == 0;
}
