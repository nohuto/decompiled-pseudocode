/*
 * XREFs of sub_1409C6248 @ 0x1409C6248
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall sub_1409C6248(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  int v6; // eax
  unsigned int v7; // eax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v9, 0);
  if ( *(_BYTE *)(a1 + 204) )
  {
    v3 = -1073741525;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 200);
    if ( a2 )
      v7 = v6 | 0x10000;
    else
      v7 = v6 & 0xFFFEFFFF;
    *(_DWORD *)(a1 + 200) = v7;
  }
  *(_QWORD *)(a1 + 56) = _InterlockedIncrement64(&qword_140C0DA70);
  _InterlockedOr(v9, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v3;
}
