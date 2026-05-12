/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x1C0017AEC
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000C7B4 (StorUpdateCrashDumpPowerReady.c)
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     RaSendIrpSynchronous @ 0x1C00145D0 (RaSendIrpSynchronous.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019338 (_tlgCreate1Sz_wchar_t.c)
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002017C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0064B18 (RaidSecondaryDumpDeregister.c)
 *     RaidSecondaryDumpRegister @ 0x1C0064B60 (RaidSecondaryDumpRegister.c)
 *     RaidNotifyPoAboutSpecialDevice @ 0x1C00657A4 (RaidNotifyPoAboutSpecialDevice.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  volatile signed __int32 *v4; // r14
  char v5; // r15
  int v6; // eax
  unsigned int Options; // r12d
  unsigned __int8 Lock; // dl
  PIRP v9; // rax
  __int64 v10; // r8
  IRP *v11; // r13
  signed int Status; // edi
  _IO_STACK_LOCATION *v13; // rcx
  _IO_STACK_LOCATION *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  unsigned __int8 v24; // [rsp+30h] [rbp-D0h]
  char v25; // [rsp+31h] [rbp-CFh] BYREF
  char v26; // [rsp+32h] [rbp-CEh] BYREF
  char v27; // [rsp+33h] [rbp-CDh] BYREF
  char v28; // [rsp+34h] [rbp-CCh] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+40h] [rbp-C0h]
  __int128 v31; // [rsp+48h] [rbp-B8h] BYREF
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+58h] [rbp-A8h]
  __int128 v33; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  char *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  char v47[16]; // [rsp+F0h] [rbp-10h] BYREF
  char *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  char v50[16]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  Irp = a2;
  v4 = 0LL;
  v5 = 0;
  v31 = 0LL;
  v33 = 0LL;
  if ( !v2 || (v6 = *(_DWORD *)(a1 + 48)) == 0 || (unsigned int)(v6 - 5) <= 1 )
  {
    Status = -1073741810;
    goto LABEL_25;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  v24 = Lock;
  if ( Options == 1 )
  {
    v4 = (volatile signed __int32 *)(a1 + 916);
  }
  else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
  {
    v4 = (volatile signed __int32 *)(a1 + 924);
  }
  else
  {
    v17 = CurrentStackLocation->Parameters.Create.Options - 3;
    if ( CurrentStackLocation->Parameters.Create.Options != 3 )
    {
      if ( CurrentStackLocation->Parameters.Create.Options == 4 )
      {
        v18 = *(_BYTE *)(a1 + 450);
        if ( Lock )
        {
          *(_BYTE *)(a1 + 450) = v18 | 1;
          *(_BYTE *)(v2 + 104) |= 0x80u;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4804LL) )
            RaidSecondaryDumpRegister(a1);
          if ( (unsigned int)dword_1C0079058 > 5 && tlgKeywordOn(v17, 0x400000000000LL) )
          {
            v19 = *(_QWORD *)(v2 + 4592);
            v35 = v2 + 4936;
            v36 = 16LL;
            v37 = a1 + 1976;
            v29 = *(_DWORD *)(v2 + 56);
            v39 = &v29;
            v25 = *(_BYTE *)(a1 + 96);
            v41 = &v25;
            v26 = *(_BYTE *)(a1 + 97);
            v43 = &v26;
            v27 = *(_BYTE *)(a1 + 98);
            v45 = &v27;
            v38 = 16LL;
            v40 = 4LL;
            v42 = 1LL;
            v44 = 1LL;
            v46 = 1LL;
            tlgCreate1Sz_wchar_t(v47, v19);
            v20 = *(_QWORD *)(v2 + 4600);
            v28 = *(_BYTE *)(a1 + 3296);
            v48 = &v28;
            v49 = 1LL;
            tlgCreate1Sz_wchar_t(v50, v20);
            tlgWriteTransfer_EtwWriteTransfer((int)&v34, (int)&dword_1C006D033, v21, v22, 0xBu, &v34);
          }
        }
        else
        {
          *(_BYTE *)(a1 + 450) = v18 & 0xFE;
          *(_BYTE *)(v2 + 104) &= ~0x80u;
          RaidSecondaryDumpDeregister();
        }
        v5 = 1;
      }
      goto LABEL_10;
    }
    v4 = (volatile signed __int32 *)(a1 + 920);
  }
  v5 = 1;
  if ( v4 && !*v4 && !Lock )
  {
    Status = -1073741823;
    goto LABEL_25;
  }
LABEL_10:
  v9 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v2 + 8) + 76LL) + 3, 0);
  v11 = v9;
  if ( !v9 )
  {
    Status = -1073741801;
    goto LABEL_25;
  }
  LOBYTE(v10) = 1;
  Status = RaUnitAcquireRemoveLock(a1, (__int64)v9, v10);
  if ( Status < 0 )
    goto LABEL_24;
  v13 = CurrentStackLocation;
  v11->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
  v14 = v11->Tail.Overlay.CurrentStackLocation;
  v11->IoStatus.Status = -1073741637;
  *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v13->MajorFunction;
  *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v13->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v14[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v13->Parameters.SetQuota + 6);
  *(_OWORD *)&v14[-1].FileObject = *(_OWORD *)&v13->FileObject;
  v14[-1].Context = v13->Context;
  Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v2 + 8), v11);
  if ( Status >= 0 )
  {
    Status = v11->IoStatus.Status;
    if ( Status >= 0 )
      goto LABEL_14;
  }
  if ( Status == -1073741637 && Options == 4 )
  {
    Status = 0;
LABEL_14:
    if ( v4 )
    {
      if ( v24 )
        _InterlockedIncrement(v4);
      else
        _InterlockedDecrement(v4);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( Options == 1 )
        RaidNotifyPoAboutSpecialDevice(*(_QWORD *)(a1 + 8), *(unsigned int *)v4);
    }
    if ( v5 && RaidIsUnitControlSupported(a1, 1) )
    {
      v15 = *(_QWORD *)(a1 + 24);
      LOWORD(v33) = 1;
      WORD1(v33) = *(_WORD *)(v15 + 56);
      WORD4(v33) = *(_WORD *)(a1 + 96);
      BYTE10(v33) = *(_BYTE *)(a1 + 98);
      *(_QWORD *)&v31 = &v33;
      BYTE12(v31) = v24;
      DWORD1(v33) = 4;
      DWORD2(v31) = Options;
      RaCallMiniportUnitControl(v15 + 336, 1LL, &v31);
    }
    if ( Options == 3 )
    {
      v23 = *(_DWORD *)(a1 + 920);
      if ( v23 == 1 )
      {
        if ( !*(_QWORD *)(v2 + 4888) )
        {
          *(_QWORD *)(v2 + 4888) = a1;
          StorUpdateCrashDumpPowerReady(v2);
        }
      }
      else if ( !v23 && a1 == *(_QWORD *)(v2 + 4888) )
      {
        *(_QWORD *)(v2 + 4888) = 0LL;
      }
    }
  }
  RaUnitReleaseRemoveLock(a1);
LABEL_24:
  IoFreeIrp(v11);
LABEL_25:
  RaidCompleteRequestEx(Irp, 0, Status);
  return (unsigned int)Status;
}
