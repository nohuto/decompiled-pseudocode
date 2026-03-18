/*
 * XREFs of ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C02ED6C0
 * Callers:
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C02ED8D8 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00091E8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0013D10 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C01959C8 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02EDA94 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContent(VIDPNSOURCEINFO *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF *DisplayedPrimary; // rax
  struct _EX_RUNDOWN_REF *v18; // rdi
  __int64 Count; // rsi
  int v20; // ebp
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  int v22; // [rsp+58h] [rbp-30h]
  _QWORD v23[2]; // [rsp+60h] [rbp-28h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 12) )
    return 0LL;
  if ( DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4) )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v23,
      *(struct DXGDEVICE **)this);
    DisplayedPrimary = (struct _EX_RUNDOWN_REF *)DXGDEVICE::GetDisplayedPrimary(
                                                   *(struct _KTHREAD ***)this,
                                                   *((_DWORD *)this + 2));
    v18 = DisplayedPrimary;
    if ( DisplayedPrimary )
    {
      DxgkReferenceDxgAllocation(DisplayedPrimary);
      Count = v18[1].Count;
      v21 = Count;
      v22 = 0;
      if ( Count != *(_QWORD *)this )
      {
        v20 = 0;
        while ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v21) )
        {
          Interval.QuadPart = -160000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( (unsigned int)++v20 >= 0xA )
          {
            v11 = -2147483631;
            WdLogSingleEntry1(2LL, Count);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device access lock for rendering device (0x%I64x) couldn't acquired within reasonable time",
              Count,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_13;
          }
        }
      }
      v11 = VIDPNSOURCEINFO::CheckPrimaryContentWorker(this, (struct DXGALLOCATION *)v18);
LABEL_13:
      ExReleaseRundownProtection(v18 + 11);
      if ( v21 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v21);
    }
    else
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)this + 2), *((int *)this + 5), *((int *)this + 5));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"There is no primary allocation for VidPnSource (0x%I64x) on Adapter with LUID (0x%I64x : 0x%I64x)",
        *((unsigned int *)this + 2),
        *((int *)this + 5),
        *((int *)this + 5),
        0LL,
        0LL);
      v11 = -1071775482;
    }
    if ( v23[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
    v11 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v16 = PsGetCurrentProcess(v13, v12, v14, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v16,
      0LL,
      0LL,
      0LL);
  }
  return v11;
}
