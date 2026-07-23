/*
 * XREFs of sub_14065E480 @ 0x14065E480
 * Callers:
 *     sub_14065DF64 @ 0x14065DF64 (sub_14065DF64.c)
 *     sub_140923D00 @ 0x140923D00 (sub_140923D00.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14065E380 @ 0x14065E380 (sub_14065E380.c)
 *     sub_14065E548 @ 0x14065E548 (sub_14065E548.c)
 *     sub_14065E5A4 @ 0x14065E5A4 (sub_14065E5A4.c)
 */

__int64 __fastcall sub_14065E480(__int64 a1, unsigned int **a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  ULONG_PTR v6; // rbp
  unsigned int *v7; // rax
  unsigned int *v8; // rdi
  int v9; // ebx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  v7 = (unsigned int *)Allocate(PagedPool, 0x14uLL, 0x77554D43u, a4);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    v7[2] = 0;
    ++*v7;
    v7[3] = -1;
    v7[4] = -1;
    v9 = sub_14065E5A4(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
    if ( v9 < 0 || (v9 = sub_14065E548(v8, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL), *(_QWORD *)(a1 + 56)), v9 < 0) )
    {
      sub_14065E380(v6, v8);
    }
    else
    {
      v9 = 0;
      *a2 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
