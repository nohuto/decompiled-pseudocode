/*
 * XREFs of ?HandleDelayedDestructionRequest@CPrimitiveGroup@DirectComposition@@UEAA_NXZ @ 0x18008B6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCPrimitiveGroup@DirectComposition@@MEAAPEAXI@Z @ 0x1800F99B4 (--_GCPrimitiveGroup@DirectComposition@@MEAAPEAXI@Z.c)
 */

char __fastcall DirectComposition::CPrimitiveGroup::HandleDelayedDestructionRequest(
        DirectComposition::CPrimitiveGroup *this)
{
  DirectComposition::CPrimitiveGroup *v2; // rcx

  if ( (*((_BYTE *)this + 56) & 1) == 0 )
    return 0;
  v2 = (DirectComposition::CPrimitiveGroup *)((char *)this - 24);
  if ( v2 )
    DirectComposition::CPrimitiveGroup::`scalar deleting destructor'(v2, 1u);
  return 1;
}
