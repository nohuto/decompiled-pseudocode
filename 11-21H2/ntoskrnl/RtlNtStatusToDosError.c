/*
 * XREFs of RtlNtStatusToDosError @ 0x14069E070
 * Callers:
 *     sub_140675CC0 @ 0x140675CC0 (sub_140675CC0.c)
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_140676AC0 @ 0x140676AC0 (sub_140676AC0.c)
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 *     sub_140743E60 @ 0x140743E60 (sub_140743E60.c)
 *     sub_140817CD8 @ 0x140817CD8 (sub_140817CD8.c)
 *     sub_140818934 @ 0x140818934 (sub_140818934.c)
 *     sub_1408226C0 @ 0x1408226C0 (sub_1408226C0.c)
 *     sub_1408515A8 @ 0x1408515A8 (sub_1408515A8.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x140225DA0 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 && *((_BYTE *)CurrentThread + 586) != 1 )
  {
    v2 = *((_QWORD *)CurrentThread + 30);
    if ( v2 )
      *(_DWORD *)(v2 + 4688) = Status;
  }
  return RtlNtStatusToDosErrorNoTeb(Status);
}
