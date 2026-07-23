/*
 * XREFs of sub_1407F015C @ 0x1407F015C
 * Callers:
 *     sub_1407F0070 @ 0x1407F0070 (sub_1407F0070.c)
 *     sub_140811940 @ 0x140811940 (sub_140811940.c)
 * Callees:
 *     sub_14025B380 @ 0x14025B380 (sub_14025B380.c)
 *     sub_1407F10C4 @ 0x1407F10C4 (sub_1407F10C4.c)
 */

__int64 __fastcall sub_1407F015C(__int64 a1)
{
  void *v2; // rcx
  KSPIN_LOCK *v3; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    result = sub_1407F10C4(v2);
  v3 = *(KSPIN_LOCK **)(a1 + 16);
  if ( v3 )
    return sub_14025B380(v3);
  return result;
}
