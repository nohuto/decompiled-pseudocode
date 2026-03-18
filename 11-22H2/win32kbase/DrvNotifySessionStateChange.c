/*
 * XREFs of DrvNotifySessionStateChange @ 0x1C00A92D0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00A8AE8 (MultiUserNtGreCleanup.c)
 *     InitializeGreCSRSS @ 0x1C00A9010 (InitializeGreCSRSS.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??9?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEBAH$$T@Z @ 0x1C00D01A0 (--9-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEBAH$$T@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvNotifySessionStateChange(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = a1;
  if ( (unsigned int)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator!=()
    && IS_USERCRIT_OWNED_AT_ALL(v3, v2, v4, v5)
    && (unsigned int)(v1 - 3) > 1 )
  {
    WdLogSingleEntry0(1LL);
  }
  PsGetCurrentProcessSessionId();
  WdLogSingleEntry2(4LL, v1);
  if ( qword_1C0294F80 )
    return qword_1C0294F80((unsigned int)v1);
  else
    return 3221225659LL;
}
