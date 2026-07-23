/*
 * XREFs of sub_140508E38 @ 0x140508E38
 * Callers:
 *     HalRegisterDynamicProcessor @ 0x14050A770 (HalRegisterDynamicProcessor.c)
 * Callees:
 *     sub_14036FA84 @ 0x14036FA84 (sub_14036FA84.c)
 */

__int64 sub_140508E38()
{
  unsigned int v0; // r8d
  int v1; // r11d
  int v3; // r9d
  int v4; // edx
  ULONG_PTR i; // r8

  if ( (unsigned int)sub_14036FA84() != 1 )
    return 3221225473LL;
  if ( !byte_140D011A0 && !byte_140C4ADB4 && (unsigned int)dword_140C54A90 > dword_140C0C694 )
    return 3221225496LL;
  if ( dword_140C4E21C > v0 )
    return 3221225473LL;
  if ( dword_140C4E21C >= v0 )
  {
    v3 = 0;
    v4 = ~(*((_DWORD *)KeGetCurrentPrcb() + 39) * *((_DWORD *)KeGetCurrentPrcb() + 38) - 1);
    if ( (_DWORD)dword_140C54A90 )
    {
      for ( i = qword_140C4E210 + 8; !*(_BYTE *)(i + 5) || (*(_DWORD *)i & v4) != (v1 & v4); i += 64LL )
      {
        if ( ++v3 >= (unsigned int)dword_140C54A90 )
          return 3221225473LL;
      }
      return 0LL;
    }
    return 3221225473LL;
  }
  return 0LL;
}
