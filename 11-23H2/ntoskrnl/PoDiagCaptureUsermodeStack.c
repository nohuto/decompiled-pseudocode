/*
 * XREFs of PoDiagCaptureUsermodeStack @ 0x140865368
 * Callers:
 *     NtSetTimerResolution @ 0x1407DCDF0 (NtSetTimerResolution.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140227870 (RtlWalkFrameChain.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

_DWORD *PoDiagCaptureUsermodeStack()
{
  __int64 Pool2; // rax
  _DWORD *v1; // rbx
  ULONG v2; // eax

  Pool2 = ExAllocatePool2(256LL, 264LL, 1346721364LL);
  v1 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v2 = RtlWalkFrameChain((PVOID *)(Pool2 + 8), 0x20u, 1u);
    if ( v2 )
    {
      *v1 = v2;
    }
    else
    {
      ExFreePoolWithTag(v1, 0x50455654u);
      return 0LL;
    }
  }
  return v1;
}
