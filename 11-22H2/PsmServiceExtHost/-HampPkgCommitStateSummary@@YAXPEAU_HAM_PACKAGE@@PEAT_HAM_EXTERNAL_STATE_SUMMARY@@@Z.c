/*
 * XREFs of ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18001C0B0
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001D810 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1800017D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@.c)
 *     ?HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z @ 0x18001C4F0 (-HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DA70 (-HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientGetFirst@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU_CEM_RC_TABLE@@@Z @ 0x18004E068 (-HampClientGetFirst@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU_CEM_RC_TABLE@@@Z.c)
 *     ?HampClientGetNext@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU1@@Z @ 0x18004E090 (-HampClientGetNext@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU1@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E0C0 (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E310 (-HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
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
  int v13; // ecx
  char v14; // r14
  __int128 v15; // xmm0
  int v16; // eax
  __int128 v17; // xmm1
  int v18; // ecx
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  struct _HAM_CLIENT_CONTEXT *i; // rbx
  int v23; // ecx
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  char *Heap; // rax
  _OWORD *v31; // rdx
  __int64 v32; // r8
  int *v33; // rcx
  __int128 v34; // xmm0
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  _BYTE v37[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int Pid; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+5Ch] [rbp-A4h] BYREF
  const unsigned __int16 *v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+74h] [rbp-8Ch]
  _OWORD v45[8]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v46; // [rsp+F8h] [rbp-8h]
  __int128 v47; // [rsp+248h] [rbp+148h]
  __int128 v48; // [rsp+258h] [rbp+158h]
  __int128 v49; // [rsp+268h] [rbp+168h]
  __int128 v50; // [rsp+278h] [rbp+178h]
  int v51; // [rsp+288h] [rbp+188h]
  int v52; // [rsp+28Ch] [rbp+18Ch]

  memset_0(v45, 0, 0x214uLL);
  v4 = *((_OWORD *)a1 + 6);
  v5 = *((_OWORD *)a1 + 7);
  v46 = *((_WORD *)a1 + 112);
  v45[0] = v4;
  v43 = 1;
  v6 = *((_OWORD *)a1 + 8);
  v45[1] = v5;
  v7 = *((_OWORD *)a1 + 9);
  v45[2] = v6;
  v8 = *((_OWORD *)a1 + 10);
  v45[3] = v7;
  v9 = *((_OWORD *)a1 + 11);
  v45[4] = v8;
  v10 = *((_OWORD *)a1 + 12);
  v45[5] = v9;
  v11 = *((_OWORD *)a1 + 13);
  v45[6] = v10;
  v45[7] = v11;
  UpdateMask = HampStateSummaryGetUpdateMask((struct _HAM_PACKAGE *)((char *)a1 + 344), a2);
  v13 = *(_DWORD *)a2;
  v14 = UpdateMask;
  v15 = *(_OWORD *)((char *)a1 + 228);
  v16 = *((_DWORD *)a1 + 74);
  v17 = *(_OWORD *)((char *)a1 + 244);
  *((_DWORD *)a1 + 86) = *(_DWORD *)a2;
  v44 = v13;
  v18 = *((_DWORD *)a1 + 73);
  v52 = v16;
  v19 = *((_QWORD *)a1 + 4);
  v51 = v18;
  v47 = v15;
  v20 = *(_OWORD *)((char *)a1 + 260);
  v48 = v17;
  v21 = *(_OWORD *)((char *)a1 + 276);
  v49 = v20;
  v50 = v21;
  for ( i = HampClientGetFirst((struct _CEM_RC_TABLE *)((*(_QWORD *)(*(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                                                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                      - 88)); i; i = HampClientGetNext(i) )
  {
    if ( v52 )
    {
      v23 = *((_DWORD *)i + 42);
      if ( v23 )
      {
        if ( v52 != v23 )
          continue;
      }
    }
    if ( !v43 )
    {
      v24 = *((_DWORD *)i + 43);
      v25 = (v24 & 1) == 0;
      goto LABEL_9;
    }
    if ( v43 == 1 )
    {
      v24 = *((_DWORD *)i + 43);
      v25 = (v24 & 2) == 0;
LABEL_9:
      if ( !v25
        && ((v14 & 1) != 0 && (v24 & 4) != 0 || (v14 & 2) != 0 && (v24 & 8) != 0 || (v14 & 4) != 0 && (v24 & 0x10) != 0) )
      {
        if ( (unsigned int)dword_1800DB218 > 5 )
        {
          v38 = v44;
          v37[0] = v43;
          v41 = (const unsigned __int16 *)v45;
          Pid = HampClientGetPid(i);
          v42 = *((_QWORD *)i + 19);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
            v26,
            (int)&unk_1800C1C2A,
            v27,
            v28,
            (__int64)&v42,
            (__int64)&Pid,
            &v41,
            (__int64)v37,
            (__int64)&v38);
        }
        if ( (*((_BYTE *)i + 144) & 1) != 0 )
        {
          (*((void (__fastcall **)(int *, _QWORD))i + 16))(&v43, *((_QWORD *)i + 17));
        }
        else
        {
          HampClientAcquireLockShared(i);
          if ( *((_DWORD *)i + 30) || *((_DWORD *)i + 31) )
          {
            v29 = *((_QWORD *)i + 16);
            RtlAcquireSRWLockExclusive(v29 + 24);
            if ( *(_BYTE *)(v29 + 32)
              || (int)RtlQueryWnfMetaNotification(&v40, 2LL, *((_QWORD *)i + 15), 0LL) >= 0 && !v40 )
            {
              Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x23CuLL);
              if ( Heap )
              {
                v31 = Heap + 28;
                *((_QWORD *)Heap + 2) = *((_QWORD *)i + 15);
                v32 = 4LL;
                v33 = &v43;
                do
                {
                  v31 += 8;
                  v34 = *(_OWORD *)v33;
                  v33 += 32;
                  *(v31 - 8) = v34;
                  *(v31 - 7) = *((_OWORD *)v33 - 7);
                  *(v31 - 6) = *((_OWORD *)v33 - 6);
                  *(v31 - 5) = *((_OWORD *)v33 - 5);
                  *(v31 - 4) = *((_OWORD *)v33 - 4);
                  *(v31 - 3) = *((_OWORD *)v33 - 3);
                  *(v31 - 2) = *((_OWORD *)v33 - 2);
                  *(v31 - 1) = *((_OWORD *)v33 - 1);
                  --v32;
                }
                while ( v32 );
                *v31 = *(_OWORD *)v33;
                v31[1] = *((_OWORD *)v33 + 1);
                *((_DWORD *)Heap + 6) = 544;
                v35 = *(_QWORD **)(v29 + 8);
                if ( *v35 != v29 )
                  __fastfail(3u);
                *(_QWORD *)Heap = v29;
                *((_QWORD *)Heap + 1) = v35;
                *v35 = Heap;
                *(_QWORD *)(v29 + 8) = Heap;
                if ( !*(_BYTE *)(v29 + 32) )
                {
                  v36 = *(_QWORD *)(v29 + 16);
                  *(_BYTE *)(v29 + 32) = 1;
                  TpPostWork(v36);
                }
              }
            }
            else
            {
              RtlPublishWnfStateData(*((_QWORD *)i + 15), 0LL, &v43, 544LL, 0LL);
            }
            RtlReleaseSRWLockExclusive(v29 + 24);
          }
          HampClientReleaseLockShared(i);
        }
      }
    }
  }
}
