/*
 * XREFs of sub_140242498 @ 0x140242498
 * Callers:
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 * Callees:
 *     sub_1402EE104 @ 0x1402EE104 (sub_1402EE104.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 */

__int64 __fastcall sub_140242498(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v7; // rcx

  v3 = (_QWORD *)(a1 + 520);
  if ( a3 )
    sub_1402EE104(a1, a3, v3);
  *(_QWORD *)(a1 + 232) = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 40));
  sub_1402F3290(a2);
  result = a2 + 48;
  v7 = *(_QWORD **)(a2 + 56);
  if ( *v7 != a2 + 48 )
    __fastfail(3u);
  *v3 = result;
  v3[1] = v7;
  *v7 = v3;
  *(_QWORD *)(a2 + 56) = v3;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
