/*
 * XREFs of ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180010350
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011800 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z @ 0x1800108E8 (-HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampPkgCommitStateSummary(struct _HAM_PACKAGE *a1, union _HAM_EXTERNAL_STATE_SUMMARY *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  char UpdateMask; // al
  __int128 v13; // xmm0
  int v14; // ecx
  char v15; // si
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm0
  int v19; // ecx
  __int128 v20; // xmm1
  DWORD v21; // edi
  unsigned __int64 v22; // r13
  __int64 **v23; // r15
  _QWORD *Value; // rbx
  __int64 *i; // rbx
  int v26; // eax
  int v27; // edx
  __int64 *v28; // rax
  __int64 v29; // rdx
  bool v30; // zf
  void *v31; // rcx
  DWORD ProcessId; // eax
  __int64 v33; // rax
  __int64 v34; // rdi
  char *Heap; // rax
  int *v36; // rdx
  __int64 v37; // r8
  _OWORD *v38; // rcx
  __int128 v39; // xmm0
  _QWORD *v40; // rcx
  __int64 v41; // rcx
  char v42; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v46[2]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  int v48; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+64h] [rbp-9Ch]
  _OWORD v50[8]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v51; // [rsp+E8h] [rbp-18h]
  char v52[334]; // [rsp+EAh] [rbp-16h] BYREF
  __int128 v53; // [rsp+238h] [rbp+138h]
  __int128 v54; // [rsp+248h] [rbp+148h]
  __int128 v55; // [rsp+258h] [rbp+158h]
  __int128 v56; // [rsp+268h] [rbp+168h]
  int v57; // [rsp+278h] [rbp+178h]
  int v58; // [rsp+27Ch] [rbp+17Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+280h] [rbp+180h] BYREF
  void *v60; // [rsp+290h] [rbp+190h]
  int v61; // [rsp+298h] [rbp+198h]
  int v62; // [rsp+29Ch] [rbp+19Ch]
  int *v63; // [rsp+2A0h] [rbp+1A0h]
  __int64 v64; // [rsp+2A8h] [rbp+1A8h]
  DWORD *v65; // [rsp+2B0h] [rbp+1B0h]
  __int64 v66; // [rsp+2B8h] [rbp+1B8h]
  _OWORD *v67; // [rsp+2C0h] [rbp+1C0h]
  int v68; // [rsp+2C8h] [rbp+1C8h]
  int v69; // [rsp+2CCh] [rbp+1CCh]
  char *v70; // [rsp+2D0h] [rbp+1D0h]
  __int64 v71; // [rsp+2D8h] [rbp+1D8h]
  int *v72; // [rsp+2E0h] [rbp+1E0h]
  __int64 v73; // [rsp+2E8h] [rbp+1E8h]

  memset_0(v52, 0, sizeof(v52));
  v4 = *((_OWORD *)a1 + 6);
  v5 = *((_OWORD *)a1 + 7);
  v51 = *((_WORD *)a1 + 112);
  v50[0] = v4;
  v48 = 1;
  v6 = *((_OWORD *)a1 + 8);
  v50[1] = v5;
  v7 = *((_OWORD *)a1 + 9);
  v50[2] = v6;
  v8 = *((_OWORD *)a1 + 10);
  v50[3] = v7;
  v9 = *((_OWORD *)a1 + 11);
  v50[4] = v8;
  v10 = *((_OWORD *)a1 + 12);
  v50[5] = v9;
  v11 = *((_OWORD *)a1 + 13);
  v50[6] = v10;
  v50[7] = v11;
  UpdateMask = HampStateSummaryGetUpdateMask((struct _HAM_PACKAGE *)((char *)a1 + 344), a2);
  v13 = *(_OWORD *)((char *)a1 + 228);
  v14 = *(_DWORD *)a2;
  v15 = UpdateMask;
  v16 = *(_OWORD *)((char *)a1 + 244);
  v58 = *((_DWORD *)a1 + 74);
  v17 = *((_QWORD *)a1 + 4);
  *((_DWORD *)a1 + 86) = v14;
  v53 = v13;
  v49 = v14;
  v18 = *(_OWORD *)((char *)a1 + 260);
  v19 = *((_DWORD *)a1 + 73);
  v54 = v16;
  v57 = v19;
  v20 = *(_OWORD *)((char *)a1 + 276);
  v21 = HampLockTrackerId;
  v55 = v18;
  v56 = v20;
  v22 = *(_QWORD *)(*(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  v23 = (__int64 **)(v22 - 56);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockShared(v22 - 168);
  for ( i = *v23; i != (__int64 *)v23; i = (__int64 *)*i )
  {
    if ( (i[15] & 1) == 0 && (!v58 || (v26 = *((_DWORD *)i + 34)) == 0 || v58 == v26) )
    {
      if ( v48 )
      {
        if ( v48 == 1 )
        {
          v27 = *((_DWORD *)i + 36);
          if ( (v27 & 2) != 0 )
          {
LABEL_13:
            if ( (v27 & 4) != 0 && (v15 & 1) != 0
              || (v27 & 8) != 0 && (v15 & 2) != 0
              || (v27 & 0x10) != 0 && (v15 & 4) != 0 )
            {
              if ( (unsigned int)dword_1800DC218 > 5 )
              {
                v31 = (void *)i[20];
                v43 = v49;
                v42 = v48;
                ProcessId = GetProcessId(v31);
                v73 = 4LL;
                v44 = ProcessId;
                v45 = *((_DWORD *)i + 35);
                v72 = &v43;
                v70 = &v42;
                v33 = -1LL;
                v71 = 1LL;
                do
                  v30 = *((_WORD *)v50 + ++v33) == 0;
                while ( !v30 );
                v69 = 0;
                v68 = 2 * v33 + 2;
                v67 = v50;
                v66 = 4LL;
                v65 = &v44;
                v64 = 4LL;
                v63 = &v45;
                *(_DWORD *)&EventDescriptor.Level = 5;
                UserData.Ptr = (ULONGLONG)off_1800DC220;
                *(_DWORD *)&EventDescriptor.Id = 184549376;
                EventDescriptor.Keyword = 0LL;
                UserData.Size = *(unsigned __int16 *)off_1800DC220;
                UserData.Reserved = 2;
                v60 = &unk_1800BFD6E;
                v61 = 81;
                v62 = 1;
                v46[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
              }
              if ( (i[15] & 2) != 0 )
              {
                ((void (__fastcall *)(int *, __int64))i[13])(&v48, i[14]);
              }
              else
              {
                v34 = i[13];
                RtlAcquireSRWLockExclusive(v34 + 24);
                if ( *(_BYTE *)(v34 + 32) || (int)RtlQueryWnfMetaNotification(v46, 2LL, i[12]) >= 0 && !v46[0] )
                {
                  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x23CuLL);
                  if ( Heap )
                  {
                    v36 = &v48;
                    *((_QWORD *)Heap + 2) = i[12];
                    v37 = 4LL;
                    v38 = Heap + 28;
                    do
                    {
                      v38 += 8;
                      v39 = *(_OWORD *)v36;
                      v36 += 32;
                      *(v38 - 8) = v39;
                      *(v38 - 7) = *((_OWORD *)v36 - 7);
                      *(v38 - 6) = *((_OWORD *)v36 - 6);
                      *(v38 - 5) = *((_OWORD *)v36 - 5);
                      *(v38 - 4) = *((_OWORD *)v36 - 4);
                      *(v38 - 3) = *((_OWORD *)v36 - 3);
                      *(v38 - 2) = *((_OWORD *)v36 - 2);
                      *(v38 - 1) = *((_OWORD *)v36 - 1);
                      --v37;
                    }
                    while ( v37 );
                    *v38 = *(_OWORD *)v36;
                    v38[1] = *((_OWORD *)v36 + 1);
                    *((_DWORD *)Heap + 6) = 544;
                    v40 = *(_QWORD **)(v34 + 8);
                    if ( *v40 != v34 )
                      __fastfail(3u);
                    *(_QWORD *)Heap = v34;
                    *((_QWORD *)Heap + 1) = v40;
                    *v40 = Heap;
                    *(_QWORD *)(v34 + 8) = Heap;
                    if ( !*(_BYTE *)(v34 + 32) )
                    {
                      v41 = *(_QWORD *)(v34 + 16);
                      *(_BYTE *)(v34 + 32) = 1;
                      TpPostWork(v41);
                    }
                  }
                }
                else
                {
                  RtlPublishWnfStateData(i[12], 0LL, &v48, 544LL, 0LL);
                }
                RtlReleaseSRWLockExclusive(v34 + 24);
              }
            }
          }
        }
      }
      else
      {
        v27 = *((_DWORD *)i + 36);
        if ( (v27 & 1) != 0 )
          goto LABEL_13;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v28 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v29 = *v28;
    if ( (*v28 & 0x400) == 0 )
      __int2c();
    v30 = v28[11]-- == 1;
    if ( v30 )
      *v28 = v29 & 0xFFFFFFFFFFFFFBFFuLL;
  }
  RtlReleaseSRWLockShared(v22 - 168);
}
