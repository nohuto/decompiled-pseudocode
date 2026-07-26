/*
 * XREFs of ?ReadKnobFromKey@ExecutionContextKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C0120070
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01200A0 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 */

__int64 __fastcall ExecutionContextKnobCollection::ReadKnobFromKey(
        ExecutionContextKnobCollection *this,
        struct KRegKey *a2,
        const struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  if ( a2->m_ptr )
    return RegistryKnobCollection::ReadKnobFromKey(this, a2, a3, a4);
  else
    return 3221226021LL;
}
