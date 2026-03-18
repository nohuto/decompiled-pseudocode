/*
 * XREFs of DpiGdoDispatchInternalIoctl @ 0x1C01AAA60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EE4 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C0170670 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C017ADDC (DxgkUseAdapterViewInCurrentSession.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0198444 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01984C8 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01988F0 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1C019AAE0 (-DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C019D0F4 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C019E0C4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01AB024 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C01E812C (-DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01EFB34 (DxgkPowerOnOffMonitor.c)
 */

__int64 __fastcall DpiGdoDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v4; // r15
  __int64 v5; // rbx
  _DWORD *UserBuffer; // r12
  __int64 v7; // rdi
  unsigned int Length; // r9d
  __m128i *Parameters; // rsi
  __int64 v10; // r14
  char *v11; // rsi
  int v12; // eax
  int AllMonitorDevicesFromSessionView; // eax
  char v14; // r13
  int v15; // edi
  char *Pool2; // rax
  unsigned int v17; // r13d
  __int64 v18; // r8
  __int64 *v19; // rdi
  char *v20; // r13
  char v21; // r12
  int v22; // esi
  int v23; // edx
  DXGADAPTER *v24; // rcx
  int v25; // eax
  __int64 v26; // rdi
  PIRP v27; // rcx
  bool v29; // zf
  int CurrentProcessSessionId; // r12d
  int v31; // eax
  int v32; // eax
  unsigned int v33; // edx
  void *v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // [rsp+30h] [rbp-38h]
  unsigned int v45; // [rsp+30h] [rbp-38h]
  _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v46; // [rsp+34h] [rbp-34h] BYREF
  size_t Size; // [rsp+38h] [rbp-30h]
  _DWORD *v48; // [rsp+40h] [rbp-28h]
  int v49[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v50; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v52; // [rsp+C0h] [rbp+58h] BYREF
  int v53; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v50 = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  UserBuffer = a2->UserBuffer;
  LODWORD(v7) = -1073741637;
  v48 = UserBuffer;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Parameters = (__m128i *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301967 )
  {
    v38 = *Parameters;
    v39 = *(_QWORD *)(v10 + 24);
    LODWORD(v50) = -1;
    *(__m128i *)v49 = v38;
    v40 = DxgkPowerOnOffMonitor(
            v39,
            1,
            (int)&v50,
            (int)v49,
            1,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)_mm_srli_si128(v38, 8).m128i_i64[0]);
    v7 = v40;
    if ( v40 >= 0 )
      goto LABEL_26;
    goto LABEL_76;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301979 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2301983 )
    {
      *(_QWORD *)(v4 + 184) = Parameters->m128i_i64[0];
      Parameters[1].m128i_i32[0] = *(unsigned __int8 *)(v10 + 1157);
      Parameters[1].m128i_i64[1] = *(_QWORD *)(v10 + 152);
      Parameters[2].m128i_i32[0] = 0;
      if ( !*(_DWORD *)(v4 + 156) )
      {
        v35 = 0;
        if ( *(_BYTE *)(v10 + 1152) == 1 )
          v35 = 0x20000000;
        Parameters[2].m128i_i32[0] = v35;
      }
      LODWORD(v7) = 0;
      v5 = 40LL;
      goto LABEL_26;
    }
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2301995 )
    {
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 2302003 )
      {
        if ( Length >= 0x20 && UserBuffer )
        {
          LODWORD(v7) = 0;
          v5 = 32LL;
          *UserBuffer = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 24LL);
          UserBuffer[1] = *(_DWORD *)(v4 + 156);
          *((_QWORD *)UserBuffer + 1) = *(_QWORD *)(v10 + 3912);
          *((_QWORD *)UserBuffer + 2) = *(_QWORD *)(*(_QWORD *)(v10 + 3912) + 404LL);
          *((_QWORD *)UserBuffer + 3) = *(_QWORD *)(*(_QWORD *)(v10 + 3912) + 4636LL);
          goto LABEL_26;
        }
      }
      else
      {
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2302019 )
          goto LABEL_26;
        if ( Length >= 8 && UserBuffer )
        {
          LODWORD(v50) = 0;
          v52 = D3DDDI_VSSLO_UNINITIALIZED;
          LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(a1, 1);
          if ( (int)v7 < 0 )
            goto LABEL_26;
          LODWORD(v7) = DmmGetCurrentIntegerVSyncFromClientVidPnSource(
                          *(DXGADAPTER **)(v10 + 3912),
                          *(_DWORD *)(v4 + 156),
                          (unsigned int *)&v50,
                          &v52);
          DpiReleaseCoreSyncAccessSafe(a1, 1);
          if ( (int)v7 >= 0 )
          {
            v29 = v52 == D3DDDI_VSSLO_PROGRESSIVE;
            *UserBuffer = v50;
            *((_BYTE *)UserBuffer + 4) = v29;
            goto LABEL_26;
          }
          v36 = *(unsigned int *)(v4 + 156);
          v37 = 3LL;
LABEL_61:
          WdLogSingleEntry1(v37, v36);
          goto LABEL_26;
        }
      }
