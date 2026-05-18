/*
 * XREFs of sub_18007C058 @ 0x18007C058
 * Callers:
 *     sub_18007BAF0 @ 0x18007BAF0 (sub_18007BAF0.c)
 *     sub_1800E9BB2 @ 0x1800E9BB2 (sub_1800E9BB2.c)
 * Callees:
 *     sub_18002E8A4 @ 0x18002E8A4 (sub_18002E8A4.c)
 */

__int64 __fastcall sub_18007C058(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18002E8A4(*(void ***)(a1 + 8), *(_QWORD *)a1);
  return result;
}
