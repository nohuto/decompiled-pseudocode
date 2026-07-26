/*
 * XREFs of datapathVerifierReportProblem @ 0x1C006D1B0
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D410 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C006D4FC (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D720 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C006D80C (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     validateMemoryPages @ 0x1C006D910 (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1C006D9A0 (verifySingleMdl.c)
 *     verifySingleNb @ 0x1C006D9FC (verifySingleNb.c)
 *     verifySingleNbl @ 0x1C006DB40 (verifySingleNbl.c)
 *     verifySingleTxNbl @ 0x1C006DC28 (verifySingleTxNbl.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
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
    if ( !_InterlockedCompareExchange(&dword_1C00EE7A8, 1, 0) )
    {
      qword_1C00EE808 = BugCheckParameter4;
      qword_1C00EE7F0 = 50LL;
      qword_1C00EE7F8 = v5;
      qword_1C00EE800 = BugCheckParameter3;
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
