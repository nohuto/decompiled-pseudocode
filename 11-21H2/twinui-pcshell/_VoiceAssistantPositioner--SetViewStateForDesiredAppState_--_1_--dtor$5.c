/*
 * XREFs of _VoiceAssistantPositioner::SetViewStateForDesiredAppState_::_1_::dtor$5 @ 0x1804F65C2
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveAppFinderByApplication@@QEAA@XZ @ 0x1800A02B0 (--1CImmersiveAppFinderByApplication@@QEAA@XZ.c)
 */

void __fastcall VoiceAssistantPositioner::SetViewStateForDesiredAppState_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~2u;
    CImmersiveAppFinderByApplication::~CImmersiveAppFinderByApplication((CImmersiveAppFinderByApplication *)(a2 + 120));
  }
}
