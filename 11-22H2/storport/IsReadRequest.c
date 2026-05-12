/*
 * XREFs of IsReadRequest @ 0x1C0015148
 * Callers:
 *     IsReadWriteRequest @ 0x1C00150E4 (IsReadWriteRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C0067A7C (StorEtwIORequestDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsReadRequest(int a1, char a2)
{
  unsigned int v2; // r8d
  bool v4; // zf

  v2 = 0;
  if ( a1 )
    return 0LL;
  if ( ((a2 - 8) & 0x5F) != 0 )
  {
    v4 = a2 == -120;
LABEL_5:
    LOBYTE(v2) = v4;
    return v2;
  }
  v4 = a2 == -120;
  if ( a2 == -120 )
    goto LABEL_5;
  return 1LL;
}
