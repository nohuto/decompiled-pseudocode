/*
 * XREFs of KiDeferredReadyThread @ 0x1402BBA60
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x140204900 (KiSetThreadSchedulingGroup.c)
 *     KiQueueReadyThread @ 0x140234510 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x1402BB984 (KiFastReadyThread.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252760 (KiFlushSoftwareInterruptBatch.c)
 */

__int64 __fastcall KiDeferredReadyThread(__int64 a1, __int64 a2)
{
  char v2; // di
  _QWORD *v3; // rbx
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (_QWORD *)(a2 + 216);
  *(_QWORD *)(a2 + 216) = 0LL;
  v6 = 0LL;
  do
  {
    KiDeferredReadySingleThread(a1, (unsigned __int64)(v3 - 27), (__int64)&v6);
    v3 = v6;
    ++v2;
    if ( v6 )
      v6 = (_QWORD *)*v6;
    if ( (v2 & 0xF) == 0 )
      KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
  }
  while ( v3 );
  return KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
}
