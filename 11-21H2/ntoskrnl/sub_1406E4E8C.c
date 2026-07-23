/*
 * XREFs of sub_1406E4E8C @ 0x1406E4E8C
 * Callers:
 *     sub_140259420 @ 0x140259420 (sub_140259420.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406E4E8C(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 296);
  _InterlockedIncrement((volatile signed __int32 *)(result + 112));
  return result;
}
