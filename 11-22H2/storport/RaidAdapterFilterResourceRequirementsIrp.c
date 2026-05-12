/*
 * XREFs of RaidAdapterFilterResourceRequirementsIrp @ 0x1C00A6210
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaForwardIrpSynchronous @ 0x1C0013B1C (RaForwardIrpSynchronous.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0032248 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qD @ 0x1C003E980 (WPP_SF_qD.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0074194 (RaidMachineRequireIoPortResource.c)
 */

__int64 __fastcall RaidAdapterFilterResourceRequirementsIrp(__int64 a1, IRP *a2)
{
  signed int v4; // ebp
  _DWORD *Information; // rsi
  unsigned int v6; // r14d
  _DWORD *v7; // rdx
  _DWORD *v8; // r8
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  _DWORD *v11; // rcx
  __int64 v12; // r11
  __int64 v13; // rax
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-68h]
  __int128 v19; // [rsp+30h] [rbp-58h]
  GUID v20; // [rsp+40h] [rbp-48h] BYREF

  v19 = 0LL;
  v4 = RaForwardIrpSynchronous(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
  if ( v4 >= 0 )
  {
    Information = (_DWORD *)a2->IoStatus.Information;
    if ( Information )
    {
      *(_DWORD *)(a1 + 816) = Information[2];
      *(_DWORD *)(a1 + 820) = Information[3];
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x200) != 0
        && !(unsigned __int8)RaidMachineRequireIoPortResource() )
      {
        v6 = 0;
        v7 = Information + 8;
        v8 = Information + 8;
        if ( Information[7] )
        {
          while ( 1 )
          {
            v9 = 0;
            v10 = v7[1];
            *(_WORD *)v8 = *(_WORD *)v7;
            *((_WORD *)v8 + 1) = *((_WORD *)v7 + 1);
            if ( v10 )
              break;
LABEL_13:
            v8[1] = v9;
            if ( v10 )
              v14 = &v7[8 * v10 - 8];
            else
              v14 = v7;
            v7 = v14 + 10;
            if ( v9 )
              v15 = &v8[8 * v9 - 8];
            else
              v15 = v8;
            ++v6;
            v8 = v15 + 10;
            if ( v6 >= Information[7] )
              goto LABEL_20;
          }
          v11 = v7 + 2;
          v12 = v10;
          while ( 1 )
          {
            if ( *((_BYTE *)v11 + 1) != 1 )
              goto LABEL_11;
            if ( (*(_BYTE *)v11 & 8) == 0 )
              break;
LABEL_12:
            v11 += 8;
            if ( !--v12 )
              goto LABEL_13;
          }
          *((_BYTE *)v11 + 1) = 0;
LABEL_11:
          v13 = 8LL * v9++;
          *(_OWORD *)&v8[v13 + 2] = *(_OWORD *)v11;
          *(_OWORD *)&v8[v13 + 6] = *((_OWORD *)v11 + 1);
          goto LABEL_12;
        }
      }
LABEL_20:
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x100) != 0 )
      {
        if ( (unsigned int)RaidIsAdapterControlSupported(a1, 13) )
        {
          *(_QWORD *)&v19 = 0x1000000001LL;
          *((_QWORD *)&v19 + 1) = Information;
          v4 = RaCallMiniportAdapterControl(a1 + 336);
          if ( v4 < 0 )
          {
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            {
              WPP_SF_qD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0x1Du,
                (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
                a1,
                v4);
            }
            v4 = 0;
          }
        }
      }
    }
  }
  if ( StorEtwLoggingEnabled )
  {
    v20 = 0LL;
    IoGetActivityIdIrp(a2, &v20);
    if ( (byte_1C0092A02 & 0x20) != 0 )
    {
      LODWORD(v18) = a2->IoStatus.Status;
      McTemplateK0pd_EtwWriteTransfer(v16, &EventPnpRequestComplete, &v20, a2, v18);
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Eu,
      (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
      a1,
      a2,
      v4,
      v19);
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
