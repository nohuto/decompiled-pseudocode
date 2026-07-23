/*
 * XREFs of IoSetDeviceInterfaceState @ 0x140769100
 * Callers:
 *     sub_140610DD0 @ 0x140610DD0 (sub_140610DD0.c)
 *     sub_14076341C @ 0x14076341C (sub_14076341C.c)
 *     sub_1407635A4 @ 0x1407635A4 (sub_1407635A4.c)
 *     sub_140810788 @ 0x140810788 (sub_140810788.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
  LOBYTE(v5) = 1;
  LOBYTE(v6) = Enable;
  v7 = sub_140769170(SymbolicLinkName, v6, v5);
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  if ( v7 < 0 )
    return Enable != 0 ? v7 : 0;
  return v7;
}
