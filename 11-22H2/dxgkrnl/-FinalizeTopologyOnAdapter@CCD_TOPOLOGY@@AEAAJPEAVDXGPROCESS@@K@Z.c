/*
 * XREFs of ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C01E00A0
 * Callers:
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01DFF88 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000538C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000778C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0007850 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C01E02A0 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01E5564 (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01EA2C8 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0356970 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03B1B84 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopologyOnAdapter(CCD_TOPOLOGY *this, struct DXGPROCESS *a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  unsigned int v8; // ebx
  __int64 v9; // r15
  __int64 v10; // r9
  __int64 v11; // r12
  unsigned int v12; // r14d
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  __int64 v19; // r10
  int v20; // eax
  int v21; // eax
  DXGDEVICE *v22; // [rsp+38h] [rbp-C8h] BYREF
  DXGDEVICE *v23; // [rsp+40h] [rbp-C0h]
  _BYTE v24[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  _BYTE v27[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[88]; // [rsp+B8h] [rbp-48h] BYREF

  v3 = 0LL;
  v22 = 0LL;
  v26 = a3;
  v6 = 340LL * a3;
  while ( 1 )
  {
    if ( v3 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
        (struct DXGDEVICE *)v3);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
      v22 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                                             &v22,
                                             0LL,
                                             0LL,
                                             0);
    v8 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6),
        CddDeviceAndContextForCurrentSession);
      return v8;
    }
    v3 = (volatile signed __int64 *)v22;
    v23 = v22;
    v9 = *((_QWORD *)v22 + 235);
    if ( !v9 )
      break;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27, v22);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGPROCESS *)((char *)a2 + 376), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v3, 1, v10, 0);
    v11 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v28, 2LL);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v3) )
    {
      if ( (int)v11 < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6 + 4),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6),
          *((_QWORD *)this + 8),
          v11);
      }
      else
      {
        v12 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v9 + 2920) + 96LL) )
        {
          v13 = 1;
          do
          {
            v14 = *((_QWORD *)this + 8);
            v15 = (unsigned int)(1 << v12);
            v16 = *(_QWORD *)(v14 + 48);
            if ( ((unsigned int)v15 & *(_DWORD *)(v16 + v6 + 84)) != 0 )
            {
              v19 = v12 + 85 * v26;
              v20 = *(_DWORD *)(296LL * *(unsigned int *)(v16 + 4 * v19 + 8) + v14 + 248);
              if ( v20 < 0 )
              {
                *(_DWORD *)(v16 + 4 * v19 + 168) = v20;
                v13 = 0;
                *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6 + 164) |= v15;
                v21 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(*(ADAPTER_DISPLAY **)(v9 + 2920), v12);
                LODWORD(v11) = v21;
                if ( v21 < 0 )
                  WdLogSingleEntry4(
                    2LL,
                    v12,
                    *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6 + 4),
                    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6),
                    v21);
                DxgkRemoveSessionViewForCurrentSession(
                  (struct _LUID *)(v6 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                  v12,
                  0);
                v14 = *((_QWORD *)this + 8);
              }
            }
            ++v12;
          }
          while ( v12 < *(_DWORD *)(*(_QWORD *)(v9 + 2920) + 96LL) );
          v17 = v13 == 0;
          v3 = (volatile signed __int64 *)v23;
          if ( v17 )
            DmmDisableAllFailurePathsOnAdapter(v9, *(unsigned int *)(*(_QWORD *)(v14 + 48) + v6 + 164), v15, v23);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      COREACCESS::~COREACCESS((COREACCESS *)v29);
      if ( v25 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
      if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
      return (unsigned int)v11;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    if ( v25 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
  }
  WdLogSingleEntry4(
    2LL,
    v22,
    *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6 + 4),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v6),
    -1073741811LL);
  if ( _InterlockedExchangeAdd64(v3 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
  return 3221225485LL;
}
