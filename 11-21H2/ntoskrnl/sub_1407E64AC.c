/*
 * XREFs of sub_1407E64AC @ 0x1407E64AC
 * Callers:
 *     sub_1407E6274 @ 0x1407E6274 (sub_1407E6274.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_1407E64AC(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r14
  __int64 v5; // r15
  int v6; // edi
  signed __int64 *v7; // rsi
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 1504;
  v5 = 0LL;
  v6 = 0;
  --*((_WORD *)CurrentThread + 242);
  v7 = (signed __int64 *)(a1 + 1080);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( a2 )
    v8 = a2[168];
  else
    v8 = *(_QWORD *)(v3 + 8);
  while ( v8 != v3 )
  {
    v5 = v8 - 1336;
    if ( ObReferenceObjectSafeWithTag(v8 - 1336) )
    {
      v6 = 1;
      break;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  sub_1402AC800((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5 & -(__int64)(v6 != 0);
}
