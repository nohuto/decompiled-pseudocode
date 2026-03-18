/*
 * XREFs of ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059B88
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C000BCF0 (NtDCompositionBeginFrame.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     DCompositionSessionUninitialize @ 0x1C0059A70 (DCompositionSessionUninitialize.c)
 *     NtDCompositionConfirmFrame @ 0x1C00812D0 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0087240 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0089820 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C008A970 (NtDCompositionGetFrameSurfaceUpdates.c)
 * Callees:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0059BAC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::`scalar deleting destructor'(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection::~CConnection(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      this);
  return this;
}
