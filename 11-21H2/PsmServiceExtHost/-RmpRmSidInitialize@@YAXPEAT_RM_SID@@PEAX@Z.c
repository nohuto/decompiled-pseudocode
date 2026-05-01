/*
 * XREFs of ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x180033540
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x180032678 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall RmpRmSidInitialize(union _RM_SID *a1, void *Src)
{
  ULONG v4; // eax

  memset_0(a1, 0, 0x44uLL);
  v4 = RtlLengthSid(Src);
  memcpy_0(a1, Src, v4);
}
