/*
 * XREFs of sub_140773B10 @ 0x140773B10
 * Callers:
 *     sub_140773A70 @ 0x140773A70 (sub_140773A70.c)
 *     sub_140955BAC @ 0x140955BAC (sub_140955BAC.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 */

__int64 __fastcall sub_140773B10(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // r8

  *a2 = 0;
  v4 = -1073741810;
  sub_14077572C(0LL);
  v5 = (_QWORD *)sub_140779C10(a1, 1131441744LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5[39] + 40LL);
    if ( v6 )
    {
      v4 = 0;
      *a2 = *(_DWORD *)(v6 + 152);
    }
    ObfDereferenceObjectWithTag(v5, 0x43706E50u);
  }
  sub_140775698(0LL);
  return v4;
}
