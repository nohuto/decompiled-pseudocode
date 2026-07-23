/*
 * XREFs of _strset_s @ 0x1403E6A80
 * Callers:
 *     <none>
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

errno_t __cdecl strset_s(char *a1, size_t DstSize, int Value)
{
  char *v3; // rax

  if ( !a1 || !DstSize )
    goto LABEL_8;
  v3 = a1;
  if ( *a1 )
  {
    do
    {
      if ( !--DstSize )
        break;
      *v3++ = Value;
    }
    while ( *v3 );
    if ( !DstSize )
    {
      *a1 = 0;
LABEL_8:
      _misaligned_access();
      return 22;
    }
  }
  return 0;
}
