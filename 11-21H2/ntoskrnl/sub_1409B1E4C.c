/*
 * XREFs of sub_1409B1E4C @ 0x1409B1E4C
 * Callers:
 *     sub_1409AC180 @ 0x1409AC180 (sub_1409AC180.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1405E0084 @ 0x1405E0084 (sub_1405E0084.c)
 *     sub_140852F10 @ 0x140852F10 (sub_140852F10.c)
 *     sub_1409B1D18 @ 0x1409B1D18 (sub_1409B1D18.c)
 *     sub_1409E24C0 @ 0x1409E24C0 (sub_1409E24C0.c)
 */

__int64 __fastcall sub_1409B1E4C(__int64 a1)
{
  char v2; // di
  __int64 v3; // rax
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *v5; // r14
  __int64 *v6; // rbx
  unsigned int v7; // ebx

  v2 = 0;
  v3 = sub_1405E0084(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = (_DWORD *)v3;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C1BE70, 0LL);
  if ( *v5 )
    __fastfail(5u);
  v6 = sub_1409B1D18(0LL);
  if ( !v6 )
    goto LABEL_10;
  do
  {
    if ( v6[3] && (int)sub_140852F10(a1, (__int64)v6) < 0 )
      v2 = 1;
    v6 = sub_1409B1D18((__int64 **)v6);
  }
  while ( v6 );
  if ( v2 )
  {
    v7 = -1073741248;
  }
  else
  {
LABEL_10:
    *v5 = 1;
    sub_1409E24C0(a1, 1LL);
    v7 = 0;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C1BE70, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C1BE70);
  sub_1402AFC00((ULONG_PTR)&qword_140C1BE70);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v7;
}
