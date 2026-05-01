/*
 * XREFs of ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005884
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005798 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     RmpWnfCleanupPendingCallbackList @ 0x1800056C0 (RmpWnfCleanupPendingCallbackList.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000583C (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CemRcTableGetFirst @ 0x180005910 (CemRcTableGetFirst.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800059BC (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007AA0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007B28 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x180043224 (CemRcTableGetNext.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180044524 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x1800785A4 (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 */

void __fastcall HampClientRundownObjects(struct _HAM_CLIENT_CONTEXT *a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx
  _QWORD *v3; // rsi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *i; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rdi

  HampClientAcquireLockExclusive(a1);
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a1);
  v2 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  *((_DWORD *)a1 + 32) |= 1u;
  HampManagerReleaseLockExclusive(v2);
  v3 = (_QWORD *)((char *)a1 + 40);
  while ( (_QWORD *)*v3 != v3 )
  {
    v7 = *v3 - 48LL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
      __fastfail(0xEu);
    HampClientReleaseLockExclusive(a1);
    if ( !*((_DWORD *)a1 + 34) && (*((_BYTE *)a1 + 132) & 1) != 0 )
      HampActTerminate(v7, 1LL, 6656LL);
    HampActClose((struct _HAM_ACTIVITY *)v7);
    CemRcObjectDereference(v7);
    HampClientAcquireLockExclusive(a1);
  }
  HampClientReleaseLockExclusive(a1);
  for ( i = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetFirst((char *)a1 + 56);
        ;
        i = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetNext(v5) )
  {
    v5 = i;
    if ( !i )
      break;
    HampClientPkgClose(i);
  }
  if ( (*((_BYTE *)a1 + 128) & 2) == 0 )
  {
    v6 = (_QWORD *)*((_QWORD *)a1 + 14);
    if ( v6 )
      RmpWnfCleanupPendingCallbackList(v6);
  }
}
