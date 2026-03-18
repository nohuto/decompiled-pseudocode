/*
 * XREFs of CmpCleanupLightWeightPrepare @ 0x140A1C2F4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140A1C46C (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A1C754 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpCleanupLightWeightUoWData @ 0x140A1C344 (CmpCleanupLightWeightUoWData.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

void __fastcall CmpCleanupLightWeightPrepare(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 NextElement; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v7 = 0LL;
    v3 = a1 + 16;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v3, &v7, 0LL);
      if ( !NextElement )
        break;
      CmpCleanupLightWeightUoWData(NextElement, v6, a3);
    }
  }
}
