/*
 * XREFs of MNAllocMenuState @ 0x1C01FF0D0
 * Callers:
 *     xxxMNStartMenuState @ 0x1C020009C (xxxMNStartMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     MNSetupAnimationDC @ 0x1C003E6D0 (MNSetupAnimationDC.c)
 *     GetDPIMetrics @ 0x1C0041140 (GetDPIMetrics.c)
 *     GreSelectFont @ 0x1C011BD80 (GreSelectFont.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall MNAllocMenuState(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 *DPIMetrics; // rax

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v2 = (_QWORD *)Win32AllocPoolWithQuotaZInit(144LL, 1953330005LL);
    if ( !v2 )
      return 0LL;
    v2[17] = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC((__int64)v2) )
    {
      Win32FreePool(v2);
      return 0LL;
    }
    GreSetDCOwnerEx(v2[17], 0LL, 0LL, 0LL);
  }
  else
  {
    gdwPUDFlags |= 0x2000000u;
    v2 = (_QWORD *)gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 1LL);
    DPIMetrics = (__int64 *)GetDPIMetrics(v4);
    GreSelectFont((HDC)gMenuState[17], *DPIMetrics);
  }
  memset_0(v2, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
  {
    *((_DWORD *)v2 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *v2 = **a1;
  v2[4] = gptiCurrent;
  *(_DWORD *)**a1 |= 0x20000000u;
  v2[6] = *(_QWORD *)(gptiCurrent + 608LL);
  result = v2;
  *(_QWORD *)(gptiCurrent + 608LL) = v2;
  return result;
}
