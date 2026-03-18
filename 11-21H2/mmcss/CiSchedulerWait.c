/*
 * XREFs of CiSchedulerWait @ 0x1C0001630
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002F80 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSleep @ 0x1C0001220 (CiSchedulerSleep.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001F80 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C00029D0 (CiSchedulerSetTaskIndexThreadTag.c)
 *     __security_check_cookie @ 0x1C0003170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00033D0 (_guard_dispatch_icall_nop.c)
 *     CiLogSchedulerEvent @ 0x1C0003F10 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003FFC (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0004080 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C00046A8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00048F4 (WPP_SF_d.c)
 */

char __fastcall CiSchedulerWait(__int64 a1, unsigned __int32 *a2)
{
  unsigned __int32 *v2; // r13
  unsigned int DpcData_high; // edx
  unsigned int v4; // ecx
  unsigned int v5; // r12d
  unsigned int v6; // edi
  char v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r14
  char v10; // bl
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // esi
  struct _DEVICE_OBJECT *SystemArgument1; // r8
  struct _DEVICE_OBJECT *NextDevice; // rcx
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // al
  unsigned __int32 v20; // esi
  int v21; // r15d
  int v22; // r12d
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 DeviceObjectExtension; // rbx
  bool v27; // zf
  unsigned __int64 v28; // r13
  __int64 *v29; // rsi
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  unsigned __int8 v32; // dl
  unsigned int v33; // r13d
  int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // r14
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rdx
  int v43; // eax
  ULONGLONG v44; // r13
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // rax
  const EVENT_DESCRIPTOR *v46; // rdx
  int v47; // [rsp+30h] [rbp-59h]
  int v48; // [rsp+34h] [rbp-55h]
  unsigned __int32 v49; // [rsp+38h] [rbp-51h]
  int v50; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-41h]
  unsigned __int32 *v52; // [rsp+50h] [rbp-39h]
  __int64 v53; // [rsp+58h] [rbp-31h] BYREF
  __int64 v54; // [rsp+60h] [rbp-29h] BYREF
  __int128 v55; // [rsp+68h] [rbp-21h] BYREF
  __int64 v56; // [rsp+78h] [rbp-11h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v58[2]; // [rsp+90h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+A0h] [rbp+17h] BYREF

  v2 = a2;
  v52 = a2;
  if ( CiThreadsMovedUp )
  {
    if ( CiSchedulerInLazyMode )
    {
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v4 = 2;
    }
    else
    {
      DpcData_high = (unsigned int)WPP_MAIN_CB.SecurityDescriptor;
      v4 = 1;
    }
    CiSchedulerSleep(v4, DpcData_high, v2);
    if ( (*v2 & 0xC) != 0 )
      return 0;
    while ( 1 )
    {
      if ( !CiSchedulerDisallowLazyMode )
      {
        v5 = byte_1C0007278;
        v6 = 0;
        CiPotentiallyStarvedProcessors = 0LL;
        if ( !byte_1C0007278 )
          goto LABEL_11;
        v7 = 0;
        v8 = 0LL;
        do
        {
          *((_QWORD *)&v55 + 1) = 0LL;
          v9 = v8 + CiLastIdleStats;
          v56 = 0LL;
          *(_QWORD *)&v55 = *(_QWORD *)(v8 + CiLastIdleStats);
          v10 = PoCpuIdledSinceLastCallImprecise(v6, &v55);
          *((_QWORD *)&v55 + 1) += (*(__int64 (__fastcall **)(_QWORD, __int64))(CiKernelInterface + 8))(v6, 1LL);
          *((_QWORD *)&v55 + 1) += (*(__int64 (__fastcall **)(_QWORD, __int64))(CiKernelInterface + 8))(v6, 2LL);
          *((_QWORD *)&v55 + 1) += (*(__int64 (__fastcall **)(_QWORD, __int64))(CiKernelInterface + 8))(v6, 3LL);
          v11 = (*(__int64 (__fastcall **)(_QWORD))(CiKernelInterface + 16))(v6) + v56;
          v56 = v11;
          if ( !v10 )
          {
            v40 = (unsigned __int64)(unsigned int)(100 - CiSystemResponsiveness) * (v11 - *(_QWORD *)(v9 + 16)) / 0x64;
            v41 = (90 * v40 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
            if ( *((_QWORD *)&v55 + 1) - *(_QWORD *)(v9 + 8) > (v41 + ((90 * v40 - v41) >> 1)) >> 6 )
              CiPotentiallyStarvedProcessors |= 1LL << v7;
          }
          ++v6;
          ++v7;
          v8 += 24LL;
          *(_OWORD *)v9 = v55;
          *(_QWORD *)(v9 + 16) = v56;
        }
        while ( v6 < v5 );
        v2 = v52;
        if ( CiPotentiallyStarvedProcessors )
          v12 = 0;
        else
LABEL_11:
          v12 = (2 * CiProcessorIdleHistoryBits) | 1;
        CiProcessorIdleHistoryBits = CiSchedulerIdleCycleBitMask & v12;
      }
      if ( !CiProcessorIdleHistoryBits )
      {
        if ( CiSchedulerInLazyMode )
        {
          CiSchedulerInLazyMode = 0;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_aa99675662263b3850e759e243765244_Traceguids);
        }
        return 0;
      }
      if ( CiProcessorIdleHistoryBits == CiSchedulerIdleCycleBitMask )
      {
        if ( !CiSchedulerInLazyMode )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              13LL,
              &WPP_aa99675662263b3850e759e243765244_Traceguids,
              HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
          CiSchedulerInLazyMode = 1;
        }
        v13 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
        v14 = 4;
      }
      else
      {
        v13 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
        v14 = 3;
      }
      if ( byte_1C00073C0 )
        CiLogSchedulerWakeup(*v2);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
      if ( CiSchedulerInLazyMode )
      {
        SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
        if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
LABEL_116:
          *v2 |= 0x80u;
          WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
          return 0;
        }
        while ( 1 )
        {
          NextDevice = SystemArgument1->NextDevice;
          if ( NextDevice != (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
            break;
LABEL_137:
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
          if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
            goto LABEL_116;
        }
        while ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
        {
          NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
          if ( NextDevice == (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
            goto LABEL_137;
        }
      }
      if ( qword_1C0007218 )
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
      v53 = 0LL;
      if ( CiSchedulerWaitStatus == 257 )
        v17 = KeQueryInterruptTimePrecise(&v53);
      else
        v17 = MEMORY[0xFFFFF78000000008];
      v18 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
      byte_1C0007224 = 0;
      qword_1C0007218 = v17 + v13;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
        {
LABEL_29:
          v19 = 0;
          goto LABEL_30;
        }
        v18 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
      }
      v19 = 0;
      if ( v18 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v18 + 24) > v17 + (unsigned __int64)v13 )
          {
            v39 = *(_QWORD *)v18;
            if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
            {
              if ( !v39 )
                goto LABEL_29;
              v39 ^= v18;
            }
            if ( !v39 )
              goto LABEL_29;
          }
          else
          {
            v39 = *(_QWORD *)(v18 + 8);
            if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
            {
              if ( !v39 )
                goto LABEL_104;
              v39 ^= v18;
            }
            if ( !v39 )
            {
LABEL_104:
              v19 = 1;
              break;
            }
          }
          v18 = v39;
        }
      }
