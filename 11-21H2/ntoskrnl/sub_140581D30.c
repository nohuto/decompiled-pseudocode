/*
 * XREFs of sub_140581D30 @ 0x140581D30
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall sub_140581D30(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  return 1;
}
