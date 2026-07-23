/*
 * XREFs of sub_140667554 @ 0x140667554
 * Callers:
 *     sub_140663D08 @ 0x140663D08 (sub_140663D08.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall sub_140667554(__int64 a1, _DWORD *a2)
{
  PEPROCESS v3; // rbx
  LONG_PTR result; // rax

  if ( a2 && (*a2 & 0x100000) != 0 )
    v3 = PsInitialSystemProcess;
  else
    v3 = (PEPROCESS)*((_QWORD *)KeGetCurrentThread() + 23);
  result = ObfReferenceObjectWithTag(v3, 0x63706C41u);
  *(_QWORD *)(a1 + 24) = v3;
  return result;
}
