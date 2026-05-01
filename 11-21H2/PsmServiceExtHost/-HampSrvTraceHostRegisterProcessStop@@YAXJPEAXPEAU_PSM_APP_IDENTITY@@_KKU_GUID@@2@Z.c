/*
 * XREFs of ?HampSrvTraceHostRegisterProcessStop@@YAXJPEAXPEAU_PSM_APP_IDENTITY@@_KKU_GUID@@2@Z @ 0x18000AEA8
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x18000AB58 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x18003A66C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

void __fastcall HampSrvTraceHostRegisterProcessStop(
        int a1,
        void *a2,
        struct _PSM_APP_IDENTITY *a3,
        __int64 a4,
        unsigned int a5,
        struct _GUID *a6,
        unsigned __int64 a7)
{
  char *v7; // rbx
  const unsigned __int16 *v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  DWORD ProcessId; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v15[3]; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+8Ch] [rbp-74h]
  _DWORD *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  DWORD *p_ProcessId; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  __int64 *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  char *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  unsigned int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  struct _GUID *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  __int64 *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]

  if ( (unsigned int)dword_1800DC218 > 4
    && (qword_1800DC228 & 0x400000000008LL) != 0
    && (qword_1800DC230 & 0x400000000008LL) == qword_1800DC230 )
  {
    v7 = (char *)a3 + 472;
    v17 = a7;
    v8 = (const unsigned __int16 *)((char *)a3 + 8);
    v12 = a5;
    v13 = *(_DWORD *)a3;
    v16 = 0x1000000LL;
    v18 = a4;
    v15[0] = a1;
    ProcessId = GetProcessId(a2);
    v44 = &v16;
    v42 = &v17;
    v40 = a6;
    v38 = &v12;
    v45 = 8LL;
    v43 = 8LL;
    v41 = 16LL;
    v39 = 4LL;
    v9 = (unsigned __int8)v7[1];
    v35 = v7;
    v37 = 0;
    v34 = 4LL;
    v32 = 8LL;
    v36 = 4 * v9 + 8;
    v33 = &v13;
    v31 = &v18;
    if ( v8 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v8[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v8 = &word_1800B7A9C;
      v11 = 2;
    }
    v29 = v11;
    p_ProcessId = &ProcessId;
    v30 = 0;
    v24 = v15;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    v28 = v8;
    v27 = 4LL;
    v25 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0x400000000008LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v21 = &unk_1800BFB2B;
    UserData.Reserved = 2;
    v22 = 132;
    v23 = 1;
    v15[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 0xCu, &UserData);
  }
}
