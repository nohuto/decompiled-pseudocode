/*
 * XREFs of FsRtlFindInTunnelCacheEx @ 0x140694E60
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x14092E170 (FsRtlFindInTunnelCache.c)
 * Callees:
 *     sub_14021D7F0 @ 0x14021D7F0 (sub_14021D7F0.c)
 *     sub_14021D85C @ 0x14021D85C (sub_14021D85C.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140694FD0 @ 0x140694FD0 (sub_140694FD0.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlFindInTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PUNICODE_STRING DestinationString,
        char a6,
        _DWORD *a7,
        void *a8)
{
  PKGUARDED_MUTEX v10; // r14
  char v11; // bl
  __int64 v12; // rsi
  __int64 v13; // rdi
  LONG v14; // eax
  unsigned __int16 *v15; // rdi
  wchar_t *PoolWithTag; // rcx
  unsigned __int16 v17; // ax
  __int64 *v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v10 = Mutex;
  v11 = 0;
  v12 = 0LL;
  if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 1) )
    return 0;
  v19[1] = (__int64 *)v19;
  v19[0] = (__int64 *)v19;
  ExAcquireFastMutex(Mutex);
  sub_140694FD0(v10, v19);
  v13 = *(_QWORD *)&v10[1].Count;
  if ( v13 )
  {
    do
    {
      v12 = v13;
      v14 = sub_14021D7F0(v13, a2, a3, a6 & 1);
      if ( v14 > 0 )
      {
        v13 = *(_QWORD *)(v13 + 8);
      }
      else
      {
        if ( v14 >= 0 )
          break;
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    while ( v13 );
    v10 = Mutex;
  }
  if ( v13 )
  {
    RtlCopyUnicodeString(a4, (PCUNICODE_STRING)(v12 + 80));
    v15 = (unsigned __int16 *)(v12 + 64);
    if ( DestinationString->MaximumLength < *(_WORD *)(v12 + 64) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)17, *(unsigned __int16 *)(v12 + 64), 0x346E7554u);
      DestinationString->Buffer = PoolWithTag;
      v17 = *v15;
      DestinationString->MaximumLength = *v15;
      DestinationString->Length = v17;
      memmove(PoolWithTag, *(const void **)(v12 + 72), *v15);
    }
    else
    {
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(v12 + 64));
    }
    memmove(a8, *(const void **)(v12 + 96), *(unsigned int *)(v12 + 104));
    *a7 = *(_DWORD *)(v12 + 104);
    v11 = 1;
  }
  KeReleaseGuardedMutex(v10);
  sub_14021D85C(v19);
  return v11;
}
