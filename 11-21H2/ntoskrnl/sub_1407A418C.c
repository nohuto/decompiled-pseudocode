/*
 * XREFs of sub_1407A418C @ 0x1407A418C
 * Callers:
 *     sub_1407A41E0 @ 0x1407A41E0 (sub_1407A41E0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall sub_1407A418C(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  result = *(unsigned int *)(a1 + 1376);
  if ( (result & 8) != 0 )
  {
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 1272) & 0xFFFFFFFFFFFFFFF8uLL));
    v3 = *(void **)(a1 + 1544);
    if ( v3 )
    {
      result = ObfDereferenceObject(v3);
      *(_QWORD *)(a1 + 1544) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1376), 0xFFFFFFF7);
  }
  *(_QWORD *)(a1 + 1272) = 0LL;
  return result;
}
