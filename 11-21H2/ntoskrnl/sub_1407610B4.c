/*
 * XREFs of sub_1407610B4 @ 0x1407610B4
 * Callers:
 *     MmResetDriverPaging @ 0x140760ED0 (MmResetDriverPaging.c)
 *     MmPageEntireDriver @ 0x140761010 (MmPageEntireDriver.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_140B0872C @ 0x140B0872C (sub_140B0872C.c)
 */

_QWORD *__fastcall sub_1407610B4(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *result; // rax

  if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    if ( (*(_DWORD *)(a1 + 104) & 0x400000) != 0 )
    {
      sub_140B0872C(a1, 0LL);
      *(_DWORD *)(a1 + 104) &= ~0x400000u;
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    return sub_1402AC800((__int64)CurrentThread);
  }
  return result;
}
