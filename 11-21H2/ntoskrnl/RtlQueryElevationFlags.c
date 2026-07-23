/*
 * XREFs of RtlQueryElevationFlags @ 0x1406CB1F0
 * Callers:
 *     sub_1407AFBE0 @ 0x1407AFBE0 (sub_1407AFBE0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryElevationFlags(PRTL_ELEVATION_FLAGS Flags)
{
  ULONG v1; // edx

  v1 = 0;
  Flags->Flags = 0;
  if ( (MEMORY[0xFFFFF780000002F0] & 2) != 0 )
  {
    v1 = 1;
    Flags->Flags = 1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 4) != 0 )
  {
    v1 |= 2u;
    Flags->Flags = v1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 8) != 0 )
    Flags->Flags = v1 | 4;
  return 0;
}
