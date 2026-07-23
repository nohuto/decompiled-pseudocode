/*
 * XREFs of KeGetProcessorNumberFromIndex @ 0x1402949F0
 * Callers:
 *     sub_1403861B4 @ 0x1403861B4 (sub_1403861B4.c)
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     sub_1403B8D0C @ 0x1403B8D0C (sub_1403B8D0C.c)
 *     IoGetAffinityInterrupt @ 0x1403DEAB0 (IoGetAffinityInterrupt.c)
 *     sub_14057C2F0 @ 0x14057C2F0 (sub_14057C2F0.c)
 *     sub_1407028B8 @ 0x1407028B8 (sub_1407028B8.c)
 *     sub_140951B40 @ 0x140951B40 (sub_140951B40.c)
 *     sub_1409EB100 @ 0x1409EB100 (sub_1409EB100.c)
 *     sub_140A687F0 @ 0x140A687F0 (sub_140A687F0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeGetProcessorNumberFromIndex(ULONG ProcIndex, PPROCESSOR_NUMBER ProcNumber)
{
  unsigned int v3; // ecx

  if ( !ProcIndex )
  {
    *ProcNumber = 0;
    return 0;
  }
  if ( ProcIndex < 0x800 )
  {
    v3 = dword_140D0E5E0[ProcIndex];
    if ( v3 )
    {
      ProcNumber->Reserved = 0;
      ProcNumber->Group = v3 >> 6;
      ProcNumber->Number = v3 & 0x3F;
      return 0;
    }
  }
  return -1073741811;
}
