/*
 * XREFs of ??0CSpatialAudioTechnologies@@QEAA@XZ @ 0x1800557E4
 * Callers:
 *     _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180001700 (_dynamic_initializer_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     memset_0 @ 0x180067A64 (memset_0.c)
 */

CSpatialAudioTechnologies *__fastcall CSpatialAudioTechnologies::CSpatialAudioTechnologies(
        CSpatialAudioTechnologies *this)
{
  g_ListOfSpatialTech[0] = 0;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  dword_1801D0128 = 0;
  memset_0(qword_1801D00B8, 0, sizeof(qword_1801D00B8));
  return (CSpatialAudioTechnologies *)g_ListOfSpatialTech;
}
