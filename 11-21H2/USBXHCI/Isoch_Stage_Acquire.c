/*
 * XREFs of Isoch_Stage_Acquire @ 0x1C0042E98
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0007C30 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     StageQueue_Acquire @ 0x1C000ED90 (StageQueue_Acquire.c)
 *     Isoch_Stage_Initialize @ 0x1C0042F90 (Isoch_Stage_Initialize.c)
 */

unsigned __int8 *__fastcall Isoch_Stage_Acquire(__int64 a1)
{
  unsigned __int8 *v1; // rdx
  __int64 v2; // r11

  v1 = StageQueue_Acquire((unsigned __int8 *)(a1 + 128));
  if ( v1 )
    Isoch_Stage_Initialize(v2, v1);
  return v1;
}
