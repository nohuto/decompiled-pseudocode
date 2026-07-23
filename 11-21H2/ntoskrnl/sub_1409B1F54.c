/*
 * XREFs of sub_1409B1F54 @ 0x1409B1F54
 * Callers:
 *     sub_1409ABC00 @ 0x1409ABC00 (sub_1409ABC00.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405E0084 @ 0x1405E0084 (sub_1405E0084.c)
 *     sub_1409B1D18 @ 0x1409B1D18 (sub_1409B1D18.c)
 *     sub_1409B1D40 @ 0x1409B1D40 (sub_1409B1D40.c)
 *     sub_1409E24C0 @ 0x1409E24C0 (sub_1409E24C0.c)
 */

char __fastcall sub_1409B1F54(__int64 a1)
{
  __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *v4; // rsi
  __int64 *i; // rax
  __int64 **v6; // rbx

  v2 = sub_1405E0084(a1);
  CurrentThread = KeGetCurrentThread();
  v4 = (_DWORD *)v2;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C1BE70, 0LL);
  if ( *v4 != 3 )
    __fastfail(5u);
  for ( i = sub_1409B1D18(0LL); ; i = sub_1409B1D18(v6) )
  {
    v6 = (__int64 **)i;
    if ( !i )
      break;
    if ( i[4] )
      sub_1409B1D40(a1, (__int64)i);
  }
  *v4 = 4;
  sub_1409E24C0(a1, 4LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C1BE70, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C1BE70);
  sub_1402AFC00((ULONG_PTR)&qword_140C1BE70);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
