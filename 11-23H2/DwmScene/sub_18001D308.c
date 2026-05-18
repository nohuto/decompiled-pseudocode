/*
 * XREFs of sub_18001D308 @ 0x18001D308
 * Callers:
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 *     sub_1800E48CB @ 0x1800E48CB (sub_1800E48CB.c)
 * Callees:
 *     sub_18001C9A4 @ 0x18001C9A4 (sub_18001C9A4.c)
 */

__int64 __fastcall sub_18001D308(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18001C9A4(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
