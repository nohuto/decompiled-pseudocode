/*
 * XREFs of sub_14085ED9C @ 0x14085ED9C
 * Callers:
 *     sub_1406EA1C8 @ 0x1406EA1C8 (sub_1406EA1C8.c)
 * Callees:
 *     sub_1406D58E0 @ 0x1406D58E0 (sub_1406D58E0.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_14085EDEC @ 0x14085EDEC (sub_14085EDEC.c)
 */

void sub_14085ED9C()
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *v1; // rax
  struct _EX_RUNDOWN_REF *v2; // rbx

  if ( byte_140C097BC != 2 )
  {
    byte_140C097BC = 2;
    for ( i = 0LL; ; i = v2 )
    {
      v1 = sub_14071B350(i);
      v2 = (struct _EX_RUNDOWN_REF *)v1;
      if ( !v1 )
        break;
      if ( (v1[20] & 0x10) == 0 )
        sub_1406D58E0((__int64)v1);
    }
    sub_14085EDEC();
  }
}
