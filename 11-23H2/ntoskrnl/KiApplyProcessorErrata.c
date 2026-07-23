/*
 * XREFs of KiApplyProcessorErrata @ 0x140410F5C
 * Callers:
 *     KiRestoreFeatureBits @ 0x140576BD0 (KiRestoreFeatureBits.c)
 *     KiSetFeatureBits @ 0x140A8D4C4 (KiSetFeatureBits.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403829F0 (HviIsAnyHypervisorPresent.c)
 */

void __fastcall KiApplyProcessorErrata(_BYTE *a1)
{
  _BYTE *v2; // rdi
  char v3; // al
  unsigned __int8 v4; // cl

  v2 = a1 + 141;
  if ( a1[141] == 1 )
  {
    v3 = a1[64];
    if ( v3 > 15 && v3 != 17 && !HviIsAnyHypervisorPresent() )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
    if ( *v2 == 1 && a1[64] == 23 )
    {
      v4 = a1[67];
      if ( ((unsigned __int8)(v4 - 48) <= 0x1Fu || v4 >= 0x60u) && !HviIsAnyHypervisorPresent() )
        __writemsr(0xC001102E, __readmsr(0xC001102E) | 0x200000000LL);
    }
  }
}
