/*
 * XREFs of IsAdaptiveQueueDetachExempted @ 0x1C0006E7C
 * Callers:
 *     IsShellFrameHangResilient @ 0x1C0006E08 (IsShellFrameHangResilient.c)
 *     EditionMouseMoveShellResilience @ 0x1C00ACE70 (EditionMouseMoveShellResilience.c)
 *     PostInputMessage @ 0x1C0117268 (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     IsIAMThread @ 0x1C003B1AC (IsIAMThread.c)
 *     IsDebuggerAttached @ 0x1C005FB64 (IsDebuggerAttached.c)
 */

__int64 __fastcall IsAdaptiveQueueDetachExempted(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 1432);
  v2 = 0;
  if ( !v1 )
    return 1LL;
  v4 = *(_QWORD *)(v1 + 112);
  if ( v4 )
  {
    if ( (unsigned int)IsIAMThread(*(_QWORD *)(v4 + 16)) )
      return 1LL;
  }
  if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(a1 + 424)) )
    return 1LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 112LL);
  if ( !v5 )
    return 0LL;
  LOBYTE(v2) = (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL)) != 0;
  return v2;
}
