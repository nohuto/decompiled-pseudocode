/*
 * XREFs of NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0346710
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C03446AC (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C0344A1C (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x1C0344EF4 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0345B20 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

__int64 __fastcall NtDxgkGetAvailableTrackedWorkloadIndex(struct DXGDEVICE *a1)
{
  unsigned int *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  DXGTRACKEDWORKLOAD *v11; // rsi
  __int64 v12; // rdi
  struct DXGDEVICE *v13; // r14
  __int64 v14; // r9
  int v15; // eax
  struct COREDEVICEACCESS *v16; // r8
  unsigned __int64 *v17; // rax
  _DWORD *v18; // rdx
  _DWORD *v19; // rdx
  unsigned int v20; // [rsp+50h] [rbp-348h] BYREF
  DXGTRACKEDWORKLOAD *v21; // [rsp+58h] [rbp-340h] BYREF
  struct DXGDEVICE *v22[2]; // [rsp+60h] [rbp-338h] BYREF
  DXGTRACKEDWORKLOAD *v23[2]; // [rsp+70h] [rbp-328h] BYREF
  _BYTE v24[8]; // [rsp+80h] [rbp-318h] BYREF
  __int64 v25; // [rsp+88h] [rbp-310h]
  char v26; // [rsp+90h] [rbp-308h]
  _BYTE v27[24]; // [rsp+98h] [rbp-300h] BYREF
  unsigned int v28[136]; // [rsp+B0h] [rbp-2E8h] BYREF
  _BYTE v29[160]; // [rsp+2D0h] [rbp-C8h] BYREF

  v22[1] = a1;
  memset(v28, 0, 0x218uLL);
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 < 0x218 )
  {
    WdLogSingleEntry1(3LL, 470LL);
    return 3221225485LL;
  }
  if ( (unsigned int)v3 > 0x218 )
    v3 = 536LL;
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  memmove(v28, v5, v3);
  v22[0] = 0LL;
  v21 = 0LL;
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)v23, v28[1], Current, &v21, v22);
  v11 = v21;
  if ( v21 )
  {
    v20 = 0;
    LODWORD(v21) = 0;
    v13 = v22[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27,
      v22[0]);
    v25 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    v26 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, (__int64)v13, 0, v14, 0);
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29, 0LL);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v17 = (unsigned __int64 *)&v28[4];
      if ( *((_DWORD *)v11 + 21) )
        v17 = 0LL;
      LODWORD(v12) = DXGTRACKEDWORKLOAD::GetAvailableIndex(v11, v13, v16, *(__int64 *)&v28[2], v17, &v20, (int *)&v21);
      if ( (int)v12 >= 0 )
      {
        DXGTRACKEDWORKLOAD::ReportStats(v11);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
        if ( v26 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27);
        v18 = (_DWORD *)((char *)a1 + 528);
        if ( (unsigned __int64)a1 + 528 >= MmUserProbeAddress )
          v18 = (_DWORD *)MmUserProbeAddress;
        *v18 = v20;
        v19 = (_DWORD *)((char *)a1 + 532);
        if ( (unsigned __int64)a1 + 532 >= MmUserProbeAddress )
          v19 = (_DWORD *)MmUserProbeAddress;
        *v19 = (_DWORD)v21;
        goto LABEL_11;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v13, v15);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Failed to acquire device access, returning 0x%I64x",
        (__int64)v13,
        v12,
        0LL,
        0LL,
        0LL);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v29);
    if ( v26 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v27);
  }
  else
  {
    LODWORD(v12) = -1073741811;
  }
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v23);
  return (unsigned int)v12;
}
