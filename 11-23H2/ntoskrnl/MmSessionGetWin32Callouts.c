/*
 * XREFs of MmSessionGetWin32Callouts @ 0x140214EA0
 * Callers:
 *     PsInvokeWin32Callout @ 0x1406AF850 (PsInvokeWin32Callout.c)
 *     NtFindAtom @ 0x140717CA0 (NtFindAtom.c)
 *     ExCallSessionCallBack @ 0x1407C5C90 (ExCallSessionCallBack.c)
 * Callees:
 *     <none>
 */

union _RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  union _RTL_RUN_ONCE *result; // rax

  result = &PsWin32NullCallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 608) >= 2uLL )
    return &PsWin32CallBack;
  return result;
}
