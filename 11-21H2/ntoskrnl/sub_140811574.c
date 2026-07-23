/*
 * XREFs of sub_140811574 @ 0x140811574
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_1406E3A88 @ 0x1406E3A88 (sub_1406E3A88.c)
 *     sub_14080BEDC @ 0x14080BEDC (sub_14080BEDC.c)
 */

__int64 __fastcall sub_140811574(unsigned int **a1)
{
  unsigned int *v1; // rax
  unsigned int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *a1;
  v5 = 0;
  v3 = *v1;
  while ( (--v3 & 0x80000000) == 0 )
  {
    sub_1406E3A88(*a1, v3, &v6, &v5, 0LL);
    if ( !v5 )
      sub_14080BEDC(*a1, v3);
  }
  return 0LL;
}
