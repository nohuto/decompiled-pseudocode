/*
 * XREFs of sub_1409314BC @ 0x1409314BC
 * Callers:
 *     sub_14080751C @ 0x14080751C (sub_14080751C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 */

__int64 sub_1409314BC()
{
  unsigned int v0; // ebx
  void *v1; // rax

  v0 = 0;
  if ( !qword_140C48970 )
  {
    v1 = (void *)sub_140829CBC(0x1000uLL, -1, 0LL, 0);
    qword_140C48970 = v1;
    if ( v1 )
      memset(v1, 0, 0x1000uLL);
    else
      return (unsigned int)-1073741670;
  }
  return v0;
}
