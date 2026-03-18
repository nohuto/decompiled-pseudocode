/*
 * XREFs of ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0091024
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v2; // rbx
  bool v4; // zf
  char *v6; // rdx
  __int64 v7; // rax
  char *v8; // rcx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (char *)this + 32;
  while ( 1 )
  {
    v4 = *(_QWORD *)v2 == (_QWORD)v2;
    if ( *(char **)v2 == v2 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
      return *(_QWORD *)v2 == (_QWORD)v2;
    v6 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v2 = v7;
    *(_QWORD *)(v7 + 8) = v2;
    v8 = (char *)v9;
    *(_DWORD *)v9 = 20;
    *((_DWORD *)v8 + 1) = 286;
    *(_QWORD *)(v8 + 12) = *((_QWORD *)v6 + 2);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v6);
  }
  return v4;
}
