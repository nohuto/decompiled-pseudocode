/*
 * XREFs of ?Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011838
 * Callers:
 *     ?NewNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAPEAVCNode@12@AEBQEAVCConnectionNode@@PEAV312@1@Z @ 0x14000A488 (-NewNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAPEAVCNode@12@AEBQEA.c)
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000C580 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?InnerInsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@0I@Z @ 0x14000FCC0 (-InnerInsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConne.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x14002FC98 (--_U@YAPEAX_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14006E350 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14006E5CC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

struct ATLRT::CAtlPlex *__fastcall ATLRT::CAtlPlex::Create(
        struct ATLRT::CAtlPlex **a1,
        unsigned __int64 a2,
        struct ATLRT::CAtlPlex *a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  void *v10; // rdi
  struct ATLRT::CAtlPlex *v11; // rcx
  struct ATLRT::CAtlPlex *result; // rax
  unsigned __int64 v13; // rdx
  struct ATLRT::CAtlPlex *v14; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v14 = a3;
  v4 = 24 * a2;
  if ( !is_mul_ok(a2, 0x18uLL) )
    return 0LL;
  v5 = v4 + 8;
  if ( v4 + 8 < v4 )
    return 0LL;
  v6 = -InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, (LPVOID *)&v15);
  v10 = (void *)(v15 & -(__int64)(v6 != 0));
  if ( g_bSkipRTHeap )
  {
    v11 = (struct ATLRT::CAtlPlex *)operator new[](v5);
  }
  else
  {
    v14 = 0LL;
    if ( v10 && (unsigned int)RtlAllocateMemoryBlockLookaside(v15 & -(__int64)(v6 != 0), v5, &v14) == -1073741670 )
    {
      v13 = 0x100000LL;
      if ( v5 > 0x100000 )
        v13 = (v5 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
      AERTAddMemoryToHeap(v10, v13);
      RtlAllocateMemoryBlockLookaside(v10, v5, &v14);
    }
    if ( (byte_1400C1841 & 4) != 0 )
      McTemplateU0pqpqqqqqq_EventWriteTransfer(v8, v7, v9, 6, (char)v10, v5, 0, 0);
    v11 = v14;
  }
  if ( !v11 )
    return 0LL;
  *(_QWORD *)v11 = *a1;
  result = v11;
  *a1 = v11;
  return result;
}
