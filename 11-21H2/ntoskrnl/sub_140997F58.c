/*
 * XREFs of sub_140997F58 @ 0x140997F58
 * Callers:
 *     sub_140997FD0 @ 0x140997FD0 (sub_140997FD0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

LONG_PTR __fastcall sub_140997F58(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax
  LONG_PTR *v4; // rcx

  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(result + 8) != a1 || (v4 = *(LONG_PTR **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = result;
    *(_QWORD *)(result + 8) = v4;
    *(_QWORD *)a1 = 0LL;
    sub_14042A5E0(a1, a2);
    IoFreeIrp(*(PIRP *)(a1 + 56));
    return ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x64506F50u);
  }
  return result;
}
