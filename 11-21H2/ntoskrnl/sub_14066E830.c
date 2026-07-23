/*
 * XREFs of sub_14066E830 @ 0x14066E830
 * Callers:
 *     <none>
 * Callees:
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14066E830(char **a1, __int64 a2, __int64 a3)
{
  char *v3; // rsi
  char *v5; // rdx
  char ***v6; // rcx
  __int64 v7; // rsi
  char *v8; // rcx
  ULONG_PTR v9; // rcx

  v3 = *a1;
  if ( *a1 )
  {
    ExAcquirePushLockExclusiveEx(*((_QWORD *)v3 + 2) - 16LL, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 352), 0LL);
    v5 = a1[3];
    if ( *((char ***)v5 + 1) != a1 + 3 || (v6 = (char ***)a1[4], *v6 != a1 + 3) )
      __fastfail(3u);
    *v6 = (char **)v5;
    *((_QWORD *)v5 + 1) = v6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3 + 352);
    sub_1402AFC00((ULONG_PTR)(v3 + 352));
    v7 = *((_QWORD *)v3 + 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7 - 16);
    sub_1402AFC00(v7 - 16);
    ObfDereferenceObject(*a1);
  }
  v8 = a1[5];
  if ( v8 )
  {
    if ( a1[7] == (char *)16 )
      sub_140203D50((__int64)&unk_140CF5B80, (_SLIST_ENTRY *)a1[5], a3);
    else
      ExFreePoolWithTag(v8, 0x61486C41u);
  }
  v9 = _InterlockedExchange64((volatile __int64 *)a1 + 9, 0LL);
  if ( v9 )
    sub_1407A5A54(v9);
  return 0LL;
}
