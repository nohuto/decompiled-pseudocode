/*
 * XREFs of sub_14057004C @ 0x14057004C
 * Callers:
 *     sub_140570220 @ 0x140570220 (sub_140570220.c)
 * Callees:
 *     <none>
 */

__int64 sub_14057004C()
{
  int v0; // r8d
  char v1; // r10
  unsigned int i; // r9d
  __int64 result; // rax

  __writemsr(0x570u, 0LL);
  v0 = dword_140D06964;
  if ( (dword_140D06964 & 2) != 0 )
    __writemsr(0x560u, 0LL);
  if ( (dword_140D06964 & 4) != 0 )
    __writemsr(0x561u, 0LL);
  __writemsr(0x571u, 0LL);
  if ( (dword_140D06964 & 0x10) != 0 )
    __writemsr(0x572u, 0LL);
  v1 = 0;
  for ( i = 1409; i < 0x589; i += 2 )
  {
    result = (unsigned __int8)(v1 + 5);
    if ( !_bittest(&v0, result) )
      break;
    result = 0LL;
    __writemsr(i - 1, 0LL);
    __writemsr(i, 0LL);
    ++v1;
  }
  return result;
}
