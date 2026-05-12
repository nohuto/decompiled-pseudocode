/*
 * XREFs of RaUnitAsyncError @ 0x1C000BF68
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitReleaseIrp @ 0x1C000BC60 (RaidUnitReleaseIrp.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C148 (RaidSrbStatusToNtStatus.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000C1C0 (RaidUnitHandleSpecialErrorConditions.c)
 *     IsZonedWriteRequest @ 0x1C00159A0 (IsZonedWriteRequest.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0053EFC (RaidLogRequestComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0054FE4 (RaidUnitProcessBusyRequest.c)
 *     WPP_SF_qdq @ 0x1C0056CF4 (WPP_SF_qdq.c)
 */

char __fastcall RaUnitAsyncError(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  IRP *v3; // rbp
  char v6; // r11
  char v7; // r14
  char *v8; // rsi
  int v9; // ecx
  char v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  __int64 v20; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _LARGE_INTEGER ByteOffset; // r15
  unsigned int v23; // eax
  int v24; // [rsp+78h] [rbp+10h]
  unsigned int v25; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 168);
  v3 = *(IRP **)(a2 + 160);
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( *(_BYTE *)(v2 + 2) != 40 )
  {
    v8 = (char *)(v2 + 4);
    v24 = *(_DWORD *)(v2 + 12);
    v25 = *(_DWORD *)(v2 + 16);
    goto LABEL_3;
  }
  v24 = *(_DWORD *)(v2 + 24);
  v25 = *(_DWORD *)(v2 + 60);
  if ( !*(_DWORD *)(v2 + 20) )
  {
    v13 = *(_DWORD *)(v2 + 56);
    v14 = 0;
    if ( v13 )
    {
      while ( 1 )
      {
        v15 = *(unsigned int *)(v2 + 4LL * v14 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v16 = *(unsigned int *)(v2 + 16);
          if ( (unsigned int)v15 <= (unsigned int)v16 )
            break;
        }
LABEL_28:
        if ( ++v14 >= v13 )
          goto LABEL_4;
      }
      v17 = (unsigned int)v15;
      v18 = *(_DWORD *)(v15 + v2) - 64;
      if ( !v18 )
        goto LABEL_25;
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
LABEL_25:
          if ( v17 + 40 <= v16 )
          {
            v8 = (char *)(v17 + v2 + 8);
LABEL_3:
            v7 = *v8;
            goto LABEL_4;
          }
        }
      }
      else if ( v17 + 56 <= v16 )
      {
        v6 = 1;
        v8 = (char *)(v17 + v2 + 8);
        v7 = *v8;
      }
      if ( v6 )
        goto LABEL_4;
      goto LABEL_28;
    }
  }
LABEL_4:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      54LL,
      &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
      a1,
      v2,
      *(_BYTE *)(v2 + 3) & 0x3F);
  }
  v9 = *(_BYTE *)(v2 + 3) & 0x3F;
  if ( v9 != 5 && ((v7 - 8) & 0xDF) != 0 && v9 != 37 || (unsigned __int8)IsZonedWriteRequest(a1, 0LL, a2, 0LL) )
    goto LABEL_9;
  if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v7 - 8) & 0xDF) == 0 )
    ++*(_DWORD *)(a1 + 2152);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( *(_BYTE *)(a1 + 3232) && (g_QosFlags & 1) == 0
    || (v23 = *(_DWORD *)(a1 + 1800), ByteOffset.LowPart >= v23) && v23 && (*(_BYTE *)(v2 + 3) & 0x3F) != 0x25 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 56LL, v20, a1, ByteOffset.LowPart, v2);
    }
    *(_BYTE *)(v2 + 3) = 4;
    if ( v7 == 8 )
      *v8 = 40;
LABEL_9:
    if ( (v24 & 0x100) == 0 && !*(_BYTE *)(a1 + 692) )
    {
      *(_BYTE *)(a1 + 692) = 1;
      *(_BYTE *)(v2 + 3) |= 0x40u;
    }
    RaidUnitHandleSpecialErrorConditions(a1, a2);
    v10 = 63;
    if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v7 - 8) & 0xDF) == 0 )
      v3->IoStatus.Status = -1073741661;
    else
      v3->IoStatus.Status = RaidSrbStatusToNtStatus(*(unsigned __int8 *)(v2 + 3));
    v11 = v25;
    if ( ((unsigned __int8)v10 & *(_BYTE *)(v2 + 3)) != 18 )
      v11 = 0LL;
    v3->IoStatus.Information = v11;
    RaidUnitReleaseIrp((__int64)v3);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        57LL,
        &WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        a1,
        v3,
        v3->IoStatus.Status);
    }
    if ( (qword_1C00793A8 & 0x10) != 0 )
      RaidLogRequestComplete(*(_QWORD *)(a1 + 24), v3, v2);
    RaidCompleteRequestEx(v3, 0, v3->IoStatus.Status);
    return 1;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 55LL, v20, a1, ByteOffset.LowPart, v2);
  }
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
  RaidUnitProcessBusyRequest(a1, a2, v8);
  return 0;
}
