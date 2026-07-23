/*
 * XREFs of sub_1409B1DA0 @ 0x1409B1DA0
 * Callers:
 *     sub_1406CA8B0 @ 0x1406CA8B0 (sub_1406CA8B0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405E0084 @ 0x1405E0084 (sub_1405E0084.c)
 *     sub_1409E24C0 @ 0x1409E24C0 (sub_1409E24C0.c)
 */

char __fastcall sub_1409B1DA0(__int64 a1)
{
  __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rdx
  volatile signed __int32 *v4; // rbx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // bl

  v2 = sub_1405E0084(a1);
  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int32 *)v2;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C1BE70, 0LL);
  v5 = *v4;
  do
  {
    if ( v5 >= 3 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v6 = v5;
    v5 = _InterlockedCompareExchange(v4, 3, v5);
  }
  while ( v6 != v5 );
  sub_1409E24C0(a1, 3LL);
  v7 = 1;
LABEL_5:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C1BE70, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C1BE70);
  sub_1402AFC00((ULONG_PTR)&qword_140C1BE70);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v7;
}
