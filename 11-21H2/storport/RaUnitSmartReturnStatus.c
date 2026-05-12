/*
 * XREFs of RaUnitSmartReturnStatus @ 0x1C0052C4C
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C0052728 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C00145D0 (RaSendIrpSynchronous.c)
 *     GetSrbScsiData @ 0x1C001BAA4 (GetSrbScsiData.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0021A54 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0021AA0 (StorBuildSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0021CDC (PortSrbTranslateSrbToNtStatus.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     WPP_SF_DD @ 0x1C003C4FC (WPP_SF_DD.c)
 */

__int64 __fastcall RaUnitSmartReturnStatus(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  bool v3; // zf
  _BYTE *v4; // r14
  char v7; // si
  char v8; // r10
  unsigned int v9; // r11d
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  IRP *v16; // rax
  IRP *v17; // rbp
  int Status; // edi
  char v19; // cl
  _BYTE *v20; // rdx
  unsigned __int8 v21; // r10
  char v22; // r8
  int v23; // eax
  int v24; // r9d
  unsigned __int16 v25; // dx
  _DEVICE_OBJECT *AttachedDevice; // rcx
  char v27; // r11
  _BYTE *v28; // rcx
  unsigned __int8 v29; // r9
  unsigned __int8 v30; // al
  unsigned __int8 v31; // r9
  unsigned __int8 v32; // al
  unsigned __int8 v33; // dl
  __int64 v35; // [rsp+20h] [rbp-38h]
  _IO_STATUS_BLOCK v36; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v37; // [rsp+60h] [rbp+8h] BYREF
  _BYTE *v38; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a2 + 2) == 40;
  v36 = 0LL;
  v4 = (_BYTE *)a3;
  v7 = 1;
  if ( v3 )
  {
    v8 = 0;
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v9 = *(_DWORD *)(a2 + 56);
      a3 = 0LL;
      if ( v9 )
      {
        while ( 1 )
        {
          v10 = *(unsigned int *)(a2 + 4 * a3 + 120);
          if ( (unsigned int)v10 >= 0x80 )
          {
            v11 = *(unsigned int *)(a2 + 16);
            if ( (unsigned int)v10 < (unsigned int)v11 )
              break;
          }
LABEL_11:
          a3 = (unsigned int)(a3 + 1);
          if ( (unsigned int)a3 >= v9 )
            goto LABEL_12;
        }
        v12 = (unsigned int)v10;
        v13 = *(_DWORD *)(v10 + a2) - 64;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( !v14 )
          {
            if ( v12 + 56 <= v11 )
              v8 = 1;
            goto LABEL_10;
          }
          if ( v14 != 1 )
            goto LABEL_10;
        }
        if ( v12 + 40 <= v11 )
          goto LABEL_12;
LABEL_10:
        if ( v8 )
          goto LABEL_12;
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  v15 = *(_QWORD *)(a1 + 8);
  v38 = 0LL;
  v37 = 0;
  v16 = StorBuildSynchronousScsiRequest(v15, a2, a3, &v36);
  v17 = v16;
  if ( v16 )
  {
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v16);
    if ( Status >= 0 )
    {
      Status = v17->IoStatus.Status;
      if ( Status >= 0 )
      {
        Status = PortSrbTranslateSrbToNtStatus(*(_BYTE *)(a2 + 3));
        if ( Status >= 0 )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
          {
            GetSrbScsiData(a2, 0LL, 0LL, 0LL, &v38, &v37);
            v19 = *(_BYTE *)(a2 + 3);
            v20 = v38;
            v21 = v37;
          }
          else
          {
            v20 = *(_BYTE **)(a2 + 32);
            v21 = *(_BYTE *)(a2 + 11);
          }
          if ( v19 < 0 && v20 )
          {
            v22 = *v20 & 0x7F;
            if ( (unsigned __int8)(v22 - 114) <= 1u )
            {
              v27 = 0;
              if ( v21 )
              {
                v28 = 0LL;
                v29 = 0;
                if ( (unsigned __int8)(v22 - 114) <= 1u )
                {
                  if ( v20 + 8 <= &v20[v21] )
                  {
                    v30 = v20[7];
                    if ( v30 <= 0xF7u )
                    {
                      v31 = v21;
                      v32 = v30 + 8;
                      if ( v32 <= v21 )
                        v31 = v32;
                      v29 = v31 - 8;
                      if ( v29 )
                      {
                        v28 = v20 + 8;
                        v27 = 1;
                      }
                    }
                  }
                  if ( v27 && v28 && v29 )
                  {
                    while ( v29 >= 2u )
                    {
                      if ( *v28 == 9 )
                      {
                        if ( v29 >= 0xEu && v28 )
                        {
                          if ( v28[9] != 0xF4 || v28[11] != 44 )
                            v7 = 0;
                          *v4 = v7;
                          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                          {
                            v23 = (unsigned __int8)v28[11];
                            v25 = 71;
                            v24 = (unsigned __int8)v28[9];
                            AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
                            goto LABEL_38;
                          }
                        }
                        break;
                      }
                      v33 = v28[1] + 2;
                      if ( v29 <= v33 )
                        break;
                      v28 += v33;
                      v29 -= v33;
                    }
                  }
                }
              }
            }
            else if ( (unsigned __int8)(v22 - 112) <= 1u )
            {
              if ( v21 >= 0xCu )
              {
                if ( v20[10] != 0xF4 || v20[9] != 44 )
                  v7 = 0;
                *v4 = v7;
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                {
                  v23 = (unsigned __int8)v20[9];
                  v24 = (unsigned __int8)v20[10];
                  v25 = 72;
                  AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_38:
                  LODWORD(v35) = v23;
                  WPP_SF_DD(
                    (__int64)AttachedDevice,
                    v25,
                    (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
                    v24,
                    v35);
                }
              }
            }
            else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              WPP_SF_(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0x49u,
                (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids);
            }
          }
          else
          {
            Status = -1073741823;
          }
        }
      }
    }
    StorFreeSynchronousScsiRequest(v17);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
