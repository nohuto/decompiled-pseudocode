/*
 * XREFs of sub_140357EE0 @ 0x140357EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_14035800C @ 0x14035800C (sub_14035800C.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 sub_140357EE0()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rsi
  unsigned int i; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  LARGE_INTEGER v8; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23B98, 0LL);
  if ( (ULONG_PTR *)qword_140C23B80 != &qword_140C23B80 )
  {
    v1 = KeQueryInterruptTimePrecise(&v8);
    v2 = qword_140C23B80;
    v3 = v1;
    while ( (ULONG_PTR *)v2 != &qword_140C23B80 )
    {
      for ( i = 0; i < *(_DWORD *)(v2 + 828); ++i )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(v2 + 832) + 8LL * i);
        if ( *(int *)(v5 + 96) > 0 && v3 - *(_QWORD *)(v5 + 144) >= (unsigned __int64)(unsigned int)dword_140C0982C )
        {
          _InterlockedAdd((volatile signed __int32 *)(v5 + 96), 0xFFFFFFFF);
          _InterlockedAdd(&dword_140C23BB0, 0xFFFFFFFF);
          sub_140355830(v2, i, 1);
        }
      }
      v2 = *(_QWORD *)v2;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&qword_140C23B98);
  sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
  sub_1402F9540((__int64)KeGetCurrentThread());
  LOBYTE(v6) = 1;
  return sub_14035800C(v6);
}
