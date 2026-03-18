/*
 * XREFs of ViSettingsIoCheckForChanges @ 0x140ADAF48
 * Callers:
 *     VfInitVerifierComponents @ 0x140AC2E70 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x140ADADD4 (VfSettingsCheckForChanges.c)
 * Callees:
 *     IoVerifierCheckForSettingsChange @ 0x140AC0BF0 (IoVerifierCheckForSettingsChange.c)
 *     VfWdCheckForSettingsChange @ 0x140ADE064 (VfWdCheckForSettingsChange.c)
 */

void __fastcall ViSettingsIoCheckForChanges(unsigned int a1)
{
  unsigned int v1; // ebx
  int v2; // ecx

  v1 = a1;
  if ( !VfIrpDatabaseInitialized )
    v1 = a1 & 0xFFFFFFEF;
  if ( (v1 & 0x10) != 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !VfIoDisabled )
      _InterlockedExchange(&VfIoSwitchedOffNoReboot, 1);
  }
  VfIoDisabled = v2;
  IoVerifierCheckForSettingsChange(v1);
  if ( (VfRuleClasses & 0x400000) == 0 )
    VfWdCheckForSettingsChange(v1);
}
