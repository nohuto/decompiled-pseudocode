/*
 * XREFs of sub_14040CC20 @ 0x14040CC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_14040D558 @ 0x14040D558 (sub_14040D558.c)
 */

__int64 __fastcall sub_14040CC20(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)sub_14040D558(*(unsigned int *)(a2 + 4));
  *(_QWORD *)(a2 + 40) = (unsigned int)result + a2 + 64;
  return result;
}
