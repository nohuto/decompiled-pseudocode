/*
 * XREFs of StorpGetActiveNodeCount @ 0x1C001898C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetActiveNodeCount(__int64 a1, _DWORD *a2)
{
  USHORT HighestNodeNumber; // ax
  USHORT v4; // di
  USHORT v5; // bp
  unsigned __int16 v6; // si
  __int64 Count; // [rsp+40h] [rbp+8h] BYREF

  Count = a1;
  if ( !a2 )
    return 3238002694LL;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v4 = 0;
  *a2 = 0;
  v5 = HighestNodeNumber;
  v6 = 0;
  do
  {
    LOWORD(Count) = 0;
    KeQueryNodeActiveAffinity(v4, 0LL, (PUSHORT)&Count);
    if ( (_WORD)Count )
      ++v6;
    ++v4;
  }
  while ( v4 <= v5 );
  *a2 = v6;
  return 0LL;
}
