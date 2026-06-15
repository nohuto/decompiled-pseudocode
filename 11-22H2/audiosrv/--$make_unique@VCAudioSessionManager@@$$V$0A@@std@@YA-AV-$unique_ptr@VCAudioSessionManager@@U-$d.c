/*
 * XREFs of ??$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@0@XZ @ 0x1800277E8
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180027660 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x18002786C (--0CAudioSessionManager@@QEAA@XZ.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSessionManager **__fastcall std::make_unique<CAudioSessionManager,,0>(CAudioSessionManager **a1)
{
  CAudioSessionManager *v2; // rdi
  HANDLE ProcessHeap; // rax
  CAudioSessionManager *v4; // rax
  CAudioSessionManager *v5; // rsi

  v2 = 0LL;
  ProcessHeap = GetProcessHeap();
  v4 = (CAudioSessionManager *)HeapAlloc(ProcessHeap, 0, 0x130uLL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x130uLL);
    v2 = CAudioSessionManager::CAudioSessionManager(v5);
  }
  *a1 = v2;
  return a1;
}
