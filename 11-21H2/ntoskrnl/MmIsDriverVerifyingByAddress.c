/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x1407B4CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 */

LOGICAL __stdcall MmIsDriverVerifyingByAddress(PVOID AddressWithinSection)
{
  LOGICAL v2; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v4; // rax

  if ( (qword_140D01450 & 0x400000) != 0 )
    return 0;
  v2 = 1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = sub_1402FDA80((unsigned __int64)AddressWithinSection, 0);
  if ( !v4 || (v4[13] & 0x2000000) == 0 )
    v2 = 0;
  ExReleaseResourceLite(&PsLoadedModuleResource);
  sub_1402AC800((__int64)CurrentThread);
  return v2;
}
