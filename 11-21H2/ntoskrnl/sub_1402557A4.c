/*
 * XREFs of sub_1402557A4 @ 0x1402557A4
 * Callers:
 *     sub_1406DD598 @ 0x1406DD598 (sub_1406DD598.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall sub_1402557A4(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  unsigned int v6; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v8, 0);
  v5 = *(_DWORD *)(a1 + 200);
  if ( a2 )
    v6 = v5 & 0xFE7FFFFF | 0x1000000;
  else
    v6 = v5 & 0xFE7FFFFF | 0x800000;
  *(_DWORD *)(a1 + 200) = v6;
  *(_QWORD *)(a1 + 56) = _InterlockedIncrement64(&qword_140C0DA70);
  _InterlockedOr(v8, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return sub_1402F9540(KeGetCurrentThread());
}
