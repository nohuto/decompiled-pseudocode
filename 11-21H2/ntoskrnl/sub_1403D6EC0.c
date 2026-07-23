/*
 * XREFs of sub_1403D6EC0 @ 0x1403D6EC0
 * Callers:
 *     sub_140854E78 @ 0x140854E78 (sub_140854E78.c)
 *     sub_14099D66C @ 0x14099D66C (sub_14099D66C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

_QWORD *__fastcall sub_1403D6EC0(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v1 = (_QWORD *)(a1 + 40);
  memmove((void *)(a1 + 40), &unk_140C1D088, 0x10B0uLL);
  memmove((void *)(a1 + 4312), &unk_140C1E138, 0x10B0uLL);
  v3 = 2LL;
  do
  {
    result = v1;
    v5 = 2LL;
    do
    {
      *result = 0LL;
      result += 534;
      --v5;
    }
    while ( v5 );
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}
