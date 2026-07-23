/*
 * XREFs of ExGetLicenseTamperState @ 0x1409F9700
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140639C30 @ 0x140639C30 (sub_140639C30.c)
 */

bool __fastcall ExGetLicenseTamperState(_DWORD *a1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rdi
  bool v5; // bl
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  v2 = *((_QWORD *)sub_140347DB0() + 113);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v4 = (signed __int64 *)(v2 + 46840);
  ExAcquirePushLockSharedEx(v2 + 46840, 0LL);
  sub_140639C30(v2, &v7);
  v5 = v7 != 0;
  if ( a1 )
    *a1 = v7;
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  sub_1402AFC00((ULONG_PTR)v4);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v5;
}
