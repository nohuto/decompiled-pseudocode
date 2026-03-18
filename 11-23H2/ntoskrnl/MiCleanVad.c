/*
 * XREFs of MiCleanVad @ 0x14071F390
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140274A90 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140275410 (MiVadDeleted.c)
 *     MiWaitForVadDeletion @ 0x140660C58 (MiWaitForVadDeletion.c)
 *     MiDeleteVad @ 0x1406FA420 (MiDeleteVad.c)
 *     MiUnmapVad @ 0x14071F2A4 (MiUnmapVad.c)
 */

__int64 __fastcall MiCleanVad(char *P)
{
  unsigned int v2; // edi
  unsigned int *v3; // rcx

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) )
  {
    MiWaitForVadDeletion((__int64)v3);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else if ( (v3[12] & 0x200000) != 0 )
  {
    MiDeleteVad(v3, 0LL, 0);
  }
  else
  {
    MiUnmapVad(v3, 0LL, 0);
  }
  return v2;
}
