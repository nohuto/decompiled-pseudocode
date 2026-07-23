/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140295EF0
 * Callers:
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     sub_140374FC8 @ 0x140374FC8 (sub_140374FC8.c)
 *     sub_140584030 @ 0x140584030 (sub_140584030.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 *     sub_1405B6C18 @ 0x1405B6C18 (sub_1405B6C18.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_1405E4840 @ 0x1405E4840 (sub_1405E4840.c)
 *     RtlGetCallersAddress @ 0x1405E6FD0 (RtlGetCallersAddress.c)
 *     sub_1405F1F7C @ 0x1405F1F7C (sub_1405F1F7C.c)
 *     sub_140601534 @ 0x140601534 (sub_140601534.c)
 *     sub_140603A00 @ 0x140603A00 (sub_140603A00.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     sub_140688290 @ 0x140688290 (sub_140688290.c)
 *     sub_140A7F7DA @ 0x140A7F7DA (sub_140A7F7DA.c)
 *     sub_140A80F90 @ 0x140A80F90 (sub_140A80F90.c)
 *     sub_140A90EA0 @ 0x140A90EA0 (sub_140A90EA0.c)
 *     sub_140A9466C @ 0x140A9466C (sub_140A9466C.c)
 *     sub_140A974B4 @ 0x140A974B4 (sub_140A974B4.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A98420 @ 0x140A98420 (sub_140A98420.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 *     sub_140A9DE70 @ 0x140A9DE70 (sub_140A9DE70.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v6; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // edx
  unsigned int i; // ecx
  ULONG v12; // r8d
  __int64 v13; // rax

  v6 = FramesToCapture;
  if ( FramesToCapture > 0xFFFF )
    v6 = 0xFFFF;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v7 + v6, v7 << 8);
  v9 = v8;
  if ( v8 <= v7 )
    return 0;
  if ( BackTraceHash )
  {
    v12 = 0;
    for ( i = 0; i < v6; v12 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v9 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v12;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
