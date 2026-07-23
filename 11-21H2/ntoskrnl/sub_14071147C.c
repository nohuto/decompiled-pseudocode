/*
 * XREFs of sub_14071147C @ 0x14071147C
 * Callers:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     sub_1406C03F0 @ 0x1406C03F0 (sub_1406C03F0.c)
 *     PsSetProcessFaultInformation @ 0x1406D40C0 (PsSetProcessFaultInformation.c)
 *     sub_1407DB734 @ 0x1407DB734 (sub_1407DB734.c)
 *     sub_1409EB400 @ 0x1409EB400 (sub_1409EB400.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140711CD4 @ 0x140711CD4 (sub_140711CD4.c)
 *     sub_140712868 @ 0x140712868 (sub_140712868.c)
 */

__int64 __fastcall sub_14071147C(_QWORD *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int64 *v3; // r14
  unsigned int v6; // edi
  __int64 v7; // r15
  unsigned __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-30h]
  __int128 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v3 = BugCheckParameter1 + 135;
  v15 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    sub_140711CD4(BugCheckParameter1, &v10);
    v6 = 0;
    v7 = *((_QWORD *)&v10 + 1) - v11 - BugCheckParameter1[289];
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    v8 = BugCheckParameter1[292];
    if ( v8 >> 61 != 3 && BugCheckParameter1[291] <= (unsigned __int64)v10 )
    {
      *(_QWORD *)&v13 = BugCheckParameter1[291];
      LODWORD(v15) = v8 >> 61;
      *((_QWORD *)&v13 + 1) = v8 & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && v8 >> 61 == 1 )
        a2 = 6;
      BugCheckParameter1[291] = v10;
      BugCheckParameter1[292] = v7 & 0x1FFFFFFFFFFFFFFFLL | ((__int64)a2 << 61);
      v6 = 1;
    }
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    sub_1402AFC00((ULONG_PTR)v3);
    sub_1402AC800((__int64)CurrentThread);
    if ( BugCheckParameter1[292] >> 61 == 3 )
      break;
    if ( v6 )
      goto LABEL_10;
  }
  if ( !v6 )
    return v6;
LABEL_10:
  v12 = v10;
  *((_QWORD *)&v14 + 1) = v11;
  *(_QWORD *)&v14 = v7;
  HIDWORD(v15) = a2;
  sub_140712868((ULONG_PTR)BugCheckParameter1);
  return v6;
}
