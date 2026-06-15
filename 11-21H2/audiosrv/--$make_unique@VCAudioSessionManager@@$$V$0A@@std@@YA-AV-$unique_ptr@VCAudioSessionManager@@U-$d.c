/*
 * XREFs of ??$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@0@XZ @ 0x18005D88C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x180046714 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??0CAudioSessionManager@@QEAA@XZ @ 0x18004ADD8 (--0CAudioSessionManager@@QEAA@XZ.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSessionManager **__fastcall std::make_unique<CAudioSessionManager,,0>(CAudioSessionManager **a1)
{
  void *v2; // rdi
  CAudioSessionManager *v3; // rax

  v2 = operator new(0x120uLL);
  v3 = 0LL;
  if ( v2 )
  {
    memset_0(v2, 0, 0x120uLL);
    v3 = CAudioSessionManager::CAudioSessionManager((CAudioSessionManager *)v2);
  }
  *a1 = v3;
  return a1;
}
