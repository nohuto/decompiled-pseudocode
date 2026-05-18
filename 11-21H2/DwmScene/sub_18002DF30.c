/*
 * XREFs of sub_18002DF30 @ 0x18002DF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B320C @ 0x1800B320C (sub_1800B320C.c)
 */

__int64 __fastcall sub_18002DF30(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800B320C(*(_QWORD *)(a1 + 440));
  ++*(_QWORD *)(a1 + 480);
  return result;
}
