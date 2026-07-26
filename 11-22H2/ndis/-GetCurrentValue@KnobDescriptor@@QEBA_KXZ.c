/*
 * XREFs of ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1C002B8D0
 * Callers:
 *     ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C011A330 (-ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x1C011A3F0 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x1C011A498 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 *     ?QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z @ 0x1C013FD1C (-QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1C013FDE8 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x1C01400BC (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KnobDescriptor::GetCurrentValue(KnobDescriptor *this)
{
  ConfigKnobFlag Flags; // edx
  unsigned __int8 *Value; // rax

  Flags = this->Flags;
  Value = (unsigned __int8 *)this->Value;
  if ( (Flags & 2) != 0 )
    return *Value;
  if ( (Flags & 4) != 0 )
    return *(_QWORD *)Value;
  return *(unsigned int *)Value;
}
