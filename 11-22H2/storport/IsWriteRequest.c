/*
 * XREFs of IsWriteRequest @ 0x1C0015118
 * Callers:
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     IsZonedWriteRequest @ 0x1C000F7D0 (IsZonedWriteRequest.c)
 *     IsReadWriteRequest @ 0x1C00150E4 (IsReadWriteRequest.c)
 *     StorEtwIORequestDispatch @ 0x1C0067A7C (StorEtwIORequestDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWriteRequest(int a1, char a2)
{
  unsigned int v2; // r8d
  bool v4; // zf

  v2 = 0;
  if ( a1 )
    return 0LL;
  if ( ((a2 - 10) & 0x5F) != 0 )
  {
    v4 = a2 == -118;
LABEL_5:
    LOBYTE(v2) = v4;
    return v2;
  }
  v4 = a2 == -118;
  if ( a2 == -118 )
    goto LABEL_5;
  return 1LL;
}
