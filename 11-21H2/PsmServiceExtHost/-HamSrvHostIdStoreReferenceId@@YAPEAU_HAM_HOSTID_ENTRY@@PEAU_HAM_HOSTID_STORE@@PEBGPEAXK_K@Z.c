/*
 * XREFs of ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x1800367E0
 * Callers:
 *     PsmHamReferenceHostId @ 0x1800367A0 (PsmHamReferenceHostId.c)
 * Callees:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180027DFC (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

struct _HAM_HOSTID_ENTRY *__fastcall HamSrvHostIdStoreReferenceId(
        struct _HAM_HOSTID_STORE *a1,
        char *a2,
        void *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v5; // rsi
  __int64 v7; // r12
  __int64 v11; // rdx
  signed __int64 v12; // rbx
  _WORD *v13; // rax
  __int16 v14; // cx
  DWORD v15; // edi
  _QWORD *Value; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rbx
  unsigned int v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  EVENT_DESCRIPTOR v29; // [rsp+70h] [rbp-90h] BYREF
  _WORD v30[232]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE DestinationSid[68]; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v32; // [rsp+294h] [rbp+194h]
  int v33; // [rsp+298h] [rbp+198h]
  unsigned __int64 v34; // [rsp+2A0h] [rbp+1A0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B0h] [rbp+1B0h] BYREF
  void *v36; // [rsp+2C0h] [rbp+1C0h]
  int v37; // [rsp+2C8h] [rbp+1C8h]
  int v38; // [rsp+2CCh] [rbp+1CCh]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+2D0h] [rbp+1D0h] BYREF
  void *v40; // [rsp+2E0h] [rbp+1E0h]
  int v41; // [rsp+2E8h] [rbp+1E8h]
  int v42; // [rsp+2ECh] [rbp+1ECh]
  _WORD *v43; // [rsp+2F0h] [rbp+1F0h]
  int v44; // [rsp+2F8h] [rbp+1F8h]
  int v45; // [rsp+2FCh] [rbp+1FCh]
  __int64 *v46; // [rsp+300h] [rbp+200h]
  __int64 v47; // [rsp+308h] [rbp+208h]
  __int64 *v48; // [rsp+310h] [rbp+210h]
  __int64 v49; // [rsp+318h] [rbp+218h]
  _BYTE *v50; // [rsp+320h] [rbp+220h]
  int v51; // [rsp+328h] [rbp+228h]
  int v52; // [rsp+32Ch] [rbp+22Ch]
  unsigned int *v53; // [rsp+330h] [rbp+230h]
  __int64 v54; // [rsp+338h] [rbp+238h]

  v5 = -1LL;
  v7 = -1LL;
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC220;
    v36 = &unk_1800BFB0B;
    UserData.Reserved = 2;
    v37 = 20;
    v38 = 1;
    v23 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  memset_0(v30, 0, 0x228uLL);
  v11 = 232LL;
  v12 = a2 - (char *)v30;
  v13 = v30;
  while ( v11 != -2147483414 )
  {
    v14 = *(_WORD *)((char *)v13 + v12);
    if ( !v14 )
      break;
    *v13++ = v14;
    if ( !--v11 )
    {
      --v13;
      break;
    }
  }
  *v13 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v34 = a5;
  v27 = a5;
  v15 = HampLockTrackerId;
  v32 = a4;
  v33 = 2;
  v22 = a4;
  v28 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v15) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared(a1);
  HampHostIdStoreEnumerateMatchingEntries(
    a1,
    &v22,
    (union _RM_SID *)DestinationSid,
    (struct _RM_PSM_KEY *)v30,
    (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreReferenceHostIdCallback,
    &v27);
  if ( HampLockTrackerId != -1 )
  {
    v17 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v18 = *v17;
    if ( (*v17 & 0x800) == 0 )
      __int2c();
    v19 = v17[12]-- == 1;
    if ( v19 )
      *v17 = v18 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  RtlReleaseSRWLockShared(a1);
  v20 = v28;
  if ( v28 )
    v7 = *(_QWORD *)(v28 + 88);
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v23 = a4;
    v53 = &v23;
    v50 = DestinationSid;
    v24 = v7;
    v25 = v28;
    v54 = 4LL;
    v52 = 0;
    v51 = 4 * DestinationSid[1] + 8;
    v48 = &v24;
    v46 = &v25;
    v49 = 8LL;
    v47 = 8LL;
    do
      v19 = v30[++v5] == 0;
    while ( !v19 );
    v45 = 0;
    v44 = 2 * v5 + 2;
    *(_DWORD *)&v29.Level = 516;
    v39.Ptr = (ULONGLONG)off_1800DC220;
    v43 = v30;
    *(_DWORD *)&v29.Id = 184549376;
    v29.Keyword = 8LL;
    v39.Size = *(unsigned __int16 *)off_1800DC220;
    v40 = &unk_1800BFA33;
    v39.Reserved = 2;
    v41 = 63;
    v42 = 1;
    v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DC238, &v29, 0LL, 0LL, 7u, &v39);
  }
  return (struct _HAM_HOSTID_ENTRY *)v20;
}
