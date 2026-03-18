/*
 * XREFs of VidSchiCreateDeviceInternal @ 0x1C0098844
 * Callers:
 *     VidSchCreateDevice @ 0x1C0098C70 (VidSchCreateDevice.c)
 *     VidSchCreateSystemDevices @ 0x1C00B80AC (VidSchCreateSystemDevices.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiIncrementDeviceReference @ 0x1C0013520 (VidSchiIncrementDeviceReference.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x1C0018B90 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C001CD38 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x1C003C0A8 (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C0097FF0 (VidSchiOpenProcessAdapterInfo.c)
 *     VidSchSetQueuedPresentLimit @ 0x1C0098B60 (VidSchSetQueuedPresentLimit.c)
 *     VidSchiReadDeviceConfiguration @ 0x1C0098BB4 (VidSchiReadDeviceConfiguration.c)
 *     VidSchTerminateDevice @ 0x1C0098CB0 (VidSchTerminateDevice.c)
 *     VidSchControlVSyncDevice @ 0x1C00A3490 (VidSchControlVSyncDevice.c)
 */

__int64 __fastcall VidSchiCreateDeviceInternal(__int64 a1, __int128 *a2, __int64 a3, __int64 *a4)
{
  struct DXGPROCESS *Current; // r15
  __int64 Pool2; // rax
  __int64 v10; // rbx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r8
  int v17; // ecx
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // edx
  void *KmdProcessHandle; // rax
  ADAPTER_RENDER *v23; // rcx
  bool v24; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // edi
  int v29; // eax
  _DXGKARG_CREATEDEVICE v30; // [rsp+70h] [rbp-48h] BYREF

  *a4 = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    Current = *(struct DXGPROCESS **)(g_pVidSchSystemProcess + 8);
  }
  else
  {
    if ( !a3 )
    {
      WdLogSingleEntry0(3LL);
      return 3221225485LL;
    }
    Current = DXGPROCESS::GetCurrent();
  }
  Pool2 = ExAllocatePool2(64LL, 1712LL, 862021974LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 862021974;
    *(_QWORD *)(Pool2 + 8) = a3;
    ExInitializeResourceLite((PERESOURCE)(Pool2 + 968));
    v11 = *a2;
    *(_DWORD *)(v10 + 504) = -1;
    v12 = *((_QWORD *)a2 + 2);
    *(_OWORD *)(v10 + 48) = v11;
    *(_QWORD *)(v10 + 32) = a1;
    *(_QWORD *)(v10 + 64) = v12;
    VidSchiReadDeviceConfiguration(v10);
    *(_QWORD *)(v10 + 80) = v10 + 72;
    *(_QWORD *)(v10 + 72) = v10 + 72;
    *(_QWORD *)(v10 + 96) = v10 + 88;
    *(_QWORD *)(v10 + 88) = v10 + 88;
    *(_QWORD *)(v10 + 1616) = v10 + 1608;
    *(_QWORD *)(v10 + 1608) = v10 + 1608;
    *(_QWORD *)(v10 + 128) = v10 + 120;
    *(_QWORD *)(v10 + 120) = v10 + 120;
    *(_QWORD *)(v10 + 144) = v10 + 136;
    *(_QWORD *)(v10 + 136) = v10 + 136;
    *(_QWORD *)(v10 + 160) = v10 + 152;
    *(_QWORD *)(v10 + 152) = v10 + 152;
    *(_QWORD *)(v10 + 176) = v10 + 168;
    *(_QWORD *)(v10 + 168) = v10 + 168;
    VidSchSetQueuedPresentLimit(v10, 0LL);
    memset64((void *)(v10 + 376), 1uLL, 0x10uLL);
    VidSchiIncrementDeviceReference(v10);
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1728), a1 + 296, (_QWORD *)(v10 + 104), 0LL);
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      v20 = g_pVidSchSystemProcess;
      *(_QWORD *)(v10 + 40) = g_pVidSchSystemProcess;
      v13 = v20;
    }
    else
    {
      v13 = *((_QWORD *)Current + 8);
      if ( v13 )
        v13 = *(_QWORD *)(v13 + 24);
      *(_QWORD *)(v10 + 40) = v13;
    }
    v14 = *(_DWORD *)(*(_QWORD *)(v13 + 2624) + 4 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5));
    if ( _bittest(&v14, *(_DWORD *)(a1 + 4) & 0x1F) )
    {
      LODWORD(v15) = -1073741790;
      goto LABEL_30;
    }
    LODWORD(v15) = VidSchiOpenProcessAdapterInfo(v13, a1);
    if ( (int)v15 >= 0 )
    {
      v17 = *(_DWORD *)a2;
      *(_BYTE *)(v10 + 240) = 1;
      if ( (v17 & 1) != 0 )
      {
        v21 = *(_DWORD *)(a1 + 4);
        memset(&v30, 0, 24);
        v30.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 1;
        KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(Current, v21);
        v23 = *(ADAPTER_RENDER **)(a1 + 8);
        v30.hKmdProcess = KmdProcessHandle;
        LODWORD(v15) = ADAPTER_RENDER::DdiCreateDevice(v23, &v30);
        if ( (int)v15 < 0 )
          goto LABEL_30;
        v24 = bTracingEnabled == 0;
        *(_QWORD *)(v10 + 16) = v30.hDevice;
        if ( !v24 )
        {
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (byte_1C006E941 & 4) != 0 )
            McTemplateK0ppqpttqpqp_EtwWriteTransfer(
              v26,
              &EventCreateDevice,
              v16,
              CurrentProcessId,
              *(_QWORD *)(a1 + 16));
        }
      }
      else
      {
        *(_QWORD *)(v10 + 16) = *(_QWORD *)(a3 + 584);
      }
      if ( (*(_DWORD *)(v10 + 48) & 2) == 0 )
      {
LABEL_14:
        *a4 = v10;
        return (unsigned int)v15;
      }
      if ( *(_BYTE *)(a1 + 2212) )
      {
        v28 = 0;
        if ( !*(_DWORD *)(a1 + 40) )
          goto LABEL_14;
        while ( 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v28 + 3200) + 4LL) )
          {
            LOBYTE(v16) = 1;
            v29 = VidSchControlVSyncDevice(v10, 2LL, v16, v28);
            v15 = v29;
            if ( v29 < 0 )
              break;
          }
          if ( ++v28 >= *(_DWORD *)(a1 + 40) )
            goto LABEL_14;
        }
      }
      else
      {
        LOBYTE(v16) = 1;
        v19 = VidSchControlVSyncDevice(v10, 2LL, v16, 4294967293LL);
        v15 = v19;
        if ( v19 >= 0 )
          goto LABEL_14;
      }
      WdLogSingleEntry1(1LL, v15);
      DxgkLogInternalTriageEvent(v27, 0x40000LL);
    }
LABEL_30:
    VidSchTerminateDevice((PVOID)v10);
    return (unsigned int)v15;
  }
  WdLogSingleEntry0(3LL);
  return 3221225495LL;
}
