/*
 * XREFs of sub_1402128E0 @ 0x1402128E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14021294C @ 0x14021294C (sub_14021294C.c)
 */

__int64 __fastcall sub_1402128E0(__int64 a1)
{
  __int64 result; // rax
  __int64 *i; // rdi

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 244), 1, 0);
  if ( !(_DWORD)result )
  {
    for ( i = (__int64 *)qword_140C4BC40; i != &qword_140C4BC40; i = (__int64 *)*i )
      sub_14021294C(i);
    result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 240), 0);
    _InterlockedExchange((volatile __int32 *)(a1 + 244), 0);
  }
  return result;
}
