/*
 * XREFs of sub_1409C0550 @ 0x1409C0550
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140972818 @ 0x140972818 (sub_140972818.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 *     sub_14097638C @ 0x14097638C (sub_14097638C.c)
 *     sub_140976880 @ 0x140976880 (sub_140976880.c)
 *     sub_1409C0580 @ 0x1409C0580 (sub_1409C0580.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1409C0550(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  if ( a1[4] && (v1 = a1[3], (v2 = *(unsigned int *)((char *)a1 + v1)) != 0) && v2 + 32 <= (unsigned __int64)a1[1] )
    return (char *)a1 + v2;
  else
    return 0LL;
}
