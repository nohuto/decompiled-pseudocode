/*
 * XREFs of KiRestoreProcessorState @ 0x14020E950
 * Callers:
 *     KiFreezeTargetExecution @ 0x14020E1D0 (KiFreezeTargetExecution.c)
 * Callees:
 *     RtlXRestore @ 0x14020E140 (RtlXRestore.c)
 *     KeContextToKframes @ 0x14041EF10 (KeContextToKframes.c)
 *     KiRestoreProcessorControlState @ 0x14041F060 (KiRestoreProcessorControlState.c)
 */

__int64 __fastcall KiRestoreProcessorState(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _CONTEXT *Context; // r10
  unsigned int ContextFlags; // r9d
  char v7; // r11

  CurrentPrcb = KeGetCurrentPrcb();
  Context = CurrentPrcb->Context;
  ContextFlags = Context->ContextFlags;
  v7 = Context->SegCs & 1;
  if ( !v7
    && ((ContextFlags & 0x100008) == 1048584 || (ContextFlags & 0x100040) == 1048640)
    && (ContextFlags & 0x100040) == 0x100040
    && (MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC) != 0 )
  {
    RtlXRestore((__int64)&Context->1 + SLODWORD(Context[1].P3Home) + 464, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC);
  }
  KeContextToKframes(a1, a2, (_DWORD)Context, ContextFlags, v7);
  return KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
}
