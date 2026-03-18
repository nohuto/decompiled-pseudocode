/*
 * XREFs of ExpIsFastResourceOwned @ 0x140415A5C
 * Callers:
 *     ExDeleteFastResource2 @ 0x140413494 (ExDeleteFastResource2.c)
 *     ExIsFastResourceHeld2 @ 0x140413A7C (ExIsFastResourceHeld2.c)
 *     ExReinitializeFastResource2 @ 0x140413CB8 (ExReinitializeFastResource2.c)
 *     ExpFastResourceLegacyIsAcquiredShared2 @ 0x140415768 (ExpFastResourceLegacyIsAcquiredShared2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsFastResourceOwned(__int64 *a1)
{
  __int64 v1; // rax
  char v2; // cl

  v1 = *a1;
  v2 = 1;
  if ( (v1 & 1) == 0 )
    return (v1 & 0xFFFFFFFFFFFFFFFCuLL) != 0;
  return v2;
}
