/*
 * XREFs of sub_1406E6FE8 @ 0x1406E6FE8
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

char __fastcall sub_1406E6FE8(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  unsigned int v7; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v8, 0);
  v5 = *(_DWORD *)(a1 + 200);
  if ( !a2 )
  {
    v7 = v5 & 0xFFFFFBFF;
    goto LABEL_5;
  }
  if ( (v5 & 0x200) != 0 )
  {
    v7 = v5 | 0x400;
LABEL_5:
    *(_DWORD *)(a1 + 200) = v7;
  }
  *(_QWORD *)(a1 + 56) = _InterlockedIncrement64(&qword_140C0DA70);
  _InterlockedOr(v8, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
