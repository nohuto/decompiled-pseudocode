/*
 * XREFs of sub_1406D9E90 @ 0x1406D9E90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_1406D9F40 @ 0x1406D9F40 (sub_1406D9F40.c)
 *     sub_1406D9FC8 @ 0x1406D9FC8 (sub_1406D9FC8.c)
 *     sub_1408150FC @ 0x1408150FC (sub_1408150FC.c)
 *     sub_140815FD0 @ 0x140815FD0 (sub_140815FD0.c)
 *     sub_1409DAEE4 @ 0x1409DAEE4 (sub_1409DAEE4.c)
 */

__int64 sub_1406D9E90()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // rdi
  signed __int64 v3; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C16E60, 0LL);
  sub_1406D9FC8();
  if ( byte_140C16C30 )
  {
    v2 = sub_1406D9F40(&qword_140C16800);
    while ( v2 )
    {
      LOBYTE(v1) = 1;
      sub_140815FD0(v2, v1);
      v5 = v2;
      v6 = sub_1406D9F40(v2);
      v7 = *(_QWORD *)(v2 + 32);
      v8 = v2 + 16;
      v2 = v6;
      sub_1409DAEE4(v7, *(unsigned __int16 *)(v7 + 16), v8);
      sub_1408150FC(v5);
    }
  }
  v3 = -10000000LL * (dword_140C18E90 / 0xAu);
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16E60, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return ExSetTimer(qword_140C16670, v3, 0LL, (__int64)&qword_140C16680);
}
