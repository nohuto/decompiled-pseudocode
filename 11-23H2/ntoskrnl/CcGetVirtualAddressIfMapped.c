/*
 * XREFs of CcGetVirtualAddressIfMapped @ 0x14029EBD0
 * Callers:
 *     CcFlushCacheOneRange @ 0x14029E8E0 (CcFlushCacheOneRange.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     CcGetVacbLargeOffset @ 0x14029F320 (CcGetVacbLargeOffset.c)
 *     CcIncrementVacbActiveCount @ 0x1402A074C (CcIncrementVacbActiveCount.c)
 */

__int64 __fastcall CcGetVirtualAddressIfMapped(__int64 *a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rbx
  __int64 VacbLargeOffset; // rax

  v6 = a2 & 0x3FFFF;
  *a4 = 0x40000 - (a2 & 0x3FFFF);
  v8 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 13), 0LL);
  if ( a1[4] <= 0x2000000 )
    VacbLargeOffset = *(_QWORD *)(a1[11] + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  else
    VacbLargeOffset = CcGetVacbLargeOffset(a1, a2);
  *a3 = VacbLargeOffset;
  if ( VacbLargeOffset )
  {
    CcIncrementVacbActiveCount(VacbLargeOffset);
    v8 = *(_QWORD *)*a3 + v6;
  }
  ExReleasePushLockEx(a1 + 13, 0LL);
  return v8;
}
