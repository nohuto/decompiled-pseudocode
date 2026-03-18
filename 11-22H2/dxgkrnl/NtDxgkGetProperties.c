/*
 * XREFs of NtDxgkGetProperties @ 0x1C01A82A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     Feature_3285488955__private_IsEnabledDeviceUsage @ 0x1C0025E10 (Feature_3285488955__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C01DEC8C (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x1C02305D2 (-PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1C0314630 (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE@@_N@Z @ 0x1C0314818 (-ProcessBoostedVSyncEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_BOOST_VS.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C03148CC (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x1C03149CC (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 */

__int64 __fastcall NtDxgkGetProperties(ULONG64 a1)
{
  int v1; // edi
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  char *v4; // r15
  __int64 result; // rax
  int v6; // r13d
  unsigned int v7; // ebx
  __int64 v8; // r12
  _DWORD *Pool2; // rsi
  size_t v10; // r14
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v14; // r12
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v16; // rcx
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  unsigned int v19; // eax
  unsigned int v20; // ebx
  char *v21; // rcx
  _DWORD *v22; // [rsp+58h] [rbp-80h]
  __int128 v24; // [rsp+70h] [rbp-68h]
  _BYTE *P; // [rsp+98h] [rbp-40h]
  _BYTE v26[4]; // [rsp+A0h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+A4h] [rbp-34h]

  v1 = 0;
  P = 0LL;
  v27 = 0;
  v2 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (_OWORD *)MmUserProbeAddress;
  v24 = *v2;
  v3 = v2[1];
  v4 = (char *)*((_QWORD *)v2 + 2);
  if ( (_QWORD)v3 && DWORD1(v24) && !DWORD2(v24) )
  {
    v6 = *v2;
    switch ( (int)v24 )
    {
      case 0:
      case 1:
      case 2:
      case 5:
        v7 = 16;
        goto LABEL_12;
      case 3:
        v7 = 32;
        goto LABEL_12;
      case 4:
        v7 = 64;
LABEL_12:
        if ( DWORD1(v24) < v7 )
        {
          WdLogSingleEntry2(2LL, (int)v24, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
            (int)v24,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          v27 = 0;
          return 3221225485LL;
        }
        v8 = v7;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v7 )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, v7, 1265072196LL);
          P = Pool2;
          v27 = v7;
          v22 = Pool2;
          v8 = v7;
        }
        else
        {
          Pool2 = 0LL;
          v22 = 0LL;
        }
        v10 = v7;
        if ( !Pool2 )
        {
          WdLogSingleEntry2(2LL, v7, -1073741801LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
            v8,
            -1073741801LL,
            0LL,
            0LL,
            0LL);
          if ( P != v26 )
          {
            if ( P )
              ExFreePoolWithTag(P, 0);
          }
          v27 = 0;
          return 3221225495LL;
        }
        if ( v7 + (unsigned __int64)v3 < (unsigned __int64)v3 || v7 + (unsigned __int64)v3 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(Pool2, (const void *)v3, v7);
        CurrentProcess = PsGetCurrentProcess(v11);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        v14 = (struct DXGPROCESS *)ProcessDxgProcess;
        if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
          goto LABEL_32;
        Current = DXGTHREAD::GetCurrent();
        if ( Current )
        {
          v16 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
          if ( !v16 )
            v16 = v14;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
          v16 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
          if ( v16 )
          {
            v4 = (char *)v3;
            v6 = v24;
            Pool2 = v22;
          }
          else
          {
            WdLogSingleEntry1(2LL, 2923LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to find DXGPROCESS",
              2923LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v4 = (char *)v3;
            v6 = v24;
            Pool2 = v22;
LABEL_32:
            v16 = v14;
          }
        }
        switch ( v6 )
        {
          case 0:
            v19 = ProcessVrrEligibleProperty(v16, (struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *)Pool2, 0);
            goto LABEL_43;
          case 1:
            v19 = ProcessUserPreferredAdapterProperty(
                    v16,
                    (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                    0);
            goto LABEL_43;
          case 2:
            v19 = ProcessDefaultHighPerformanceAdapterProperty(
                    v16,
                    (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                    0);
            goto LABEL_43;
          case 3:
            v19 = PresentDurationPlaneProperty(v16, (struct _D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE *)Pool2, 0);
            goto LABEL_43;
          case 4:
            if ( Pool2[2] >= 0x38u )
            {
              v19 = PresentStatsDwm2Property(v16, (struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *)Pool2);
LABEL_43:
              v20 = v19;
              LOBYTE(v1) = (unsigned int)Feature_3285488955__private_IsEnabledDeviceUsage() != 0;
              if ( v1 )
              {
                if ( (unsigned __int64)&v4[v10] > MmUserProbeAddress || &v4[v10] <= v4 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                v21 = v4;
              }
              else
              {
                v21 = *(char **)(a1 + 16);
                if ( (unsigned __int64)&v21[v10] > MmUserProbeAddress || &v21[v10] <= v21 )
                  *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(v21, Pool2, v10);
              if ( P != v26 && P )
                ExFreePoolWithTag(P, 0);
              result = v20;
            }
            else
            {
              WdLogSingleEntry1(2LL, -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid cbSize specified of PresentStatsDwm2 , returning 0x%I64x",
                -1073741811LL,
                0LL,
                0LL,
                0LL,
                0LL);
              if ( P != v26 && P )
                ExFreePoolWithTag(P, 0);
              result = 3221225485LL;
            }
            break;
          case 5:
            v19 = ProcessBoostedVSyncEligibleProperty(
                    v16,
                    (struct _D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE *)Pool2,
                    0);
            goto LABEL_43;
        }
        break;
      default:
        WdLogSingleEntry1(2LL, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    v27 = 0;
    return 3221225485LL;
  }
  return result;
}
