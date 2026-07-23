/*
 * XREFs of sub_140224CF8 @ 0x140224CF8
 * Callers:
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

bool sub_140224CF8()
{
  struct _KTHREAD *CurrentThread; // rax
  bool v1; // bl
  _BYTE *v2; // rcx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23010, 0LL);
  v1 = 0;
  v2 = (_BYTE *)*((_QWORD *)KeGetCurrentPrcb() + 4200);
  if ( v2 )
    v1 = *v2 == 1;
  sub_1402935D0(&qword_140C23010);
  return v1;
}
