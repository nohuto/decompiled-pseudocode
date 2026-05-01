/*
 * XREFs of ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180015EEC
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18004DE10 (-HampClientDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x180015C04 (RmpWnfCleanupPendingCallbackList.c)
 *     CemRcTableGetFirst @ 0x180016F78 (CemRcTableGetFirst.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800173FC (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017438 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800262E0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180036C08 (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     CemRcTableGetNext @ 0x18003F740 (CemRcTableGetNext.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180040174 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18004E074 (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 */

void __fastcall HampClientRundownObjects(struct _HAM_CLIENT_CONTEXT *a1)
{
  struct _HAM_CLIENT_CONTEXT *i; // rbx
  unsigned int v2; // edx
  struct _HAM_ACTIVITY *FirstActivity; // rax
  struct _HAM_ACTIVITY *v4; // rdi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *j; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v6; // rdi
  _QWORD *v7; // rcx

  for ( i = a1; ; a1 = i )
  {
    HampClientAcquireLockExclusive(a1);
    FirstActivity = HampClientGetFirstActivity(i, v2);
    v4 = FirstActivity;
    if ( !FirstActivity )
      break;
    if ( _InterlockedIncrement64((volatile signed __int64 *)FirstActivity + 3) <= 1 )
      __fastfail(0xEu);
    HampClientReleaseLockExclusive(i);
    if ( !*((_BYTE *)i + 164) && (*((_BYTE *)i + 160) & 1) != 0 )
      HampActTerminate(v4, 1LL, 6656LL);
    HampActClose(v4);
    CemRcObjectDereference(v4);
  }
  HampClientReleaseLockExclusive(i);
  for ( j = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetFirst((char *)i + 72);
        ;
        j = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)CemRcTableGetNext(v6) )
  {
    v6 = j;
    if ( !j )
      break;
    HampClientPkgClose(j);
  }
  if ( (*((_BYTE *)i + 144) & 1) == 0 )
  {
    v7 = (_QWORD *)*((_QWORD *)i + 16);
    if ( v7 )
      RmpWnfCleanupPendingCallbackList(v7);
  }
}
