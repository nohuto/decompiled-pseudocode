/*
 * XREFs of sub_1406E6B08 @ 0x1406E6B08
 * Callers:
 *     sub_1406E6A98 @ 0x1406E6A98 (sub_1406E6A98.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_1406E6C48 @ 0x1406E6C48 (sub_1406E6C48.c)
 *     sub_1406E6CB0 @ 0x1406E6CB0 (sub_1406E6CB0.c)
 *     sub_140814FBC @ 0x140814FBC (sub_140814FBC.c)
 *     sub_1408150FC @ 0x1408150FC (sub_1408150FC.c)
 *     sub_140815178 @ 0x140815178 (sub_140815178.c)
 *     sub_140816134 @ 0x140816134 (sub_140816134.c)
 *     sub_14081CB98 @ 0x14081CB98 (sub_14081CB98.c)
 *     sub_1409DA868 @ 0x1409DA868 (sub_1409DA868.c)
 *     sub_1409DB1E4 @ 0x1409DB1E4 (sub_1409DB1E4.c)
 */

__int64 __fastcall sub_1406E6B08(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  char v5; // si
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _KTHREAD *v13; // rax

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
  if ( byte_140C16E48 )
  {
    v9 = sub_1406E6CB0();
    if ( v9 < 0 )
    {
      v5 = 1;
      goto LABEL_13;
    }
    v10 = sub_1406E6C48(a1, a2);
    if ( v10 )
    {
      v11 = sub_140814FBC(v10, a3);
      v4 = v11;
      if ( v11 )
      {
        sub_140816134(v11);
        if ( EtwEventEnabled(qword_140C16E68, &stru_14000ED50) )
          sub_140815178(&stru_14000ED50, v4);
        sub_14081CB98(v4);
        goto LABEL_10;
      }
    }
  }
  v9 = -1073741823;
LABEL_13:
  if ( EtwEventEnabled(qword_140C16E68, &stru_14000ED60) )
    sub_1409DB1E4((unsigned int)&stru_14000ED60, a1, a2, a3, v9);
  if ( v4 )
    sub_1408150FC(v4);
LABEL_10:
  ExReleasePushLockEx((ULONG_PTR)&qword_140C16E60, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    v13 = KeGetCurrentThread();
    --*((_WORD *)v13 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C16E60, 0LL);
    if ( byte_140C16E48 )
      sub_1409DA868();
    ExReleasePushLockEx((ULONG_PTR)&qword_140C16E60, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
