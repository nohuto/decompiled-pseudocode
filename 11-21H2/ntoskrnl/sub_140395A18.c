/*
 * XREFs of sub_140395A18 @ 0x140395A18
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140804994 @ 0x140804994 (sub_140804994.c)
 *     sub_14082473C @ 0x14082473C (sub_14082473C.c)
 *     sub_140992720 @ 0x140992720 (sub_140992720.c)
 */

char __fastcall sub_140395A18(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  ULONG_PTR *j; // rbx
  __int64 v6; // r8
  ULONG_PTR *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( !a1 )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23C48, 0LL);
    for ( i = (ULONG_PTR *)qword_140C23B70; i != &qword_140C23B70; i = (ULONG_PTR *)*i )
    {
      LOBYTE(v6) = 1;
      sub_140992720(i, i[3], v6);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23C48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C23C48);
    sub_1402AFC00((ULONG_PTR)&qword_140C23C48);
  }
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23B98, 0LL);
  for ( j = (ULONG_PTR *)qword_140C23B80; j != &qword_140C23B80; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      if ( !a1 )
      {
        LOBYTE(v3) = 1;
        sub_14082473C(j, v3);
      }
      sub_140804994(j, a1);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C23B98);
  sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
