/*
 * XREFs of RtlpFreeHandleForAtom @ 0x180003468
 * Callers:
 *     RtlpFreeAllAtom @ 0x1800034BC (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x18008BC90 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180003B40 (RtlIsValidIndexHandle.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  result = RtlIsValidIndexHandle(a1 + 16, *(unsigned __int16 *)(a2 + 8), &v5);
  if ( (_BYTE)result )
  {
    v4 = v5;
    memset_thunk_772440563353939046(v5, 0, *(unsigned int *)(a1 + 20));
    result = *(_QWORD *)(a1 + 32);
    *v4 = result;
    *(_QWORD *)(a1 + 32) = v4;
  }
  return result;
}
