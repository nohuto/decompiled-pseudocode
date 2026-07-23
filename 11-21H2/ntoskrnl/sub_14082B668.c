/*
 * XREFs of sub_14082B668 @ 0x14082B668
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14082B6F0 @ 0x14082B6F0 (sub_14082B6F0.c)
 */

_QWORD *sub_14082B668()
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  __int64 v2; // rcx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v2 = (__int64)i[14];
    if ( !v2 || !*(_QWORD *)(sub_140287970(v2) + 144) || ((_DWORD)i[13] & 0x8000000) == 0 )
      sub_14082B6F0(i);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return sub_1402AC800((__int64)CurrentThread);
}
