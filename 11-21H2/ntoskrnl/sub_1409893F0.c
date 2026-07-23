/*
 * XREFs of sub_1409893F0 @ 0x1409893F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14082975C @ 0x14082975C (sub_14082975C.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_1408565CC @ 0x1408565CC (sub_1408565CC.c)
 *     sub_140865194 @ 0x140865194 (sub_140865194.c)
 */

void __fastcall sub_1409893F0(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    if ( !dword_140D050B4 && dword_140D05230 == 1 )
      dword_140D050B4 = !sub_140865194();
    sub_140849690(0);
    sub_1408565CC();
    sub_14082975C();
  }
}
