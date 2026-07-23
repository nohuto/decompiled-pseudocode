/*
 * XREFs of sub_140A74CDC @ 0x140A74CDC
 * Callers:
 *     sub_140565378 @ 0x140565378 (sub_140565378.c)
 * Callees:
 *     sub_140A749D0 @ 0x140A749D0 (sub_140A749D0.c)
 */

char sub_140A74CDC()
{
  unsigned int i; // ebx
  __int64 v1; // rcx
  char result; // al

  for ( i = 1; i <= 0x20; ++i )
  {
    v1 = i - 1;
    result = *((_DWORD *)&unk_140C33EE0 + 10 * v1) & 5;
    if ( result == 1 )
    {
      *((_DWORD *)&unk_140C33EE0 + 10 * v1) |= 4u;
      result = sub_140A749D0(v1);
    }
  }
  return result;
}
