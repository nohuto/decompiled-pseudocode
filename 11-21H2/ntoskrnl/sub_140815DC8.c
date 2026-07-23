/*
 * XREFs of sub_140815DC8 @ 0x140815DC8
 * Callers:
 *     sub_1406E6A98 @ 0x1406E6A98 (sub_1406E6A98.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1406E6CB0 @ 0x1406E6CB0 (sub_1406E6CB0.c)
 *     sub_1408150FC @ 0x1408150FC (sub_1408150FC.c)
 *     sub_140815178 @ 0x140815178 (sub_140815178.c)
 *     sub_140815F0C @ 0x140815F0C (sub_140815F0C.c)
 *     sub_140815FD0 @ 0x140815FD0 (sub_140815FD0.c)
 *     sub_140816638 @ 0x140816638 (sub_140816638.c)
 *     sub_14081CB98 @ 0x14081CB98 (sub_14081CB98.c)
 *     sub_1409DA868 @ 0x1409DA868 (sub_1409DA868.c)
 *     sub_1409DB1E4 @ 0x1409DB1E4 (sub_1409DB1E4.c)
 */

__int64 __fastcall sub_140815DC8(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi
  char v5; // si
  int v9; // ebx
  __int64 v10; // rax
  struct _KTHREAD *v12; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C16E60, 0LL);
  if ( !a1 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_13;
  }
  if ( !byte_140C16E48 )
    goto LABEL_12;
  v9 = sub_1406E6CB0();
  if ( v9 < 0 )
  {
    v5 = 1;
    goto LABEL_13;
  }
  v10 = sub_140815F0C(a3);
  v4 = (_QWORD *)v10;
  if ( v10 )
  {
    v9 = sub_140816638(a1, a2, *(_QWORD *)(v10 + 32));
    if ( v9 >= 0 )
    {
      sub_140815FD0(v4, 0LL);
      if ( EtwEventEnabled(qword_140C16E68, &stru_1400103A0) )
        sub_140815178((__int64)&stru_1400103A0, (__int64)v4);
      sub_1408150FC(v4);
      goto LABEL_10;
    }
  }
  else
  {
LABEL_12:
    v9 = -1073741823;
  }
LABEL_13:
  if ( EtwEventEnabled(qword_140C16E68, &stru_1400103B0) )
    sub_1409DB1E4((unsigned int)&stru_1400103B0, a1, a2, a3, v9);
  if ( v4 )
    sub_14081CB98(v4);
LABEL_10:
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16E60, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    v12 = KeGetCurrentThread();
    --*((_WORD *)v12 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16E60, 0LL);
    if ( byte_140C16E48 )
      sub_1409DA868();
    ExReleasePushLockEx((ULONG_PTR)&qword_140C16E60, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
