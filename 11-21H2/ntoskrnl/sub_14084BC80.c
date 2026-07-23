/*
 * XREFs of sub_14084BC80 @ 0x14084BC80
 * Callers:
 *     sub_14084BB98 @ 0x14084BB98 (sub_14084BB98.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 */

LONG_PTR __fastcall sub_14084BC80(__int64 a1, char a2)
{
  void *v3; // rax
  void *v4; // r9
  __int64 v5; // r8
  int v6; // eax
  int v7; // eax

  v3 = sub_14036B86C(a1, 0x64446F50u);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)v3 + 39) + 40LL);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 768);
      if ( a2 )
        v7 = v6 + 1;
      else
        v7 = v6 - 1;
      *(_DWORD *)(v5 + 768) = v7;
    }
  }
  return ObfDereferenceObjectWithTag(v4, 0x64446F50u);
}
