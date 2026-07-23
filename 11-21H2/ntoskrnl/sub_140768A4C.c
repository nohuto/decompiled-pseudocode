/*
 * XREFs of sub_140768A4C @ 0x140768A4C
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_140768AF8 @ 0x140768AF8 (sub_140768AF8.c)
 */

__int64 __fastcall sub_140768A4C(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx
  int v7; // ebx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = (int)a2;
  *a3 = 0;
  v9 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceSharedLite(&stru_140C462A0, 1u);
  v7 = sub_140768AF8(qword_140D00AC0, *(_QWORD *)(a1 + 48), 983103, v5, (__int64)&v9, 0);
  if ( v7 >= 0 )
    *a3 = 2 - (v9 != 0);
  ExReleaseResourceLite(&stru_140C462A0);
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
