/*
 * XREFs of MapServerToClientPfn @ 0x1C025AE20
 * Callers:
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     _GetClassInfoEx @ 0x1C007F338 (_GetClassInfoEx.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapServerToClientPfn(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 666;
  while ( a1 != *(_QWORD *)(gpsi + 8LL * ((v2 & 0xFFFF2FFF) - 666) + 272) )
  {
    if ( (int)++v2 > 672 )
      return 0LL;
  }
  if ( a2 )
    return *(_QWORD *)(gpsi + 8LL * v2 - 4936);
  else
    return *(_QWORD *)(gpsi + 8LL * v2 - 4744);
}
