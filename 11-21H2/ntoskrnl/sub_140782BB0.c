/*
 * XREFs of sub_140782BB0 @ 0x140782BB0
 * Callers:
 *     sub_1407827F0 @ 0x1407827F0 (sub_1407827F0.c)
 *     sub_140A2DA0C @ 0x140A2DA0C (sub_140A2DA0C.c)
 *     sub_140A2EF0C @ 0x140A2EF0C (sub_140A2EF0C.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406C59F0 @ 0x1406C59F0 (sub_1406C59F0.c)
 */

__int64 __fastcall sub_140782BB0(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
  {
    v5 = ZwClose(a4);
    if ( v5 >= 0 )
      v5 = sub_1406C59F0(a1, a2);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
