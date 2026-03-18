/*
 * XREFs of RIMIsRawInputActive @ 0x1C00DBE44
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0047820 (RIMDirectStartStopDeviceRead.c)
 *     rimOnPnpArrived @ 0x1C004A09C (rimOnPnpArrived.c)
 * Callees:
 *     RIMHidTLCActive @ 0x1C0199F40 (RIMHidTLCActive.c)
 */

__int64 __fastcall RIMIsRawInputActive(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 48) == 2 && (*(_DWORD *)(a1 + 184) & 0x20000) != 0 )
    return (unsigned int)RIMHidTLCActive(*(_QWORD *)(a1 + 464)) != 0;
  return v1;
}
