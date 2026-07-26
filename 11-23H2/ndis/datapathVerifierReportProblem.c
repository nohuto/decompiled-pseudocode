/*
 * XREFs of datapathVerifierReportProblem @ 0x1C0072570
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C00727D0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C00728BC (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072AE0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0072BCC (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     validateMemoryPages @ 0x1C0072CD0 (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1C0072D60 (verifySingleMdl.c)
 *     verifySingleNb @ 0x1C0072DBC (verifySingleNb.c)
 *     verifySingleNbl @ 0x1C0072F00 (verifySingleNbl.c)
 *     verifySingleTxNbl @ 0x1C0072FE0 (verifySingleTxNbl.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall datapathVerifierReportProblem(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v5; // rsi
  ULONG v6; // [rsp+78h] [rbp+20h] BYREF

  v5 = (unsigned int)BugCheckParameter2;
  if ( ndisDatapathVerifierMode == 2 || (v6 = 0, MmIsVerifierEnabled(&v6) < 0) || (v6 & 0x400000) == 0 )
    ndisBugCheckEx(0x32uLL, v5, BugCheckParameter3, BugCheckParameter4);
  if ( KeGetCurrentIrql() )
  {
    if ( !_InterlockedCompareExchange(&dword_1C00F7870, 1, 0) )
    {
      qword_1C00F78D8 = BugCheckParameter4;
      qword_1C00F78C0 = 50LL;
      qword_1C00F78C8 = v5;
      qword_1C00F78D0 = BugCheckParameter3;
      RtlCaptureStackBackTrace(3u, 8u, &BackTrace, 0LL);
      WorkItem.Parameter = 0LL;
      WorkItem.List.Flink = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))datapathVerifierReportProblemAsync;
      ExQueueWorkItem(&WorkItem, NormalWorkQueue);
    }
  }
  else
  {
    DbgkWerCaptureLiveKernelDump(
      L"NDIS",
      350LL,
      50LL,
      (unsigned int)v5,
      BugCheckParameter3,
      BugCheckParameter4,
      0LL,
      0LL,
      0);
  }
}
