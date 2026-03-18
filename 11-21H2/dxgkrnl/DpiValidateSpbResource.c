/*
 * XREFs of DpiValidateSpbResource @ 0x1C0395F28
 * Callers:
 *     DpCloseSpbResource @ 0x1C0395590 (DpCloseSpbResource.c)
 *     DpReadSpbResource @ 0x1C0395910 (DpReadSpbResource.c)
 *     DpSpbResourceIoControl @ 0x1C0395A80 (DpSpbResourceIoControl.c)
 *     DpWriteSpbResource @ 0x1C0395C20 (DpWriteSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiValidateSpbResource(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  __int64 v10; // rcx
  struct _EX_RUNDOWN_REF *v11; // rcx

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry4(0LL, 275LL, 21LL, a3, -1073741811LL);
    return 3221225485LL;
  }
  if ( a1
    && (v10 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v10 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v10 + 20) - 2) <= 1 )
  {
    if ( a2
      && *(_DWORD *)(a2 + 16) == 1953656900
      && *(_DWORD *)(a2 + 20) == 12
      && *(_QWORD *)(a2 + 32) == v10
      && *(_DWORD *)(a2 + 48) )
    {
      v11 = (struct _EX_RUNDOWN_REF *)(a2 + 24);
      if ( a4 )
      {
        ExWaitForRundownProtectionRelease(v11);
LABEL_14:
        *a5 = a2;
        return 0LL;
      }
      if ( ExAcquireRundownProtection(v11) )
        goto LABEL_14;
    }
    WdLogSingleEntry2(3LL, a3, a2);
    return 3221225712LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a3, a1);
    return 3221225711LL;
  }
}
