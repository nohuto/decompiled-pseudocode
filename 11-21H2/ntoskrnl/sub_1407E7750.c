/*
 * XREFs of sub_1407E7750 @ 0x1407E7750
 * Callers:
 *     sub_140259668 @ 0x140259668 (sub_140259668.c)
 *     sub_140573740 @ 0x140573740 (sub_140573740.c)
 *     sub_1406CA810 @ 0x1406CA810 (sub_1406CA810.c)
 *     sub_1406D7150 @ 0x1406D7150 (sub_1406D7150.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_1407E6274 @ 0x1407E6274 (sub_1407E6274.c)
 *     sub_1407E65A0 @ 0x1407E65A0 (sub_1407E65A0.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1407FFFE4 @ 0x1407FFFE4 (sub_1407FFFE4.c)
 *     sub_140814B24 @ 0x140814B24 (sub_140814B24.c)
 *     sub_140927D44 @ 0x140927D44 (sub_140927D44.c)
 *     sub_1409286EC @ 0x1409286EC (sub_1409286EC.c)
 *     sub_1409B196C @ 0x1409B196C (sub_1409B196C.c)
 *     PsSuspendProcess @ 0x1409B2EF0 (PsSuspendProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall sub_1407E7750(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD **v3; // r13
  __int64 v4; // rbx
  _QWORD *v6; // r15
  int v7; // r14d
  signed __int64 *v8; // rbp
  _QWORD *v9; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD **)(a1 + 1504);
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0;
  --*((_WORD *)CurrentThread + 242);
  v8 = (signed __int64 *)(a1 + 1080);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( a2 )
    v9 = (_QWORD *)a2[167];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v6 = v9 - 167;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 167)) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v3 )
        goto LABEL_6;
    }
    v7 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  sub_1402AFC00((ULONG_PTR)v8);
  sub_1402AC800((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v7 )
    return v6;
  return (_QWORD *)v4;
}
