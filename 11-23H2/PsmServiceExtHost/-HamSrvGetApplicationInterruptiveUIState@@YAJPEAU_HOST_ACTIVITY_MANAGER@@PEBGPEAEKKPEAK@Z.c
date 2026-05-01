/*
 * XREFs of ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x1800355C0
 * Callers:
 *     HamRpcSrvGetApplicationInterruptiveUIState @ 0x180035B80 (HamRpcSrvGetApplicationInterruptiveUIState.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     CempUtilValidateSid @ 0x180035A10 (CempUtilValidateSid.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180035A78 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x180035EDC (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 __fastcall HamSrvGetApplicationInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        char *a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v8; // r15
  DWORD v9; // ebx
  _WORD *v10; // rax
  __int64 v11; // rdx
  __int16 v12; // cx
  struct _HAM_APPLICATION *v13; // rax
  struct _HAM_APPLICATION *v14; // rbx
  unsigned int InterruptiveUIState; // eax
  unsigned int v16; // edi
  int v17; // eax
  __int64 v18; // rax
  int v20; // ecx
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v24; // [rsp+38h] [rbp-C8h] BYREF
  struct _HOST_ACTIVITY_MANAGER *v25; // [rsp+40h] [rbp-C0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v27; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[464]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE DestinationSid[68]; // [rsp+2D0h] [rbp+1D0h] BYREF
  unsigned int v31; // [rsp+314h] [rbp+214h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+320h] [rbp+220h] BYREF
  void *v33; // [rsp+330h] [rbp+230h]
  int v34; // [rsp+338h] [rbp+238h]
  int v35; // [rsp+33Ch] [rbp+23Ch]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+340h] [rbp+240h] BYREF
  void *v37; // [rsp+350h] [rbp+250h]
  int v38; // [rsp+358h] [rbp+258h]
  int v39; // [rsp+35Ch] [rbp+25Ch]
  unsigned int *v40; // [rsp+360h] [rbp+260h]
  __int64 v41; // [rsp+368h] [rbp+268h]
  char *v42; // [rsp+370h] [rbp+270h]
  int v43; // [rsp+378h] [rbp+278h]
  int v44; // [rsp+37Ch] [rbp+27Ch]
  unsigned __int8 *v45; // [rsp+380h] [rbp+280h]
  int v46; // [rsp+388h] [rbp+288h]
  int v47; // [rsp+38Ch] [rbp+28Ch]
  unsigned int *v48; // [rsp+390h] [rbp+290h]
  __int64 v49; // [rsp+398h] [rbp+298h]
  char *v50; // [rsp+3A0h] [rbp+2A0h]
  __int64 v51; // [rsp+3A8h] [rbp+2A8h]

  v25 = a1;
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v33 = &unk_1800C01A4;
    UserData.Reserved = 2;
    v34 = 33;
    v35 = 1;
    v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v8 = 0;
  memset_0(TlsValue, 0, 0x88uLL);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, TlsValue);
  }
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( (int)CempUtilValidateSid(a3) < 0 )
    {
      v16 = -1073741584;
    }
    else
    {
      memset_0(v29, 0, 0x218uLL);
      if ( (unsigned __int8)PsmIsValidKey(a2) )
        CempUtilValidateSid(a3);
      v10 = v29;
      v11 = 232LL;
      while ( v11 != -2147483414 )
      {
        v12 = *(_WORD *)((char *)v10 + a2 - v29);
        if ( !v12 )
          break;
        *v10++ = v12;
        if ( !--v11 )
        {
          --v10;
          break;
        }
      }
      *v10 = 0;
      RtlCopySid(0x44u, DestinationSid, a3);
      v31 = a5;
      v13 = HampAppFind(v25, (struct _HAM_APPLICATION_INFO *)v29);
      v14 = v13;
      if ( v13 )
      {
        InterruptiveUIState = HampAppGetInterruptiveUIState(v13);
        *a6 = InterruptiveUIState;
        v8 = InterruptiveUIState;
        v16 = 0;
        CemRcObjectDereference(v14);
      }
      else
      {
        v16 = -1073741275;
      }
    }
  }
  else
  {
    v16 = -1073741585;
  }
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v22 = v8;
    v50 = &v22;
    v48 = &v24;
    v24 = a5;
    v23 = v16;
    v51 = 1LL;
    v49 = 4LL;
    v17 = a3[1];
    v45 = a3;
    v47 = 0;
    v46 = 4 * v17 + 8;
    if ( a2 )
    {
      v18 = -1LL;
      while ( *(_WORD *)&a2[2 * v18++ + 2] != 0 )
        ;
      v20 = 2 * v18 + 2;
    }
    else
    {
      a2 = (char *)&word_1800B66B4;
      v20 = 2;
    }
    v43 = v20;
    v40 = &v23;
    *(_DWORD *)&v27.Level = 516;
    v36.Ptr = (ULONGLONG)off_1800DB220;
    v42 = a2;
    v44 = 0;
    v41 = 4LL;
    *(_DWORD *)&v27.Id = 184549376;
    v27.Keyword = 8LL;
    v36.Size = *(unsigned __int16 *)off_1800DB220;
    v37 = &unk_1800C0F8B;
    v36.Reserved = 2;
    v38 = 96;
    v39 = 1;
    LODWORD(v25) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &v27, 0LL, 0LL, 7u, &v36);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v16;
}
