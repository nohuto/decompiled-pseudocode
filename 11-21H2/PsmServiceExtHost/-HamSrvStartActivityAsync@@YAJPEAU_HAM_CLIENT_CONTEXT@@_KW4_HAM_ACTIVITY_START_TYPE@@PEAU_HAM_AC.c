/*
 * XREFs of ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180034C00
 * Callers:
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x1800344CC (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     HamRpcSrvStartActivityAsync @ 0x180034BF0 (HamRpcSrvStartActivityAsync.c)
 *     HamRpcSrvStartExtendedExecutionAsync @ 0x1800737A0 (HamRpcSrvStartExtendedExecutionAsync.c)
 * Callees:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x18003A3F0 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HamSrvStartActivityAsync(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  DWORD v8; // ebx
  int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rsi
  int v13; // edi
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rax
  int started; // edi
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  bool v20; // zf
  signed __int64 v21; // rtt
  DWORD v22; // ebx
  unsigned __int64 v24; // rsi
  signed __int64 v25; // rax
  bool v26; // cc
  signed __int64 v27; // rax
  char v28; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR v37; // [rsp+80h] [rbp-88h] BYREF
  _BYTE TlsValue[144]; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+128h] [rbp+20h] BYREF
  void *v40; // [rsp+138h] [rbp+30h]
  int v41; // [rsp+140h] [rbp+38h]
  int v42; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+148h] [rbp+40h] BYREF
  void *v44; // [rsp+158h] [rbp+50h]
  int v45; // [rsp+160h] [rbp+58h]
  int v46; // [rsp+164h] [rbp+5Ch]
  __int64 *v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int64 *v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  __int64 *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  __int64 *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  char *v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]

  v4 = a2;
  v30 = a2;
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v40 = &unk_1800BE904;
    UserData.Reserved = 2;
    v41 = 23;
    v42 = 1;
    v29 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v32 = 0LL;
  if ( HampLockTrackerId != -1 && TlsGetValue(HampLockTrackerId) )
  {
    v9 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v8, TlsValue);
    }
    v9 = 1;
  }
  v29 = 0;
  if ( a4 )
  {
    started = -1073741822;
    goto LABEL_37;
  }
  if ( a3 > 1 )
  {
    started = -1073741583;
    goto LABEL_37;
  }
  v10 = *a1;
  v33 = v4;
  v11 = v10 + 216;
  v12 = v11 + 16;
  RtlAcquireSRWLockShared(v11 + 16);
  v13 = *(_BYTE *)(v11 + 8) & 1;
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
  {
    if ( !*(_QWORD *)v11 )
    {
LABEL_21:
      RtlReleaseSRWLockShared(v12);
LABEL_22:
      started = -1073741275;
      goto LABEL_36;
    }
    v14 = *(_QWORD *)v11 ^ v11;
  }
  else
  {
    v14 = *(_QWORD *)v11;
  }
  if ( !v14 )
    goto LABEL_21;
  while ( 1 )
  {
    v15 = HampActCompareByHandle(&v33, (void *)v14);
    if ( v15 < 0 )
    {
      v16 = *(_QWORD *)v14;
      if ( v13 && v16 )
        goto LABEL_28;
      goto LABEL_19;
    }
    if ( v15 <= 0 )
      break;
    v16 = *(_QWORD *)(v14 + 8);
    if ( v13 && v16 )
    {
LABEL_28:
      v14 ^= v16;
      goto LABEL_20;
    }
LABEL_19:
    v14 = v16;
LABEL_20:
    if ( !v14 )
      goto LABEL_21;
  }
  if ( !*(_QWORD *)(v14 + 24) )
    goto LABEL_21;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v12);
  if ( *(__int64 **)(v14 + 64) != a1 )
  {
    CemRcObjectDereference(v14);
    goto LABEL_22;
  }
  started = HampActStartAsync(v14, a3, (int *)&v29, &v32);
  if ( started >= 0 )
    started = 0;
  _m_prefetchw((const void *)(v14 + 24));
  v18 = *(_QWORD *)(v14 + 24);
  v19 = v18 - 1;
  v20 = v18 == 1;
  if ( v18 - 1 <= 0 )
  {
LABEL_53:
    if ( !v20 )
      __fastfail(0xEu);
    v24 = *(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_QWORD *)(v14 + 16) == -1LL )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v14 + 24)) <= -1 )
        __fastfail(0xEu);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v24 + 16);
      v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 24), 0xFFFFFFFFFFFFFFFFuLL);
      v26 = v25 <= 1;
      v27 = v25 - 1;
      if ( !v26 )
      {
        RtlReleaseSRWLockExclusive(v24 + 16);
        goto LABEL_36;
      }
      if ( v27 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v24 + 16);
    }
    (*(void (__fastcall **)(__int64))(v24 + 24))(v14);
  }
  else
  {
    while ( 1 )
    {
      v21 = v18;
      v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 24), v19, v18);
      if ( v21 == v18 )
        break;
      v19 = v18 - 1;
      v20 = v18 == 1;
      if ( v18 - 1 <= 0 )
        goto LABEL_53;
    }
  }
LABEL_36:
  v4 = v30;
LABEL_37:
  if ( v9 )
  {
    v22 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v22, 0LL);
    }
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v34 = v32;
    LODWORD(v31) = v29;
    v55 = &v28;
    v53 = &v34;
    v51 = &v31;
    v49 = &v35;
    v47 = &v30;
    *(_DWORD *)&v37.Level = 516;
    v43.Ptr = (ULONGLONG)off_1800DC220;
    v28 = a3;
    v35 = v4;
    LODWORD(v30) = started;
    v56 = 1LL;
    v54 = 8LL;
    v52 = 4LL;
    v50 = 8LL;
    v48 = 4LL;
    *(_DWORD *)&v37.Id = 184549376;
    v37.Keyword = 8LL;
    v43.Size = *(unsigned __int16 *)off_1800DC220;
    v44 = &unk_1800BE5BA;
    v43.Reserved = 2;
    v45 = 84;
    v46 = 1;
    v29 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &v37, 0LL, 0LL, 7u, &v43);
  }
  return (unsigned int)started;
}
