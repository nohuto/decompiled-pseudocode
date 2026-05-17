/*
 * XREFs of RtlpFreeHandleForAtom @ 0x1800624D8
 * Callers:
 *     RtlpFreeAllAtom @ 0x180062458 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x180091D30 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x180062BB0 (RtlIsValidIndexHandle.c)
 *     memset @ 0x1800AAE00 (memset.c)
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
    memset(v5, 0, *(unsigned int *)(a1 + 20));
    result = *(_QWORD *)(a1 + 32);
    *v4 = result;
    *(_QWORD *)(a1 + 32) = v4;
  }
  return result;
}
