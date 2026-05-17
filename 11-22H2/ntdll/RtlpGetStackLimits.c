/*
 * XREFs of RtlpGetStackLimits @ 0x180075CBC
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001E3CC (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18001E860 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180020160 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpGetStackLimits(_QWORD *a1, void **a2)
{
  struct _TEB *v2; // r8
  _UNKNOWN **StackLimit; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v2 = NtCurrentTeb();
  *a2 = v2->NtTib.StackBase;
  StackLimit = (_UNKNOWN **)v2->NtTib.StackLimit;
  *a1 = StackLimit;
  return StackLimit <= &retaddr && &retaddr < *a2;
}
