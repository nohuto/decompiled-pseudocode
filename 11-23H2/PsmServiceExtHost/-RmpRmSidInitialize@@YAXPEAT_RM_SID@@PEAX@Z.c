/*
 * XREFs of ?RmpRmSidInitialize@@YAXPEAT_RM_SID@@PEAX@Z @ 0x1800070C8
 * Callers:
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x180004DA8 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall RmpRmSidInitialize(union _RM_SID *a1, void *Src)
{
  ULONG v4; // eax

  memset_0(a1, 0, 0x44uLL);
  v4 = RtlLengthSid(Src);
  memcpy_0(a1, Src, v4);
}
