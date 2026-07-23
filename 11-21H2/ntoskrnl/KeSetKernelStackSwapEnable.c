/*
 * XREFs of KeSetKernelStackSwapEnable @ 0x1402F8AA0
 * Callers:
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_14033CBF0 @ 0x14033CBF0 (sub_14033CBF0.c)
 *     sub_14057B194 @ 0x14057B194 (sub_14057B194.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     sub_1407FFFE4 @ 0x1407FFFE4 (sub_1407FFFE4.c)
 *     sub_140A516C0 @ 0x140A516C0 (sub_140A516C0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // dl

  CurrentThread = KeGetCurrentThread();
  v2 = (*((_DWORD *)CurrentThread + 30) & 0x40) != 0;
  if ( Enable != v2 )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)CurrentThread + 30, 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)CurrentThread + 30, 6u);
  }
  return v2;
}
