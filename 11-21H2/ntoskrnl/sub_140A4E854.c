/*
 * XREFs of sub_140A4E854 @ 0x140A4E854
 * Callers:
 *     sub_140A4F19C @ 0x140A4F19C (sub_140A4F19C.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void sub_140A4E854()
{
  __int64 i; // rbx
  void *v1; // r8

  PoSetHiberRange(0LL, 0x10000u, &byte_140C09804, 0LL, 0x626C644Bu);
  if ( !byte_140C09804 )
  {
    KdSetHiberRange(&xmmword_140C31E60);
    for ( i = 0LL; (unsigned int)i < (unsigned int)dword_140D06884; i = (unsigned int)(i + 1) )
    {
      v1 = (void *)qword_140C40520[i];
      if ( v1 )
        PoSetHiberRange(0LL, 0x10000u, v1, 0x1000uLL, 0x626C644Bu);
    }
  }
}
