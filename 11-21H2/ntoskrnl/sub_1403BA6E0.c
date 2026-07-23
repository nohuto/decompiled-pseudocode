/*
 * XREFs of sub_1403BA6E0 @ 0x1403BA6E0
 * Callers:
 *     sub_1405DDEE4 @ 0x1405DDEE4 (sub_1405DDEE4.c)
 *     sub_1407494FC @ 0x1407494FC (sub_1407494FC.c)
 *     sub_140823988 @ 0x140823988 (sub_140823988.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall sub_1403BA6E0(PCUNICODE_STRING String2, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rbx
  NTSTATUS v6; // edi
  __int64 *i; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = -1073741275;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23B98, 0LL);
  for ( i = (__int64 *)qword_140C23BA0; i != &qword_140C23BA0; i = (__int64 *)*i )
  {
    v5 = i - 25;
    if ( i[3] && !RtlCompareUnicodeString((PCUNICODE_STRING)(v5 + 27), String2, 0) )
    {
      if ( a2 )
        v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 34), (PVOID)0x66466F50, &File, 1u, 0x20u);
      else
        v6 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C23B98);
  sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
  KeLeaveCriticalRegion();
  if ( v6 >= 0 && a2 )
    *a2 = v5;
  return (unsigned int)v6;
}
