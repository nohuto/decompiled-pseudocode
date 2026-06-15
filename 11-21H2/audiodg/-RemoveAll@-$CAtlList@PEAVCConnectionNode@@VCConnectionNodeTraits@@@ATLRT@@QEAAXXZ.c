/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000BCC0
 * Callers:
 *     ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z @ 0x140008688 (-FreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z.c)
 *     ??1?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAA@XZ @ 0x14000B150 (--1-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAA@XZ.c)
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000C3DC (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000C580 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000F460 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x140023170 (-ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z.c)
 *     ??1CProcessingData@@QEAA@XZ @ 0x14002CAC0 (--1CProcessingData@@QEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z @ 0x140008688 (-FreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x14002FC80 (--_V@YAXPEAX@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll(__int64 *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbp
  BOOL inited; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  unsigned __int64 v8; // rsi
  __int64 *v9; // rdx
  LPVOID Context; // [rsp+70h] [rbp+8h] BYREF

  while ( a1[2] )
  {
    v9 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v9;
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::FreeNode((__int64)a1, v9);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v2 = (_QWORD *)a1[3];
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      inited = InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context);
      v8 = (unsigned __int64)Context & -(__int64)inited;
      if ( g_bSkipRTHeap )
      {
        operator delete[](v2);
      }
      else
      {
        if ( v8 )
          RtlFreeMemoryBlockLookaside(v8, v2);
        if ( (byte_1400C1841 & 4) != 0 )
          McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, 6, v8, 0, 0, 0);
      }
      v2 = v3;
    }
    while ( v3 );
    a1[3] = 0LL;
  }
}
