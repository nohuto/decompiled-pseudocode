/*
 * XREFs of MNAllocMenuState @ 0x1C021B978
 * Callers:
 *     xxxMNStartMenuState @ 0x1C021C5F4 (xxxMNStartMenuState.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     MNSetupAnimationDC @ 0x1C00D4628 (MNSetupAnimationDC.c)
 *     GreSelectFont @ 0x1C00E8510 (GreSelectFont.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall MNAllocMenuState(_QWORD **a1)
{
  __int64 v2; // rdx
  HDC v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  HDC result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *DPIMetrics; // rax

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v3 = (HDC)Win32AllocPoolWithQuotaZInit(144LL, 1953330005LL);
    if ( !v3 )
      return 0LL;
    *((_QWORD *)v3 + 17) = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC((__int64)v3, v2, v4, v5) )
    {
      Win32FreePool(v3);
      return 0LL;
    }
    GreSetDCOwnerEx(*((_QWORD *)v3 + 17), 0LL, 0LL, 0LL);
  }
  else
  {
    gdwPUDFlags |= 0x2000000u;
    v3 = gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 1LL);
    DPIMetrics = (__int64 *)GetDPIMetrics(v8, v7);
    GreSelectFont(gMenuState[17], *DPIMetrics);
  }
  memset(v3, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
  {
    *((_DWORD *)v3 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *(_QWORD *)v3 = **a1;
  *((_QWORD *)v3 + 4) = gptiCurrent;
  *(_DWORD *)**a1 |= 0x20000000u;
  *((_QWORD *)v3 + 6) = *(_QWORD *)(gptiCurrent + 608LL);
  result = v3;
  *(_QWORD *)(gptiCurrent + 608LL) = v3;
  return result;
}
