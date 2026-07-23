/*
 * XREFs of sub_140224E64 @ 0x140224E64
 * Callers:
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     <none>
 */

__int64 sub_140224E64()
{
  unsigned int v0; // ecx
  __int64 result; // rax

  v0 = dword_140CE2048;
  result = 0LL;
  if ( (unsigned int)dword_140CE2048 > 0x64 )
  {
    v0 = 100;
    return 0x64 / v0;
  }
  if ( dword_140CE2048 )
    return 0x64 / v0;
  return result;
}
