/*
 * XREFs of ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800224E0
 * Callers:
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800016AC (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     HamRpcSrvCloseActivity @ 0x1800224D0 (HamRpcSrvCloseActivity.c)
 * Callees:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CempLockTrackerIsSetForThread @ 0x18002AF38 (CempLockTrackerIsSetForThread.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x18003A3F0 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall HamSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  const struct _TraceLoggingMetadata_t *v4; // rdx
  DWORD v5; // ebx
  int v6; // r12d
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  unsigned __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rdx
  DWORD v14; // ebx
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v20; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE TlsValue[144]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+108h] [rbp+0h] BYREF
  void *v23; // [rsp+118h] [rbp+10h]
  int v24; // [rsp+120h] [rbp+18h]
  int v25; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+128h] [rbp+20h] BYREF
  void *v27; // [rsp+138h] [rbp+30h]
  int v28; // [rsp+140h] [rbp+38h]
  int v29; // [rsp+144h] [rbp+3Ch]
  __int64 *v30; // [rsp+148h] [rbp+40h]
  __int64 v31; // [rsp+150h] [rbp+48h]
  __int64 *v32; // [rsp+158h] [rbp+50h]
  __int64 v33; // [rsp+160h] [rbp+58h]

  v16 = a2;
  v4 = &TraceLoggingMetadata;
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v23 = &unk_1800BF67D;
    UserData.Reserved = 2;
    v24 = 18;
    v25 = 1;
    LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( (unsigned int)CempLockTrackerIsSetForThread(a1, v4) )
  {
    v6 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v5, TlsValue);
    }
    v6 = 1;
  }
  v17 = a2;
  v7 = *(_QWORD *)a1 + 216LL;
  RtlAcquireSRWLockShared(*(_QWORD *)a1 + 232LL);
  v8 = *(_QWORD *)v7;
  v9 = *(_BYTE *)(v7 + 8) & 1;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
  {
    if ( !v8 )
    {
LABEL_19:
      RtlReleaseSRWLockShared(v7 + 16);
LABEL_20:
      v12 = -1073741275;
      goto LABEL_33;
    }
    v8 ^= v7;
  }
  if ( !v8 )
    goto LABEL_19;
  while ( 1 )
  {
    v10 = HampActCompareByHandle(&v17, (void *)v8);
    if ( v10 < 0 )
    {
      v11 = *(_QWORD *)v8;
      if ( v9 && v11 )
        goto LABEL_26;
      goto LABEL_17;
    }
    if ( v10 <= 0 )
      break;
    v11 = *(_QWORD *)(v8 + 8);
    if ( v9 && v11 )
    {
LABEL_26:
      v8 ^= v11;
      goto LABEL_18;
    }
LABEL_17:
    v8 = v11;
LABEL_18:
    if ( !v8 )
      goto LABEL_19;
  }
  if ( !*(_QWORD *)(v8 + 24) )
    goto LABEL_19;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v7 + 16);
  if ( *(struct _HAM_CLIENT_CONTEXT **)(v8 + 64) != a1 )
  {
    CemRcObjectDereference(v8);
    goto LABEL_20;
  }
  v12 = HampActClose((struct _HAM_ACTIVITY *)v8, v13);
  if ( v12 >= 0 )
    v12 = 0;
  CemRcObjectDereference(v8);
LABEL_33:
  if ( v6 )
  {
    v14 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v14, 0LL);
    }
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v18 = v16;
    LODWORD(v16) = v12;
    v32 = &v18;
    v30 = &v16;
    *(_DWORD *)&v20.Level = 516;
    v26.Ptr = (ULONGLONG)off_1800DC220;
    v33 = 8LL;
    v31 = 4LL;
    *(_DWORD *)&v20.Id = 184549376;
    v20.Keyword = 8LL;
    v26.Size = *(unsigned __int16 *)off_1800DC220;
    v27 = &unk_1800BECBE;
    v26.Reserved = 2;
    v28 = 39;
    v29 = 1;
    LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &v20, 0LL, 0LL, 4u, &v26);
  }
  return (unsigned int)v12;
}
