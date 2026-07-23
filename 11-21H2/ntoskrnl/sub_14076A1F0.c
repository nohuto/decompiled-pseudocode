/*
 * XREFs of sub_14076A1F0 @ 0x14076A1F0
 * Callers:
 *     sub_1406E4980 @ 0x1406E4980 (sub_1406E4980.c)
 *     sub_14076A134 @ 0x14076A134 (sub_14076A134.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14076A2CC @ 0x14076A2CC (sub_14076A2CC.c)
 */

char *__fastcall sub_14076A1F0(int a1, struct _ERESOURCE *a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v12; // si
  _QWORD *v13; // rax
  char *result; // rax

  v8 = 5LL * a1;
  v9 = (_QWORD *)(a4 + qword_1400084F0[v8 + 3]);
  v10 = a3 + qword_1400084F0[v8 + 1];
  if ( *v9 )
  {
    v12 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0;
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(a2, 1u);
    ++*(_DWORD *)(a3 + 12);
    ExReleaseResourceLite(a2);
    KeLeaveCriticalRegion();
    v13 = *(_QWORD **)(v10 + 8);
    if ( *v13 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v13;
    *v13 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    ++*(_DWORD *)(v10 + 16);
    sub_14076A2CC(a3, a4, 1LL);
  }
  result = a5;
  if ( a5 )
    *a5 = v12;
  return result;
}
