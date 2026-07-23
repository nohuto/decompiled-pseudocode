/*
 * XREFs of sub_140A9D0D0 @ 0x140A9D0D0
 * Callers:
 *     sub_140A9C958 @ 0x140A9C958 (sub_140A9C958.c)
 *     sub_140A9D00C @ 0x140A9D00C (sub_140A9D00C.c)
 * Callees:
 *     sub_140A9CF88 @ 0x140A9CF88 (sub_140A9CF88.c)
 */

__int64 __fastcall sub_140A9D0D0(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // edx

  v1 = 0;
  if ( a1 )
  {
    if ( a1 > 0xEA60 )
      return (unsigned int)-1073741811;
    v2 = (a1 + 999) / 0x3E8;
  }
  else
  {
    v2 = 0;
  }
  dword_140C1B25C = v2;
  if ( (_QWORD)xmmword_140C1B2B0 )
    sub_140A9CF88(dword_140C29FC0);
  return v1;
}
