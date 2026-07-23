/*
 * XREFs of sub_1406F175C @ 0x1406F175C
 * Callers:
 *     ?Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z @ 0x1406F09A8 (-Next@CEnumMediaTypes@@UEAAJKPEAPEAU_AMMediaType@@PEAK@Z.c)
 *     sub_1406F120C @ 0x1406F120C (sub_1406F120C.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1406F175C(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
