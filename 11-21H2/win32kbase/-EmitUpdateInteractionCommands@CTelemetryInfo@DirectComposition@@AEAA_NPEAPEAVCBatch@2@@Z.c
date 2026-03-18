/*
 * XREFs of ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00910B8
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v2; // rbx
  bool v4; // zf
  char *v6; // rdx
  __int64 v7; // rax
  char *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (char *)this + 16;
  while ( 1 )
  {
    v4 = *(_QWORD *)v2 == (_QWORD)v2;
    if ( *(char **)v2 == v2 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0xE4uLL, &v9) )
      return *(_QWORD *)v2 == (_QWORD)v2;
    v6 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v2 = v7;
    *(_QWORD *)(v7 + 8) = v2;
    v8 = (char *)v9;
    *(_DWORD *)v9 = 228;
    *((_DWORD *)v8 + 1) = 287;
    *(_OWORD *)(v8 + 12) = *((_OWORD *)v6 + 1);
    *(_OWORD *)(v8 + 28) = *((_OWORD *)v6 + 2);
    *(_OWORD *)(v8 + 44) = *((_OWORD *)v6 + 3);
    *(_OWORD *)(v8 + 60) = *((_OWORD *)v6 + 4);
    *(_OWORD *)(v8 + 76) = *((_OWORD *)v6 + 5);
    *(_OWORD *)(v8 + 92) = *((_OWORD *)v6 + 6);
    *(_OWORD *)(v8 + 108) = *((_OWORD *)v6 + 7);
    *(_OWORD *)(v8 + 124) = *((_OWORD *)v6 + 8);
    *(_OWORD *)(v8 + 140) = *((_OWORD *)v6 + 9);
    *(_OWORD *)(v8 + 156) = *((_OWORD *)v6 + 10);
    *(_OWORD *)(v8 + 172) = *((_OWORD *)v6 + 11);
    *(_OWORD *)(v8 + 188) = *((_OWORD *)v6 + 12);
    *(_OWORD *)(v8 + 204) = *((_OWORD *)v6 + 13);
    *(_QWORD *)(v8 + 220) = *((_QWORD *)v6 + 28);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
  }
  return v4;
}
