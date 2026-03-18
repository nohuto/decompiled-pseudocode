/*
 * XREFs of IommupHvUnblockDefaultDma @ 0x14052544C
 * Callers:
 *     HalpIommuInitSystem @ 0x140A89BC0 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 IommupHvUnblockDefaultDma()
{
  return ((__int64 (*)(void))qword_140C62698)();
}
