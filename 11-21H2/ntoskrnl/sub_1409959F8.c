/*
 * XREFs of sub_1409959F8 @ 0x1409959F8
 * Callers:
 *     sub_1408091B0 @ 0x1408091B0 (sub_1408091B0.c)
 * Callees:
 *     sub_1402500D4 @ 0x1402500D4 (sub_1402500D4.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14039ADE8 @ 0x14039ADE8 (sub_14039ADE8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 *     sub_14099596C @ 0x14099596C (sub_14099596C.c)
 */

struct _KTHREAD *__fastcall sub_1409959F8(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  unsigned __int8 v3; // di
  unsigned int v4; // esi
  unsigned int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ecx
  __int64 v8; // rdx
  _OWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = sub_14039ADE8(*(_DWORD *)(a1 + 60));
  v3 = *(_BYTE *)(v2 + 42);
  v4 = *(_DWORD *)(v2 + 76);
  memset(v10, 0, sizeof(v10));
  v5 = v1 & 0xFFFFFF;
  LODWORD(v10[0]) = 1;
  sub_140809310(v2, (__int64)v10);
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
  sub_140809838(2, v5);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C207A0, 1u);
  dword_140C208D4 = 0;
  dword_140C208D8 = dword_140C20790;
  byte_140C208F0 = v3;
  sub_1402500D4(0);
  ExReleaseResourceLite(&stru_140C207A0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v11 = v3;
  sub_140811764(6, &v11);
  sub_14099596C(v7);
  sub_14042A5E0(v4, v8);
  return sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
}
