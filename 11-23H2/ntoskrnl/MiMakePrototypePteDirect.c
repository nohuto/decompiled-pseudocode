/*
 * XREFs of MiMakePrototypePteDirect @ 0x140213CE0
 * Callers:
 *     MiAddMappedPtes @ 0x1406AD7D0 (MiAddMappedPtes.c)
 *     MiMapPatchTable @ 0x140A3A510 (MiMapPatchTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakePrototypePteDirect(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( qword_140C65B40 )
  {
    if ( (qword_140C65B40 & v1) == 0 )
      return v1 | qword_140C65B40;
    return v1 | 0x10;
  }
  return v1;
}
