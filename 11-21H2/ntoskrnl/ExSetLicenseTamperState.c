/*
 * XREFs of ExSetLicenseTamperState @ 0x1409F97C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140639C30 @ 0x140639C30 (sub_140639C30.c)
 *     sub_140639FC4 @ 0x140639FC4 (sub_140639FC4.c)
 *     ntoskrnl_20 @ 0x1406A71F0 (ntoskrnl_20.c)
 */

char __fastcall ExSetLicenseTamperState(int a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  _OWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  v2 = sub_140347DB0();
  v3 = v2[113];
  if ( a1 && a1 != 3 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(v3 + 46840, 0LL);
    sub_140639C30(v3, &v10);
    v5 = v10 == 0;
    sub_140639FC4(v3, a1);
    memset(v9, 0, sizeof(v9));
    ntoskrnl_20(v3, (__int64)v9, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3 + 46840);
    sub_1402AFC00(v3 + 46840);
    LOBYTE(v2) = sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v5 )
    {
      v7 = *((_QWORD *)sub_140347DB0() + 113);
      LOBYTE(v2) = qword_140D3B4C8;
      if ( qword_140D3B4C8 )
        LOBYTE(v2) = sub_14042A5E0(v7, v6);
    }
  }
  return (char)v2;
}
