/*
 * XREFs of MmObtainChargesToLockPagedPool @ 0x14081D080
 * Callers:
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 *     sub_14080751C @ 0x14080751C (sub_14080751C.c)
 *     sub_140824960 @ 0x140824960 (sub_140824960.c)
 * Callees:
 *     sub_1402821F4 @ 0x1402821F4 (sub_1402821F4.c)
 */

_BOOL8 __fastcall MmObtainChargesToLockPagedPool(__int16 a1, __int64 a2)
{
  return (unsigned int)sub_1402821F4(&StartContext, ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12, 1024LL) != 0;
}