LABEL_64:
      LODWORD(v7) = -1073741789;
      goto LABEL_26;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 8 || !Parameters )
      goto LABEL_64;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 2301995);
    if ( Parameters->m128i_i32[0] == 1 )
    {
      v31 = *(_DWORD *)(v4 + 192);
      if ( v31 != -1 && v31 != CurrentProcessSessionId )
      {
        v41 = -1073741637LL;
LABEL_68:
        WdLogSingleEntry1(3LL, v41);
        goto LABEL_69;
      }
      if ( (int)DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672), *(_DWORD *)(v4 + 156), 1) < 0 )
      {
LABEL_69:
        Parameters->m128i_i32[1] = 0;
        goto LABEL_45;
      }
      *(_DWORD *)(v4 + 192) = CurrentProcessSessionId;
    }
    else
    {
      v32 = DxgkUseAdapterViewInCurrentSession((struct _LUID *)(v10 + 2672), *(_DWORD *)(v4 + 156), 0);
      if ( *(_DWORD *)(v4 + 192) != CurrentProcessSessionId )
      {
        v41 = v32;
        goto LABEL_68;
      }
      *(_DWORD *)(v4 + 192) = -1;
    }
    Parameters->m128i_i32[1] = 1;
LABEL_45:
    LODWORD(v7) = 0;
    goto LABEL_26;
  }
  v53 = 0;
  v11 = 0LL;
  LOBYTE(v52) = 0;
  v12 = DxgkAcquireSessionModeChangeLock(0);
  v7 = v12;
  if ( v12 < 0 )
  {
LABEL_76:
    v37 = 2LL;
    v36 = v7;
    goto LABEL_61;
  }
  AllMonitorDevicesFromSessionView = DxgkGetAllMonitorDevicesFromSessionView((struct _LUID *)(v10 + 2672), 0LL);
  LODWORD(v7) = AllMonitorDevicesFromSessionView;
  if ( (int)(AllMonitorDevicesFromSessionView + 0x80000000) >= 0 && AllMonitorDevicesFromSessionView != -2147483643 )
  {
    v42 = AllMonitorDevicesFromSessionView;
    v43 = 2LL;
LABEL_71:
    WdLogSingleEntry1(v43, v42);
LABEL_74:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_26;
  }
  v14 = v52;
  v15 = ((_BYTE)v52 != D3DDDI_VSSLO_UNINITIALIZED ? v53 : 0) + *(_DWORD *)(v10 + 3680);
  if ( !v15 )
    goto LABEL_25;
  v46 = D3DKMDT_VOT_HD15;
  LOBYTE(v53) = 0;
  Size = (unsigned int)(20 * (v15 + 1));
  Pool2 = (char *)ExAllocatePool2(256LL, Size, 1953656900LL);
  *(_QWORD *)v49 = Pool2;
  v11 = Pool2;
  if ( !Pool2 )
  {
    v42 = -1073741801LL;
    LODWORD(v7) = -1073741801;
    v43 = 6LL;
    goto LABEL_71;
  }
  memset(Pool2, 0, (unsigned int)Size);
  if ( v14 )
  {
    v44 = v15;
    LODWORD(v7) = DxgkGetAllMonitorDevicesFromSessionView((struct _LUID *)(v10 + 2672), (__int64)v11);
    if ( (int)v7 < 0 )
    {
LABEL_73:
      ExFreePoolWithTag(v11, 0);
      goto LABEL_74;
    }
    v17 = v44;
  }
  else
  {
    v17 = 0;
  }
  KeEnterCriticalRegion();
  Size = v10 + 3320;
  ExAcquireResourceSharedLite((PERESOURCE)(v10 + 3320), 1u);
  LODWORD(v7) = DpiAcquireCoreSyncAccessSafe(v50, 0);
  if ( (int)v7 < 0 )
  {
    ExReleaseResourceLite((PERESOURCE)Size);
    KeLeaveCriticalRegion();
    goto LABEL_73;
  }
  v19 = *(__int64 **)(v10 + 3664);
  v20 = &v11[20 * v17];
  if ( !*(_DWORD *)(v10 + 3680) )
    goto LABEL_22;
  v21 = v52;
  v22 = 0;
  while ( *v19 != *(_QWORD *)(v10 + 3664) )
  {
    if ( *((_DWORD *)v19 + 124) != 1 || *((_BYTE *)v19 + 510) != 1 )
      goto LABEL_20;
    v45 = *((_DWORD *)v19 + 126);
    DmmGetVideoOutputTechnology(*(_QWORD **)(v10 + 3912), v45, &v46, 0LL);
    v20[16] = IsInternalVideoOutput(v46);
    v23 = *(_DWORD *)(v4 + 156);
    v24 = *(DXGADAPTER **)(v10 + 3912);
    LOBYTE(v53) = 0;
    DmmIsPresentPathInClientVidPnTopology(v24, v23, v45, (bool *)&v53);
    if ( !(_BYTE)v53 )
    {
      if ( !*((_BYTE *)v19 + 944) )
        goto LABEL_20;
      v33 = *(_DWORD *)(v4 + 156);
      v34 = *(void **)(v10 + 3912);
      LOBYTE(v52) = 0;
      if ( DmmCanAddPresentPathToClientVidPn(v34, v33, v45, (unsigned __int8 *)&v52) < 0 || !(_BYTE)v52 )
        goto LABEL_20;
      v25 = 0;
      goto LABEL_19;
    }
    if ( v21 )
    {
      v25 = 1;
LABEL_19:
      *(_DWORD *)v20 = v25 | 0x20000000;
      *((_DWORD *)v20 + 1) = v45;
      *((_QWORD *)v20 + 1) = *(_QWORD *)(v10 + 2672);
      v20 += 20;
    }
LABEL_20:
    v19 = (__int64 *)*v19;
    if ( (unsigned int)++v22 >= *(_DWORD *)(v10 + 3680) )
      break;
  }
  UserBuffer = v48;
  v11 = *(char **)v49;
LABEL_22:
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 64) + 32LL) + 64LL);
  if ( *(_BYTE *)(v26 + 482) )
    DpiEnableD3Requests(*(_QWORD *)(v26 + 24));
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v26 + 3912), 1u, v18);
  ExReleaseResourceLite((PERESOURCE)(v26 + 3808));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite((PERESOURCE)Size);
  KeLeaveCriticalRegion();
LABEL_25:
  DxgkReleaseSessionModeChangeLock();
  LODWORD(v7) = 0;
  *(_QWORD *)UserBuffer = v11;
  v5 = 8LL;
LABEL_26:
  v27 = Irp;
  Irp->IoStatus.Status = v7;
  v27->IoStatus.Information = v5;
  IofCompleteRequest(v27, 1);
  return (unsigned int)v7;
}
