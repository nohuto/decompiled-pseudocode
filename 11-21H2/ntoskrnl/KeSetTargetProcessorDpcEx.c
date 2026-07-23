/*
 * XREFs of KeSetTargetProcessorDpcEx @ 0x14025ACA0
 * Callers:
 *     sub_1403AED64 @ 0x1403AED64 (sub_1403AED64.c)
 *     sub_1403D2700 @ 0x1403D2700 (sub_1403D2700.c)
 *     KeSetTargetProcessorDpc @ 0x14056F980 (KeSetTargetProcessorDpc.c)
 *     sub_14057C248 @ 0x14057C248 (sub_14057C248.c)
 *     sub_140645DC0 @ 0x140645DC0 (sub_140645DC0.c)
 *     sub_140A5B2F8 @ 0x140A5B2F8 (sub_140A5B2F8.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 */

NTSTATUS __stdcall KeSetTargetProcessorDpcEx(PKDPC Dpc, PPROCESSOR_NUMBER ProcNumber)
{
  ULONG ProcessorIndexFromNumber; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
    return -1073741811;
  if ( !Dpc->DpcData )
    Dpc->Number = ProcessorIndexFromNumber + 2048;
  return 0;
}
