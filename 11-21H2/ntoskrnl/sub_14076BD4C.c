/*
 * XREFs of sub_14076BD4C @ 0x14076BD4C
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_14055F864 @ 0x14055F864 (sub_14055F864.c)
 *     sub_14076BB10 @ 0x14076BB10 (sub_14076BB10.c)
 *     sub_1408442B0 @ 0x1408442B0 (sub_1408442B0.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_14076BDD4 @ 0x14076BDD4 (sub_14076BDD4.c)
 */

_QWORD *__fastcall sub_14076BD4C(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdi
  void *v4; // rcx
  _QWORD *v5; // rbx

  result = (_QWORD *)sub_14076BDD4(a1);
  if ( (_BYTE)result )
  {
    if ( v2 )
    {
      result = *(_QWORD **)(v2 + 312);
      v3 = result[10];
      if ( v3 )
      {
        v4 = *(void **)(v3 + 48);
        if ( v4 )
        {
          v5 = (_QWORD *)(v3 + 72);
          if ( (_QWORD *)*v5 == v5 )
          {
            ObfReferenceObjectWithTag(v4, 0x44706E50u);
            ++*(_DWORD *)(v3 + 88);
            result = (_QWORD *)qword_140C46A88;
            if ( *(__int64 **)qword_140C46A88 != &qword_140C46A80 )
              __fastfail(3u);
            *v5 = &qword_140C46A80;
            *(_QWORD *)(v3 + 80) = result;
            *result = v5;
            qword_140C46A88 = v3 + 72;
          }
        }
      }
    }
  }
  return result;
}
