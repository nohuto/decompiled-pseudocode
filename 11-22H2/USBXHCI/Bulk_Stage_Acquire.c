/*
 * XREFs of Bulk_Stage_Acquire @ 0x1C001227C
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C001200C (Bulk_RetrieveNextStage.c)
 * Callees:
 *     StageQueue_Acquire @ 0x1C00122AC (StageQueue_Acquire.c)
 *     Bulk_Stage_Initialize @ 0x1C0012684 (Bulk_Stage_Initialize.c)
 */

__int64 __fastcall Bulk_Stage_Acquire(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r11

  v1 = StageQueue_Acquire(a1 + 128);
  if ( v1 )
    Bulk_Stage_Initialize(v2, v1);
  return v1;
}
