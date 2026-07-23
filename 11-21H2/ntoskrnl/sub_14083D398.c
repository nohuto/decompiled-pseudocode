/*
 * XREFs of sub_14083D398 @ 0x14083D398
 * Callers:
 *     sub_140540010 @ 0x140540010 (sub_140540010.c)
 *     sub_14083D244 @ 0x14083D244 (sub_14083D244.c)
 *     sub_140B190F0 @ 0x140B190F0 (sub_140B190F0.c)
 * Callees:
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_1403C84E4 @ 0x1403C84E4 (sub_1403C84E4.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_14083D398()
{
  size_t *v0; // rax
  size_t *v1; // r14
  size_t v2; // rsi
  unsigned __int64 *v3; // rbx
  size_t i; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_140C53438, 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, sub_14083D770);
    for ( i = 0LL; i < v2; ++i )
    {
      v5 = sub_140313C70(*v3);
      LODWORD(v8) = v5;
      if ( i == v2 - 1 || v7 + 4096 != v3[1] )
      {
        if ( v6 == 1 )
        {
          v6 = 1LL;
          v9 = v5;
        }
        else
        {
          v8 = v5 - 8 * v6;
          v9 = v8 + 8;
        }
        sub_1403C84E4(v9, v6, v8);
      }
      ++v3;
    }
    ExFreePoolWithTag(v1, 0);
    qword_140C53438 = 0LL;
  }
}
