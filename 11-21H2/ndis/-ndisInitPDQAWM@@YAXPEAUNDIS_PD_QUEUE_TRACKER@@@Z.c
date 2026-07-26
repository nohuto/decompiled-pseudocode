/*
 * XREFs of ?ndisInitPDQAWM@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C0127CA8
 * Callers:
 *     ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C0129474 (-ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAM.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisInitPDQAWM(char *DeferredContext)
{
  struct _KDPC *v1; // rdi
  __m128i v3; // xmm0
  bool v4; // zf
  unsigned __int64 v5; // r8
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  v1 = (struct _KDPC *)(DeferredContext + 88);
  DeferredContext[60] = 1;
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)ndisPdAwmDpcRoutine, DeferredContext);
  KeSetImportanceDpc(v1, MediumHighImportance);
  v3 = *(__m128i *)(DeferredContext + 168);
  ProcNumber.Group = _mm_extract_epi16(v3, 4);
  v4 = !_BitScanForward64(&v5, v3.m128i_u64[0]);
  ProcNumber.Number = !v4 ? v5 : 0;
  KeSetTargetProcessorDpcEx(v1, &ProcNumber);
}
