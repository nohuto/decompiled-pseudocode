/*
 * XREFs of sub_140B24668 @ 0x140B24668
 * Callers:
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     PsTlsAlloc @ 0x140852F80 (PsTlsAlloc.c)
 *     sub_140853200 @ 0x140853200 (sub_140853200.c)
 */

__int64 sub_140B24668()
{
  int v0; // ebx
  __int64 result; // rax
  char v2; // [rsp+30h] [rbp+8h] BYREF

  sub_140853200();
  v0 = 0;
  dword_140C5A580 = sub_140363220(0) & 7;
  if ( !dword_140C5A580 )
    return 0LL;
  while ( 1 )
  {
    result = PsTlsAlloc(0LL, 0, (__int64)&v2);
    if ( (int)result < 0 )
      break;
    if ( ++v0 >= (unsigned int)dword_140C5A580 )
      return 0LL;
  }
  dword_140C5A580 = v0;
  return result;
}
