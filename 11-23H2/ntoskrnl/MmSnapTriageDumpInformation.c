/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140630CFC
 * Callers:
 *     IoWriteCrashDump @ 0x1405519C0 (IoWriteCrashDump.c)
 *     IopCollectTriageDumpData @ 0x1405529B0 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140554558 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140340618 (HvlQueryVsmConnection.c)
 *     IoAddTriageDumpDataBlock @ 0x14038849C (IoAddTriageDumpDataBlock.c)
 *     MiAddTriageDumpPtes @ 0x14062FDB4 (MiAddTriageDumpPtes.c)
 */

char __fastcall MmSnapTriageDumpInformation(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  dword_140C1315C = 0;
  qword_140C13178 = 0LL;
  *(_QWORD *)&MiTriageDumpData = qword_140C6CE80;
  dword_140C13148 = dword_140C67F68;
  dword_140C1314C = dword_140C67F64;
  dword_140C13150 = dword_140C67F90;
  dword_140C13154 = dword_140C67F94;
  qword_140C13160 = KeFeatureBits;
  xmmword_140C13168 = 0LL;
  dword_140C13158 = dword_140C67F48 + dword_140C67F4C + dword_140C67F50;
  LODWORD(xmmword_140C13168) = MEMORY[0xFFFFF78000000240];
  *(_QWORD *)((char *)&xmmword_140C13168 + 4) = MiFlags;
  HvlQueryVsmConnection(&qword_140C13178);
  v4 = 4LL;
  do
  {
    MiAddTriageDumpPtes(*a2++);
    --v4;
  }
  while ( v4 );
  v5 = &IopRunTimeContextOffsets;
  v6 = 15LL;
  do
  {
    MiAddTriageDumpPtes(*(_QWORD *)(*(unsigned __int16 *)v5 + a1));
    v5 += 2;
    --v6;
  }
  while ( v6 );
  return IoAddTriageDumpDataBlock((ULONG)&MiTriageDumpData, (PVOID)0x40);
}
