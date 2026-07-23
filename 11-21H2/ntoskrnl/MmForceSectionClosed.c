/*
 * XREFs of MmForceSectionClosed @ 0x14023E960
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023E9A0 @ 0x14023E9A0 (sub_14023E9A0.c)
 */

BOOLEAN __stdcall MmForceSectionClosed(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN DelayClose)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = DelayClose != 0 ? 5 : 1;
  v4 = sub_14023E9A0(SectionObjectPointer, v3, 0LL);
  if ( !v4 )
    v4 = sub_14023E9A0(SectionObjectPointer, v3 & 0xFFFFFFFC | 2, 0LL);
  return v4 != 2;
}
