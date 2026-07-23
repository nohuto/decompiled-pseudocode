/*
 * XREFs of sub_14075563C @ 0x14075563C
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_140B1E75C @ 0x140B1E75C (sub_140B1E75C.c)
 *     sub_140B1ED10 @ 0x140B1ED10 (sub_140B1ED10.c)
 *     sub_140B1EFA0 @ 0x140B1EFA0 (sub_140B1EFA0.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall sub_14075563C(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*a2 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v6, 0);
  *(_DWORD *)(a1 + 212) = *a2;
  *(_QWORD *)(a1 + 56) = _InterlockedIncrement64(&qword_140C0DA70);
  _InterlockedOr(v6, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  sub_1402F9540((__int64)KeGetCurrentThread());
  return 0LL;
}
