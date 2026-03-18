/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x14066E830
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x140203D50 (ExFreeToPagedLookasideList.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcConnectionDestroyProcedure(char **a1)
{
  char *v1; // rsi
  char *v3; // rdx
  char ***v4; // rcx
  __int64 v5; // rsi
  char *v6; // rcx
  ULONG_PTR v7; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    ExAcquirePushLockExclusiveEx(*((_QWORD *)v1 + 2) - 16LL, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 352), 0LL);
    v3 = a1[3];
    if ( *((char ***)v3 + 1) != a1 + 3 || (v4 = (char ***)a1[4], *v4 != a1 + 3) )
      __fastfail(3u);
    *v4 = (char **)v3;
    *((_QWORD *)v3 + 1) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1 + 352);
    KeAbPostRelease((ULONG_PTR)(v1 + 352));
    v5 = *((_QWORD *)v1 + 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5 - 16);
    KeAbPostRelease(v5 - 16);
    ObfDereferenceObject(*a1);
  }
  v6 = a1[5];
  if ( v6 )
  {
    if ( a1[7] == (char *)16 )
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140CF5B80, a1[5]);
    else
      ExFreePoolWithTag(v6, 0x61486C41u);
  }
  v7 = _InterlockedExchange64((volatile __int64 *)a1 + 9, 0LL);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7);
  return 0LL;
}
