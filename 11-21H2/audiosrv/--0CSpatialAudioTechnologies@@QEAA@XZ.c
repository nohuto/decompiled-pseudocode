/*
 * XREFs of ??0CSpatialAudioTechnologies@@QEAA@XZ @ 0x180042A9C
 * Callers:
 *     _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180001B50 (_dynamic_initializer_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 */

CSpatialAudioTechnologies *__fastcall CSpatialAudioTechnologies::CSpatialAudioTechnologies(
        CSpatialAudioTechnologies *this)
{
  g_ListOfSpatialTech = 0;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  dword_1801C2E08 = 0;
  memset_0(&unk_1801C2D98, 0, 0x48uLL);
  return (CSpatialAudioTechnologies *)&g_ListOfSpatialTech;
}
