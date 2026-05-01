/*
 * XREFs of ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x18000FDE0
 * Callers:
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000F9EC (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampManagerIssueStateChangeNotifications(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *a2,
        char a3)
{
  DWORD v3; // edi
  __int64 **v4; // r12
  _QWORD *Value; // rbx
  __int64 *i; // rbx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  __int64 *v14; // rax
  __int64 v15; // rdx
  bool v16; // zf
  const unsigned __int16 *v17; // rdi
  void *v18; // rcx
  DWORD ProcessId; // eax
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rdi
  char *Heap; // rax
  struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *v24; // rdx
  __int64 v25; // r8
  _OWORD *v26; // rcx
  __int128 v27; // xmm0
  _QWORD *v28; // rcx
  __int64 v29; // rcx
  char v30; // [rsp+30h] [rbp-89h] BYREF
  int v31; // [rsp+34h] [rbp-85h] BYREF
  DWORD v32; // [rsp+38h] [rbp-81h] BYREF
  int v33; // [rsp+3Ch] [rbp-7Dh] BYREF
  _DWORD v34[2]; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-59h] BYREF
  void *v37; // [rsp+70h] [rbp-49h]
  int v38; // [rsp+78h] [rbp-41h]
  int v39; // [rsp+7Ch] [rbp-3Dh]
  int *v40; // [rsp+80h] [rbp-39h]
  __int64 v41; // [rsp+88h] [rbp-31h]
  DWORD *v42; // [rsp+90h] [rbp-29h]
  __int64 v43; // [rsp+98h] [rbp-21h]
  const unsigned __int16 *v44; // [rsp+A0h] [rbp-19h]
  int v45; // [rsp+A8h] [rbp-11h]
  int v46; // [rsp+ACh] [rbp-Dh]
  char *v47; // [rsp+B0h] [rbp-9h]
  __int64 v48; // [rsp+B8h] [rbp-1h]
  int *v49; // [rsp+C0h] [rbp+7h]
  __int64 v50; // [rsp+C8h] [rbp+Fh]

  v3 = HampLockTrackerId;
  v4 = (__int64 **)((char *)a1 + 112);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockShared(a1);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( (i[15] & 1) == 0 )
    {
      v10 = *((_DWORD *)a2 + 135);
      if ( !v10 || (v11 = *((_DWORD *)i + 34)) == 0 || v10 == v11 )
      {
        v12 = *(_DWORD *)a2;
        if ( *(_DWORD *)a2 )
        {
          if ( v12 == 1 )
          {
            v13 = *((_DWORD *)i + 36);
            if ( (v13 & 2) != 0 )
            {
LABEL_12:
              if ( (v13 & 4) != 0 && (a3 & 1) != 0
                || (v13 & 8) != 0 && (a3 & 2) != 0
                || (a3 & 4) != 0 && (v13 & 0x10) != 0 )
              {
                if ( (unsigned int)dword_1800DC218 > 5 )
                {
                  v17 = (const unsigned __int16 *)((char *)a2 + 8);
                  v18 = (void *)i[20];
                  v31 = *((_DWORD *)a2 + 1);
                  v30 = v12;
                  ProcessId = GetProcessId(v18);
                  v50 = 4LL;
                  v32 = ProcessId;
                  v33 = *((_DWORD *)i + 35);
                  v49 = &v31;
                  v47 = &v30;
                  v48 = 1LL;
                  if ( a2 == (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)-8LL )
                  {
                    v17 = &word_1800B7A9C;
                    v21 = 2;
                  }
                  else
                  {
                    v20 = -1LL;
                    do
                      v16 = v17[++v20] == 0;
                    while ( !v16 );
                    v21 = 2 * v20 + 2;
                  }
                  v45 = v21;
                  v42 = &v32;
                  v44 = v17;
                  v40 = &v33;
                  *(_DWORD *)&EventDescriptor.Level = 5;
                  UserData.Ptr = (ULONGLONG)off_1800DC220;
                  v46 = 0;
                  v43 = 4LL;
                  v41 = 4LL;
                  *(_DWORD *)&EventDescriptor.Id = 184549376;
                  EventDescriptor.Keyword = 0LL;
                  UserData.Size = *(unsigned __int16 *)off_1800DC220;
                  v37 = &unk_1800BFD6E;
                  UserData.Reserved = 2;
                  v38 = 81;
                  v39 = 1;
                  v34[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                  EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
                }
                if ( (i[15] & 2) != 0 )
                {
                  ((void (__fastcall *)(struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *, __int64))i[13])(a2, i[14]);
                }
                else
                {
                  v22 = i[13];
                  RtlAcquireSRWLockExclusive(v22 + 24);
                  if ( *(_BYTE *)(v22 + 32) || (int)RtlQueryWnfMetaNotification(v34, 2LL, i[12]) >= 0 && !v34[0] )
                  {
                    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x23CuLL);
                    if ( Heap )
                    {
                      v24 = a2;
                      *((_QWORD *)Heap + 2) = i[12];
                      v25 = 4LL;
                      v26 = Heap + 28;
                      do
                      {
                        v26 += 8;
                        v27 = *(_OWORD *)v24;
                        v24 = (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)((char *)v24 + 128);
                        *(v26 - 8) = v27;
                        *(v26 - 7) = *((_OWORD *)v24 - 7);
                        *(v26 - 6) = *((_OWORD *)v24 - 6);
                        *(v26 - 5) = *((_OWORD *)v24 - 5);
                        *(v26 - 4) = *((_OWORD *)v24 - 4);
                        *(v26 - 3) = *((_OWORD *)v24 - 3);
                        *(v26 - 2) = *((_OWORD *)v24 - 2);
                        *(v26 - 1) = *((_OWORD *)v24 - 1);
                        --v25;
                      }
                      while ( v25 );
                      *v26 = *(_OWORD *)v24;
                      v26[1] = *((_OWORD *)v24 + 1);
                      *((_DWORD *)Heap + 6) = 544;
                      v28 = *(_QWORD **)(v22 + 8);
                      if ( *v28 != v22 )
                        __fastfail(3u);
                      *(_QWORD *)Heap = v22;
                      *((_QWORD *)Heap + 1) = v28;
                      *v28 = Heap;
                      *(_QWORD *)(v22 + 8) = Heap;
                      if ( !*(_BYTE *)(v22 + 32) )
                      {
                        v29 = *(_QWORD *)(v22 + 16);
                        *(_BYTE *)(v22 + 32) = 1;
                        TpPostWork(v29);
                      }
                    }
                  }
                  else
                  {
                    RtlPublishWnfStateData(i[12], 0LL, a2, 544LL, 0LL);
                  }
                  RtlReleaseSRWLockExclusive(v22 + 24);
                }
              }
            }
          }
        }
        else
        {
          v13 = *((_DWORD *)i + 36);
          if ( (v13 & 1) != 0 )
            goto LABEL_12;
        }
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v15 = *v14;
    if ( (*v14 & 0x400) == 0 )
      __int2c();
    v16 = v14[11]-- == 1;
    if ( v16 )
      *v14 = v15 & 0xFFFFFFFFFFFFFBFFuLL;
  }
  RtlReleaseSRWLockShared(a1);
}
