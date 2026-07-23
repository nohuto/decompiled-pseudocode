/*
 * XREFs of sub_140693F68 @ 0x140693F68
 * Callers:
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_1407F3718 @ 0x1407F3718 (sub_1407F3718.c)
 * Callees:
 *     sub_140693A28 @ 0x140693A28 (sub_140693A28.c)
 */

unsigned __int64 sub_140693F68()
{
  __int64 v0; // rbx
  unsigned __int64 result; // rax

  v0 = *((_QWORD *)KeGetCurrentThread() + 23);
  result = (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)(v0 + 1368), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    result = sub_140693A28();
  _InterlockedAnd((volatile signed __int32 *)(v0 + 1124), 0xFFFEFFFF);
  return result;
}
