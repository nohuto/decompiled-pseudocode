/*
 * XREFs of sub_14084C1C8 @ 0x14084C1C8
 * Callers:
 *     sub_14084C160 @ 0x14084C160 (sub_14084C160.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1403CFC88 @ 0x1403CFC88 (sub_1403CFC88.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 *     sub_14075F194 @ 0x14075F194 (sub_14075F194.c)
 */

__int64 sub_14084C1C8()
{
  struct _KTHREAD *v0; // rdi
  PVOID *i; // rbx

  v0 = sub_1406F5B50();
  --*((_WORD *)v0 + 242);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( ((_DWORD)i[13] & 0x40000000) == 0 )
      sub_14075F194((__int64)i);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  sub_1402AC800((__int64)v0);
  sub_1406F5AF0((__int64)v0);
  return sub_1403CFC88(&dword_140C4F510);
}
