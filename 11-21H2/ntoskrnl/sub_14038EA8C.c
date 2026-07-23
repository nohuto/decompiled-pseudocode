/*
 * XREFs of sub_14038EA8C @ 0x14038EA8C
 * Callers:
 *     sub_14038E94C @ 0x14038E94C (sub_14038E94C.c)
 * Callees:
 *     <none>
 */

__int64 sub_14038EA8C()
{
  unsigned int LockArray_high; // r8d

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  if ( (unsigned int)dword_140D06884 >= 0x40 )
  {
    return LockArray_high & 0x3F;
  }
  else if ( 0x40 / (unsigned int)dword_140D06884 > 1 )
  {
    LockArray_high *= 0x40 / (unsigned int)dword_140D06884;
  }
  return LockArray_high;
}
