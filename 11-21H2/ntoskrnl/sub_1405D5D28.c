/*
 * XREFs of sub_1405D5D28 @ 0x1405D5D28
 * Callers:
 *     sub_1405DE9D4 @ 0x1405DE9D4 (sub_1405DE9D4.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1405D5D28(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, __int64 a7)
{
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rdi
  char v11; // bl

  v8 = a1;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C20A30, 0LL);
  }
  if ( v8 )
    sub_14042A5E0(a7, a2);
  v10 = (__int64 *)qword_140C20A40;
  v11 = 1;
  while ( v10 != &qword_140C20A40 )
  {
    if ( !(unsigned __int8)sub_14042A5E0(v10, a7) )
    {
      v11 = 0;
      break;
    }
    v10 = (__int64 *)*v10;
  }
  if ( a3 )
  {
    LOBYTE(a1) = v11;
    sub_14042A5E0(a1, a7);
  }
  if ( a6 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C20A30, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C20A30);
    sub_1402AFC00((ULONG_PTR)&qword_140C20A30);
    KeLeaveCriticalRegion();
  }
  return v11;
}
