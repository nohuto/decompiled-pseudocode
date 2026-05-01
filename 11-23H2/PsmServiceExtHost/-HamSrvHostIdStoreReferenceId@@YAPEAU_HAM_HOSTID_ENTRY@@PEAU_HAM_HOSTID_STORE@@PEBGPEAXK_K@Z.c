/*
 * XREFs of ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x180016010
 * Callers:
 *     PsmHamReferenceHostId @ 0x180015FD0 (PsmHamReferenceHostId.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z @ 0x180010B40 (-HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z @ 0x180011670 (-HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x18001174C (-HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 *     ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x180011790 (-HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

struct _HAM_HOSTID_ENTRY *__fastcall HamSrvHostIdStoreReferenceId(
        struct _HAM_HOSTID_STORE *a1,
        char *a2,
        void *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  __int64 v7; // r13
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  signed __int64 v11; // rbx
  wchar_t *v12; // rax
  wchar_t v13; // cx
  DWORD v14; // edi
  _QWORD *Value; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 First; // rsi
  int v18; // r14d
  int v19; // eax
  unsigned __int64 v20; // rax
  char *v21; // r15
  __int64 v22; // rdi
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rax
  _QWORD *v26; // r12
  __int64 v27; // rbx
  int v28; // r15d
  int v29; // eax
  __int64 v30; // rax
  _QWORD *i; // r14
  __int64 *v32; // rax
  __int64 v33; // rdx
  bool v34; // zf
  __int64 v35; // rbx
  __int64 v36; // rdx
  unsigned int v38; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v39; // [rsp+3Ch] [rbp-CCh]
  struct _HAM_HOSTID_STORE *v40; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h]
  EVENT_DESCRIPTOR v45; // [rsp+70h] [rbp-98h] BYREF
  wchar_t v46[232]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE DestinationSid[68]; // [rsp+258h] [rbp+150h] BYREF
  int v48; // [rsp+29Ch] [rbp+194h]
  int v49; // [rsp+2A0h] [rbp+198h]
  unsigned __int64 v50; // [rsp+2A8h] [rbp+1A0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2B8h] [rbp+1B0h] BYREF
  void *v52; // [rsp+2C8h] [rbp+1C0h]
  int v53; // [rsp+2D0h] [rbp+1C8h]
  int v54; // [rsp+2D4h] [rbp+1CCh]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+2D8h] [rbp+1D0h] BYREF
  void *v56; // [rsp+2E8h] [rbp+1E0h]
  int v57; // [rsp+2F0h] [rbp+1E8h]
  int v58; // [rsp+2F4h] [rbp+1ECh]
  wchar_t *v59; // [rsp+2F8h] [rbp+1F0h]
  int v60; // [rsp+300h] [rbp+1F8h]
  int v61; // [rsp+304h] [rbp+1FCh]
  __int64 *v62; // [rsp+308h] [rbp+200h]
  __int64 v63; // [rsp+310h] [rbp+208h]
  struct _HAM_HOSTID_STORE **v64; // [rsp+318h] [rbp+210h]
  __int64 v65; // [rsp+320h] [rbp+218h]
  _BYTE *v66; // [rsp+328h] [rbp+220h]
  int v67; // [rsp+330h] [rbp+228h]
  int v68; // [rsp+334h] [rbp+22Ch]
  int *v69; // [rsp+338h] [rbp+230h]
  __int64 v70; // [rsp+340h] [rbp+238h]

  v7 = -1LL;
  v9 = a4;
  v38 = a4;
  v40 = a1;
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    v52 = &unk_1800C19EF;
    UserData.Reserved = 2;
    v53 = 20;
    v54 = 1;
    v39 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  memset_0(v46, 0, 0x228uLL);
  v10 = 232LL;
  v11 = a2 - (char *)v46;
  v12 = v46;
  while ( v10 != -2147483414 )
  {
    v13 = *(wchar_t *)((char *)v12 + v11);
    if ( !v13 )
      break;
    *v12++ = v13;
    if ( !--v10 )
    {
      --v12;
      break;
    }
  }
  *v12 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v50 = a5;
  v43 = a5;
  v14 = HampLockTrackerId;
  v48 = v9;
  v49 = 2;
  v44 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared(a1);
  v16 = (unsigned __int64)a1 + 56;
  RtlAcquireSRWLockShared((char *)a1 + 72);
  First = *((_QWORD *)a1 + 7);
  v18 = *((_BYTE *)a1 + 64) & 1;
  if ( (*(_BYTE *)(v16 + 8) & 1) != 0 )
  {
    if ( !First )
      goto LABEL_80;
    First ^= v16;
  }
  if ( !First )
    goto LABEL_80;
  do
  {
    v19 = HampHostIdStoreCompareSessionByKey((void *)v9, (_DWORD *)First);
    if ( v19 < 0 )
    {
      v20 = *(_QWORD *)First;
      if ( v18 && v20 )
        goto LABEL_49;
      goto LABEL_18;
    }
    if ( v19 <= 0 )
      break;
    v20 = *(_QWORD *)(First + 8);
    if ( v18 && v20 )
    {
LABEL_49:
      First ^= v20;
      continue;
    }
LABEL_18:
    First = v20;
  }
  while ( First );
  if ( !First || !*(_QWORD *)(First + 24) )
  {
LABEL_80:
    RtlReleaseSRWLockShared(v16 + 16);
    goto LABEL_63;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(First + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v16 + 16);
  v21 = (char *)(First + 56);
  RtlAcquireSRWLockShared(First + 56);
  v22 = *(_QWORD *)(First + 40);
  v23 = *(_BYTE *)(First + 48) & 1;
  if ( (*(_BYTE *)(First + 48) & 1) != 0 )
  {
    if ( v22 )
    {
      v22 ^= First + 40;
      goto LABEL_24;
    }
    goto LABEL_82;
  }
LABEL_24:
  while ( v22 )
  {
    v24 = HampHostIdStoreCompareUserByKey(DestinationSid, (char *)v22);
    if ( v24 >= 0 )
    {
      if ( v24 <= 0 )
        break;
      v25 = *(_QWORD *)(v22 + 8);
      if ( v23 && v25 )
      {
LABEL_55:
        v22 ^= v25;
        continue;
      }
    }
    else
    {
      v25 = *(_QWORD *)v22;
      if ( v23 && v25 )
        goto LABEL_55;
    }
    v22 = v25;
  }
  v26 = (_QWORD *)First;
  if ( !v22 || !*(_QWORD *)(v22 + 24) )
  {
LABEL_82:
    RtlReleaseSRWLockShared(v21);
    goto LABEL_62;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v21);
  RtlAcquireSRWLockShared(v22 + 56);
  v27 = *(_QWORD *)(v22 + 40);
  v28 = *(_BYTE *)(v22 + 48) & 1;
  if ( (*(_BYTE *)(v22 + 48) & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_60;
    v27 ^= v22 + 40;
  }
  if ( !v27 )
    goto LABEL_60;
  do
  {
    v29 = HampHostIdStoreCompareApplicationByKey(v46, (const wchar_t *)v27);
    if ( v29 < 0 )
    {
      v30 = *(_QWORD *)v27;
      if ( v28 && v30 )
        goto LABEL_78;
      goto LABEL_36;
    }
    if ( v29 <= 0 )
      break;
    v30 = *(_QWORD *)(v27 + 8);
    if ( v28 && v30 )
    {
LABEL_78:
      v27 ^= v30;
      continue;
    }
LABEL_36:
    v27 = v30;
  }
  while ( v27 );
  if ( !v27 || !*(_QWORD *)(v27 + 24) )
  {
LABEL_60:
    RtlReleaseSRWLockShared(v22 + 56);
    CemRcObjectDereference((_QWORD *)First);
    First = 0LL;
    i = (_QWORD *)v22;
    goto LABEL_61;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v22 + 56);
  First = (unsigned __int64)HamRcNodeGetFirst((struct _HAM_RC_TREE_NODE *)v27, 1u);
  for ( i = (_QWORD *)v22;
        First;
        First = (unsigned __int64)HamRcNodeGetSuccessor(
                                    (struct _HAM_RC_TREE_NODE *)v27,
                                    (struct _HAM_RC_TREE_NODE *)First) )
  {
    if ( !(unsigned int)HampHostIdStoreReferenceHostIdCallback((struct _HAM_HOSTID_ENTRY *)First, &v43) )
      break;
  }
  CemRcObjectDereference((_QWORD *)v27);
  CemRcObjectDereference(v26);
LABEL_61:
  CemRcObjectDereference(i);
  if ( First )
LABEL_62:
    CemRcObjectDereference((_QWORD *)First);
LABEL_63:
  if ( HampLockTrackerId != -1 )
  {
    v32 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v33 = *v32;
    if ( (*v32 & 0x800) == 0 )
      __int2c();
    v34 = v32[12]-- == 1;
    if ( v34 )
      *v32 = v33 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  RtlReleaseSRWLockShared(v40);
  v35 = v44;
  if ( v44 )
    v36 = *(_QWORD *)(v44 + 88);
  else
    v36 = -1LL;
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v69 = (int *)&v38;
    v66 = DestinationSid;
    v40 = (struct _HAM_HOSTID_STORE *)v36;
    v41 = v44;
    v70 = 4LL;
    v68 = 0;
    v67 = 4 * DestinationSid[1] + 8;
    v64 = &v40;
    v62 = &v41;
    v65 = 8LL;
    v63 = 8LL;
    do
      v34 = v46[++v7] == 0;
    while ( !v34 );
    v61 = 0;
    v60 = 2 * v7 + 2;
    *(_DWORD *)&v45.Level = 516;
    v55.Ptr = (ULONGLONG)off_1800DB220;
    v59 = v46;
    *(_DWORD *)&v45.Id = 184549376;
    v45.Keyword = 8LL;
    v55.Size = *(unsigned __int16 *)off_1800DB220;
    v56 = &unk_1800C18E7;
    v55.Reserved = 2;
    v57 = 63;
    v58 = 1;
    v39 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &v45, 0LL, 0LL, 7u, &v55);
  }
  return (struct _HAM_HOSTID_ENTRY *)v35;
}