LABEL_30:
      RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v18, v19, &WPP_MAIN_CB.Reserved);
      CiSchedulerUpdateTimer(v17);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      if ( byte_1C00073C0 )
        CiLogSchedulerSleep(v14);
      v20 = _InterlockedExchange(&CiSchedulerWakeupReason, 0);
      v49 = v20;
      while ( 2 )
      {
        if ( !v20 )
          CiSchedulerWaitStatus = KeWaitForSingleObject(
                                    *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                    Executive,
                                    0,
                                    1u,
                                    0LL);
        if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
          goto LABEL_81;
        v21 = 0;
        v22 = 0;
        v48 = 0;
        v54 = 0LL;
        if ( CiSchedulerWaitStatus == 257 )
          v23 = KeQueryInterruptTimePrecise(&v54);
        else
          v23 = MEMORY[0xFFFFF78000000008];
        v24 = v23 + 2000;
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
        CiSchedulerTimerNode = 2LL;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            goto LABEL_70;
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                       + 1);
        }
        else
        {
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
        }
        if ( !DeviceObjectExtension )
        {
LABEL_70:
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVOBJ_EXTENSION *)1 )
            {
              v36 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
LABEL_73:
              if ( v36 )
              {
                if ( v36 != CiSchedulerTimerNode )
                {
                  v37 = *(_QWORD *)(v36 + 24);
                  if ( v23 > v37 )
                  {
                    v38 = 0LL;
                  }
                  else
                  {
                    v38 = v23 - v37;
                    if ( v38 < -2000 )
                      v38 += 2000LL;
                  }
                  CiSchedulerTimerNode = v36;
                  ExSetTimer(
                    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                    v38,
                    0LL,
                    &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
                }
                goto LABEL_79;
              }
            }
            if ( CiSchedulerTimerNode != 1 )
            {
              CiSchedulerTimerNode = 1LL;
              ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
            }
            goto LABEL_79;
          }
          v36 = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
          goto LABEL_73;
        }
        while ( *(_QWORD *)(DeviceObjectExtension + 24) <= v24 )
        {
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
          v25 = 0LL;
          v27 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
          *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
          if ( !v27 )
          {
            v35 = 16;
            goto LABEL_63;
          }
          v47 = 0;
          if ( *(_BYTE *)(DeviceObjectExtension + 36) )
          {
            v28 = DeviceObjectExtension - 96;
            v51 = DeviceObjectExtension - 96;
          }
          else
          {
            v43 = *(_DWORD *)(DeviceObjectExtension + 128);
            v28 = DeviceObjectExtension - 56;
            v51 = DeviceObjectExtension - 56;
            if ( (v43 & 1) != 0 )
            {
              v48 = 1;
              ++CiTotalTasksDeadlineExpired;
              *(_DWORD *)(v28 + 184) = v43 | 4;
              v47 = 1;
            }
          }
          v29 = *(__int64 **)(v28 + 32);
          v30 = v28 + 32;
          if ( v29 != (__int64 *)(v28 + 32) )
          {
            do
            {
              if ( (*((_BYTE *)v29 + 68) & 1) == 0 )
              {
                if ( CiThreadsMovedUp )
                {
                  v31 = *(v29 - 1);
                  if ( *(_QWORD *)(v31 + 120) || !*(_BYTE *)(v31 + 132) && *(_QWORD *)(v31 + 80) )
                  {
                    v25 = *(unsigned __int8 *)(*(v29 - 2) + 40);
                    v32 = *(_BYTE *)(*(v29 - 2) + 40);
                    if ( (unsigned __int8)v25 > *((_BYTE *)v29 + 24) )
                      v32 = *((_BYTE *)v29 + 24);
                  }
                  else
                  {
                    v32 = *((_BYTE *)v29 + 24);
                  }
                }
                else
                {
                  v32 = *((_BYTE *)v29 + 26);
                }
                v33 = v32;
                if ( *((unsigned __int8 *)v29 + 27) != v32 )
                {
                  *((_BYTE *)v29 + 27) = v32;
                  if ( byte_1C00073C0 )
                    CiLogSchedulerEvent(v29 - 10, v32);
                  KeSetActualBasePriorityThread(v29[2], v33);
                }
              }
              v29 = (__int64 *)*v29;
            }
            while ( v29 != (__int64 *)v30 );
            v28 = v51;
            v24 = v23 + 2000;
          }
          v34 = *(_DWORD *)(v28 + 184);
          if ( (v34 & 2) == 0 )
            goto LABEL_59;
          if ( *(_BYTE *)(DeviceObjectExtension + 36) || !*(_BYTE *)(v28 + 132) || v47 )
          {
            *(_DWORD *)(v28 + 184) = v34 & 0xFFFFFFFD;
            CiSchedulerSetTaskIndexThreadTag(v28, 3LL);
            --CiTotalTasksBuffering;
LABEL_59:
            if ( v47 )
              CiSchedulerSetTaskIndexThreadTag(v28, 2LL);
          }
          if ( byte_1C00073C0 )
          {
            v44 = v28 + 144;
            if ( *(_BYTE *)(DeviceObjectExtension + 36) )
            {
              v58[0] = v44;
              p_UserData = (struct _EVENT_DATA_DESCRIPTOR *)v58;
              v58[1] = 4LL;
              v46 = &CiTaskIndexPreDeadlineExpiredEvent;
            }
            else
            {
              UserData.Ptr = v44;
              p_UserData = &UserData;
              *(_QWORD *)&UserData.Size = 4LL;
              v46 = &CiTaskIndexDeadlineExpiredEvent;
            }
            EtwWrite(RegHandle, v46, 0LL, 1u, p_UserData);
          }
          v35 = 32;
LABEL_63:
          v21 |= v35;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
          {
            if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
              break;
            DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                         + 1);
          }
          else
          {
            DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
          }
          if ( !DeviceObjectExtension )
            break;
        }
        v22 = v48;
        if ( (v21 & 0x20) != 0 )
        {
          if ( v48 )
          {
            if ( CiCurrentMediaBufferingState )
            {
              CiCurrentMediaBufferingState = 0;
              v25 = 0LL;
              goto LABEL_119;
            }
          }
          else
          {
            LOBYTE(v25) = CiTotalTasksBuffering != 0;
            if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
              && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
            {
              CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
LABEL_119:
              PoNotifyMediaBuffering(v25);
            }
          }
        }
        v20 = v49;
        if ( (v21 & 0x10) == 0 )
          goto LABEL_70;
LABEL_79:
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( v22 )
        {
          if ( byte_1C00073C0 )
          {
            v59.Ptr = (ULONGLONG)&v50;
            v50 = 1;
            *(_QWORD *)&v59.Size = 4LL;
            EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v59);
          }
          PoLatencySensitivityHint(4LL);
        }
        v20 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v21;
        if ( (v20 & 0xFFFFFFDF) == 0 )
        {
LABEL_81:
          if ( byte_1C00073C0 )
            CiLogSchedulerWakeup(v20);
          v20 = 0;
          v49 = 0;
          continue;
        }
        break;
      }
      v2 = v52;
      *v52 = v20;
      if ( (v20 & 0xC) != 0 )
        return 0;
    }
  }
  CiSchedulerSleep(0, HIDWORD(WPP_MAIN_CB.SecurityDescriptor), a2);
  return 1;
}
