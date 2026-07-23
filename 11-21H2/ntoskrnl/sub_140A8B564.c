/*
 * XREFs of sub_140A8B564 @ 0x140A8B564
 * Callers:
 *     sub_140A8B064 @ 0x140A8B064 (sub_140A8B064.c)
 *     sub_140A8B190 @ 0x140A8B190 (sub_140A8B190.c)
 *     sub_140A8B2AC @ 0x140A8B2AC (sub_140A8B2AC.c)
 *     sub_140A8B450 @ 0x140A8B450 (sub_140A8B450.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_140A8B564()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
    return dword_140C1B200 != 0;
  return result;
}
