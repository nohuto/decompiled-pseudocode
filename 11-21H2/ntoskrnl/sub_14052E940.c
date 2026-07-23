/*
 * XREFs of sub_14052E940 @ 0x14052E940
 * Callers:
 *     sub_14052F89C @ 0x14052F89C (sub_14052F89C.c)
 *     sub_1405300A8 @ 0x1405300A8 (sub_1405300A8.c)
 *     sub_140A63CE0 @ 0x140A63CE0 (sub_140A63CE0.c)
 * Callees:
 *     sub_140537A78 @ 0x140537A78 (sub_140537A78.c)
 */

__int64 __fastcall sub_14052E940(__int64 a1, unsigned int *a2, unsigned __int64 *a3)
{
  unsigned int *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  if ( a2 && (v5 = (unsigned int *)sub_140537A78(a1, *a2)) != 0LL )
  {
    v6 = *((_QWORD *)v5 + 1);
    result = *v5;
    v8 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v8 = qword_140C49DA0;
    result = *(unsigned int *)(a1 + 260);
  }
  *a3 = v8 >> 12;
  return result;
}
