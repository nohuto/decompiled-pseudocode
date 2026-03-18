/*
 * XREFs of NtDxgkUpdateTrackedWorkload @ 0x1C0346F60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0009300 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkGetDeviceStateInternal @ 0x1C017C6C0 (DxgkGetDeviceStateInternal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE@@@Z @ 0x1C03446AC (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@PEAPEAVDXGDEVICE.c)
 *     ??1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ @ 0x1C0344A1C (--1DXGTRACKEDWORKLOADBYHANDLE@@QEAA@XZ.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03451D4 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C0345B20 (-ReportStats@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C0345DD8 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 */

__int64 __fastcall NtDxgkUpdateTrackedWorkload(struct DXGDEVICE *a1)
{
  unsigned int *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  DXGTRACKEDWORKLOAD *v11; // rbx
  __int64 v12; // rdi
  struct DXGDEVICE *v13; // rsi
  __int64 v14; // r9
  int v15; // eax
  struct COREDEVICEACCESS *v16; // r8
  unsigned __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  int DeviceStateInternal; // eax
  struct DXGDEVICE *v22; // rdx
  int v23; // eax
  _DWORD *v24; // rdx
  _BYTE v25[8]; // [rsp+50h] [rbp-468h] BYREF
  __int64 v26; // [rsp+58h] [rbp-460h]
  char v27; // [rsp+60h] [rbp-458h]
  struct DXGDEVICE *v28; // [rsp+68h] [rbp-450h] BYREF
  int v29; // [rsp+70h] [rbp-448h]
  DXGTRACKEDWORKLOAD *v30[2]; // [rsp+78h] [rbp-440h] BYREF
  DXGTRACKEDWORKLOAD *v31; // [rsp+88h] [rbp-430h] BYREF
  _BYTE v32[16]; // [rsp+90h] [rbp-428h] BYREF
  struct DXGDEVICE *v33[2]; // [rsp+A0h] [rbp-418h] BYREF
  _OWORD v34[2]; // [rsp+B0h] [rbp-408h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-3E8h]
  __int64 v36; // [rsp+E0h] [rbp-3D8h]
  _BYTE v37[600]; // [rsp+F0h] [rbp-3C8h] BYREF
  _BYTE v38[160]; // [rsp+350h] [rbp-168h] BYREF
  _BYTE v39[160]; // [rsp+3F0h] [rbp-C8h] BYREF

  v33[1] = a1;
  memset(v37, 0, sizeof(v37));
  v2 = (unsigned int *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (unsigned int *)MmUserProbeAddress;
  v3 = *v2;
  if ( (unsigned int)v3 < 0x258 )
  {
    WdLogSingleEntry1(3LL, 568LL);
    return 3221225485LL;
  }
  if ( (unsigned int)v3 > 0x258 )
    v3 = 600LL;
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  memmove(v37, v5, v3);
  v33[0] = 0LL;
  v31 = 0LL;
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)v30,
    *(unsigned int *)&v37[4],
    Current,
    &v31,
    v33);
  v11 = v31;
  if ( v31 )
  {
    v13 = v33[0];
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v32,
      v33[0]);
    v26 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
    v27 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v13, 0, v14, 0);
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38, 0LL);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v17 = (unsigned __int64 *)&v37[80];
      if ( *((_DWORD *)v11 + 21) )
        v17 = 0LL;
      LODWORD(v12) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v11, v13, v16, *(unsigned __int64 *)&v37[48], v17);
      if ( (int)v12 < 0 )
        goto LABEL_14;
      v20 = 0LL;
      if ( *((_DWORD *)v11 + 286) == 1 )
      {
        memset(v34, 0, sizeof(v34));
        v35 = 0LL;
        v36 = 0LL;
        LODWORD(v34[0]) = *((_DWORD *)v13 + 109);
        DWORD1(v34[0]) = 4;
        DeviceStateInternal = DxgkGetDeviceStateInternal((ULONG64)v34, 0, v18);
        LODWORD(v12) = DeviceStateInternal;
        if ( DeviceStateInternal < 0 )
        {
          WdLogSingleEntry2(3LL, DeviceStateInternal, 631LL);
          goto LABEL_14;
        }
        v20 = (unsigned int)(v35 + 1);
      }
      v28 = v13;
      v29 = 0;
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v13, 0, v19, 0);
      if ( *((_DWORD *)v11 + 286) == 1
        && (DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28),
            v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39, 0LL),
            v12 = v23,
            v23 < 0) )
      {
        WdLogSingleEntry2(2LL, v13, v23);
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
      else
      {
        LODWORD(v12) = DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
                         v11,
                         v22,
                         (const struct _D3DKMT_UPDATETRACKEDWORKLOAD *)v37,
                         v20);
        if ( (int)v12 >= 0 )
        {
          DXGTRACKEDWORKLOAD::ReportStats(v11);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
          if ( v28 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28);
          LODWORD(v31) = 1;
          v24 = (_DWORD *)((char *)a1 + 592);
          if ( (unsigned __int64)a1 + 592 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = 1;
          goto LABEL_14;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
      if ( v28 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28);
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
LABEL_14:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    if ( v27 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v32);
    goto LABEL_11;
  }
  LODWORD(v12) = -1073741811;
LABEL_11:
  DXGTRACKEDWORKLOADBYHANDLE::~DXGTRACKEDWORKLOADBYHANDLE(v30);
  return (unsigned int)v12;
}
