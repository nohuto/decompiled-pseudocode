/*
 * XREFs of sub_14072A6B0 @ 0x14072A6B0
 * Callers:
 *     sub_14023B484 @ 0x14023B484 (sub_14023B484.c)
 *     sub_1402F8F70 @ 0x1402F8F70 (sub_1402F8F70.c)
 *     sub_14069C820 @ 0x14069C820 (sub_14069C820.c)
 *     sub_14070AAD0 @ 0x14070AAD0 (sub_14070AAD0.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1407275D0 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

void *__fastcall sub_14072A6B0(__int64 a1, char a2, ULONG a3, _BYTE *a4, bool *a5, int *a6, _BYTE *a7)
{
  __int64 v12; // r13
  struct _KTHREAD *CurrentThread; // r15
  void *v14; // rsi
  char v15; // al

  if ( (*(_DWORD *)(a1 + 1376) & 8) == 0 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 544);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx(a1 + 1360, 0LL);
  if ( (*(_DWORD *)(a1 + 1376) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v14 = *(void **)(a1 + 1544)) != 0LL )
    {
      v15 = 0;
    }
    else
    {
      v14 = (void *)(*(_QWORD *)(a1 + 1272) & 0xFFFFFFFFFFFFFFF8uLL);
      v15 = BYTE1(*(_DWORD *)(a1 + 1376)) & 1;
    }
    *a4 = v15;
    ObfReferenceObjectWithTag(v14, a3);
    *a6 = *(_DWORD *)(a1 + 1272) & 3;
    *a5 = (*(_BYTE *)(a1 + 1272) & 4) != 0;
    if ( a7 )
      *a7 = *(_BYTE *)(v12 + 2170);
  }
  else
  {
    v14 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1360), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1360));
  sub_1402AFC00(a1 + 1360);
  sub_1402AC800((__int64)CurrentThread);
  return v14;
}
