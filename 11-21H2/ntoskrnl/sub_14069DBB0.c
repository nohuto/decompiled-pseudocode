/*
 * XREFs of sub_14069DBB0 @ 0x14069DBB0
 * Callers:
 *     sub_14069D480 @ 0x14069D480 (sub_14069D480.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14069DBB0(const void **a1, __int64 a2, void **a3)
{
  void *v5; // rcx

  *(_OWORD *)a2 = *(_OWORD *)a1;
  if ( a1[1] )
  {
    v5 = *a3;
    *(_QWORD *)(a2 + 8) = *a3;
    memmove(v5, a1[1], *(unsigned __int16 *)a1);
    memset(
      (char *)*a3 + *(unsigned __int16 *)a1,
      0,
      *((unsigned __int16 *)a1 + 1) - (unsigned __int64)*(unsigned __int16 *)a1);
    if ( *a3 )
      *a3 = (char *)*a3 + *((unsigned __int16 *)a1 + 1);
  }
  return 0LL;
}
