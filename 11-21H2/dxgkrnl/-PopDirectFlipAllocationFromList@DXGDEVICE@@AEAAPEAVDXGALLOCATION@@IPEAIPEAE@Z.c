/*
 * XREFs of ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C02E65E4
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E7898 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C01890DC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C01959C8 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::PopDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbx
  unsigned int v8; // edx
  __int64 v9; // rsi
  unsigned int v10; // r8d
  bool v11; // zf
  struct _KTHREAD *v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  char v18[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v19; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+60h] [rbp-38h]

  v4 = a2;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, this + 46, 0);
  DXGPUSHLOCK::AcquireExclusive(v19);
  v20 = 2;
  if ( *a4 )
  {
    WdLogSingleEntry1(1LL, 9271LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE == *ReachedEnd", 9271LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = *a3;
  v9 = v4;
  v10 = *((_DWORD *)this + v4 + 350);
  v11 = *a3 == v10;
  if ( *a3 < v10 )
  {
    v12 = this[v4 + 159];
    v13 = *a3;
    v14 = *a3;
    do
    {
      v8 = v14;
      if ( *((_QWORD *)v12 + v13) )
        break;
      *a3 = ++v13;
      v14 = v13;
      v8 = v13;
    }
    while ( v13 < v10 );
    v11 = v8 == v10;
  }
  if ( v11 )
  {
    *a4 = 1;
    v15 = 0LL;
  }
  else
  {
    v15 = *((_QWORD *)this[v4 + 159] + v8);
    if ( !v15 )
    {
      WdLogSingleEntry1(1LL, 9285LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pAllocation", 9285LL, 0LL, 0LL, 0LL, 0LL);
      v8 = *a3;
    }
    if ( v8 != ((*(_DWORD *)(v15 + 72) >> 1) & 0x3FF) )
    {
      WdLogSingleEntry1(1LL, 9286LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"*Iterator == pAllocation->m_DirectFlipIndex",
        9286LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_DWORD *)this + v9 + 366) )
    {
      WdLogSingleEntry1(1LL, 9287LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"0 != m_DirectFlipAllocationCount[VidPnSourceId]",
        9287LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v16 = *a3;
    *((_QWORD *)this[v9 + 159] + v16) = 0LL;
    --*((_DWORD *)this + v9 + 366);
    *(_DWORD *)(v15 + 72) &= 0xFFFFF801;
    *a3 = v16 + 1;
    if ( *((_DWORD *)this + v9 + 350) == (_DWORD)v16 + 1 )
      *a4 = 1;
    if ( !*(_QWORD *)(v15 + 40) )
    {
      WdLogSingleEntry1(1LL, 9306LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"NULL != pAllocation->m_pOwningResource",
        9306LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v15);
    DxgkReferenceDxgResource(*(struct _EX_RUNDOWN_REF **)(v15 + 40));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return (struct DXGALLOCATION *)v15;
}
