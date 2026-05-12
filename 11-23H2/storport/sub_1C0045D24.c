/*
 * XREFs of sub_1C0045D24 @ 0x1C0045D24
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E318 @ 0x1C000E318 (sub_1C000E318.c)
 *     sub_1C003B630 @ 0x1C003B630 (sub_1C003B630.c)
 */

__int64 __fastcall sub_1C0045D24(__int64 a1, ULONG a2, _DWORD *a3)
{
  NTSTATUS ProcessorNumberFromIndex; // eax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  ProcNumber = 0;
  if ( a2 == -1 )
    return 3238002694LL;
  ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(a2, &ProcNumber);
  if ( ProcessorNumberFromIndex >= 0 )
    return sub_1C003B630(a1, &ProcNumber.Group, a3);
  else
    return sub_1C000E318(ProcessorNumberFromIndex);
}
