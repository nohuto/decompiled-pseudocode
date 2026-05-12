/*
 * XREFs of RaUnitAsyncError @ 0x1C0016C64
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00083B8 (RaidSrbStatusToNtStatus.c)
 *     IsZonedWriteRequest @ 0x1C000F7D0 (IsZonedWriteRequest.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C0016E44 (RaidUnitHandleSpecialErrorConditions.c)
 *     RaidUnitReleaseIrp @ 0x1C0016EE4 (RaidUnitReleaseIrp.c)
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C006086C (RaidLogRequestComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0061CF4 (RaidUnitProcessBusyRequest.c)
 *     WPP_SF_qdq @ 0x1C0063B10 (WPP_SF_qdq.c)
 */

char __fastcall RaUnitAsyncError(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  IRP *v3; // rbp
  char v6; // r11
  char v7; // r15
  char *v8; // rsi
  __int64 v9; // rdx
  int v10; // ecx
  char v11; // r8
  unsigned __int64 v12; // rcx
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _LARGE_INTEGER ByteOffset; // r14
  unsigned int v24; // eax
  int v25; // [rsp+78h] [rbp+10h]
  unsigned int v26; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 168);
  v3 = *(IRP **)(a2 + 160);
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( *(_BYTE *)(v2 + 2) != 40 )
  {
    v8 = (char *)(v2 + 4);
    v25 = *(_DWORD *)(v2 + 12);
    v26 = *(_DWORD *)(v2 + 16);
    goto LABEL_3;
  }
  v25 = *(_DWORD *)(v2 + 24);
  v26 = *(_DWORD *)(v2 + 60);
  if ( !*(_DWORD *)(v2 + 20) )
  {
    v14 = *(_DWORD *)(v2 + 56);
    v15 = 0;
    if ( v14 )
    {
      while ( 1 )
      {
        v16 = *(unsigned int *)(v2 + 4LL * v15 + 120);
        if ( (unsigned int)v16 >= 0x80 )
        {
          v17 = *(unsigned int *)(v2 + 16);
          if ( (unsigned int)v16 <= (unsigned int)v17 )
            break;
        }
LABEL_28:
        if ( ++v15 >= v14 )
          goto LABEL_4;
      }
      v18 = (unsigned int)v16;
      v19 = *(_DWORD *)(v16 + v2) - 64;
      if ( !v19 )
        goto LABEL_25;
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 == 1 )
        {
LABEL_25:
          if ( v18 + 40 <= v17 )
          {
            v8 = (char *)(v18 + v2 + 8);
LABEL_3:
            v7 = *v8;
            goto LABEL_4;
          }
        }
      }
      else if ( v18 + 56 <= v17 )
      {
        v6 = 1;
        v8 = (char *)(v18 + v2 + 8);
        v7 = *v8;
      }
      if ( v6 )
        goto LABEL_4;
      goto LABEL_28;
    }
  }
LABEL_4:
  v9 = 4294967103LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      54LL,
      &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
      a1,
      v2,
      *(_BYTE *)(v2 + 3) & 0x3F);
    v9 = 4294967103LL;
  }
  v10 = *(_BYTE *)(v2 + 3) & 0x3F;
  if ( v10 != 5 && ((v7 - 8) & 0xDF) != 0 && v10 != 37 || IsZonedWriteRequest(a1, 0LL, a2, 0LL) )
    goto LABEL_9;
  v9 = 4294967103LL;
  if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v7 - 8) & 0xDF) == 0 )
    ++*(_DWORD *)(a1 + 2200);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( *(_BYTE *)(a1 + 3280) && (g_QosFlags & 1) == 0
    || (v24 = *(_DWORD *)(a1 + 1848), ByteOffset.LowPart >= v24) && v24 && (*(_BYTE *)(v2 + 3) & 0x3F) != 0x25 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 56LL, v21, a1, ByteOffset.LowPart, v2);
    }
    *(_BYTE *)(v2 + 3) = 4;
    if ( v7 == 8 )
      *v8 = 40;
LABEL_9:
    if ( (v25 & 0x100) == 0 && !*(_BYTE *)(a1 + 692) )
    {
      *(_BYTE *)(a1 + 692) = 1;
      RiDisableDeviceQueueFastPath(a1 + 656, v9);
      *(_BYTE *)(v2 + 3) |= 0x40u;
    }
    RaidUnitHandleSpecialErrorConditions(a1, a2);
    v11 = 63;
    if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v7 - 8) & 0xDF) == 0 )
      v3->IoStatus.Status = -1073741661;
    else
      v3->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v2 + 3));
    v12 = v26;
    if ( ((unsigned __int8)v11 & *(_BYTE *)(v2 + 3)) != 18 )
      v12 = 0LL;
    v3->IoStatus.Information = v12;
    RaidUnitReleaseIrp(v3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        57LL,
        &WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
        a1,
        v3,
        v3->IoStatus.Status);
    }
    if ( (qword_1C0092468 & 0x10) != 0 )
      RaidLogRequestComplete(*(_QWORD *)(a1 + 24), v3, v2);
    RaidCompleteRequestEx(v3, 0, v3->IoStatus.Status);
    return 1;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 55LL, v21, a1, ByteOffset.LowPart, v2);
  }
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
  RaidUnitProcessBusyRequest(a1, a2, v8);
  return 0;
}
