/*
 * XREFs of ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000A220
 * Callers:
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C0066A40 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C0008AF8 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00090A0 (-ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00092E0 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00093A0 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C002298C (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x1C0025EBC (WPP_RECORDER_SF_Dqqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z @ 0x1C00D0368 (-IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C00D0E5C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlgWrapBuffer@U_.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D11A4 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1240 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D1264 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C010C77C (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C010C7B0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 */

void __fastcall ndisFDoOidRequestInternal(char *Parameter)
{
  KSPIN_LOCK *v1; // r12
  KIRQL v3; // al
  KIRQL v4; // r8
  int v5; // edx
  _QWORD *v6; // rcx
  char *v7; // rdi
  __int64 v8; // rax
  int v9; // esi
  struct _NDIS_OID_REQUEST *v10; // r13
  __int64 v11; // r8
  unsigned int v12; // eax
  char *v13; // rcx
  NDIS_OID Oid; // r10d
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // ecx
  unsigned __int8 (__fastcall *v18)(_QWORD *, __int64, __int64, __int64); // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  KIRQL v22; // al
  KIRQL v23; // al
  __int64 v24; // r15
  NDIS_OID v25; // r14d
  __int64 v26; // rdx
  NDIS_STATUS v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  struct _NDIS_OID_REQUEST *v30; // rsi
  struct _NDIS_OID_REQUEST *v31; // rdx
  bool v32; // zf
  int v33; // edx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned int v38; // r9d
  __int64 v39; // r11
  __int64 v40; // r11
  const struct _NDIS_OID_REQUEST *v41; // rcx
  const struct _NDIS_OID_REQUEST *v42; // rcx
  __int64 v43; // r11
  int v44; // ecx
  int v45; // r9d
  NdisWatchdogState *v46; // rcx
  int v47; // [rsp+28h] [rbp-E0h]
  struct _NDIS_OID_REQUEST *v48; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v49[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v50; // [rsp+88h] [rbp-80h]
  __int128 v51; // [rsp+98h] [rbp-70h]
  __int64 v52; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v53[5]; // [rsp+B0h] [rbp-58h] BYREF
  int v54; // [rsp+D8h] [rbp-30h]
  int v55; // [rsp+DCh] [rbp-2Ch]
  _QWORD v56[5]; // [rsp+E0h] [rbp-28h] BYREF
  NDIS_STATUS v57; // [rsp+108h] [rbp+0h]
  int v58; // [rsp+10Ch] [rbp+4h]
  int v59; // [rsp+168h] [rbp+60h] BYREF
  unsigned int RequestFlags; // [rsp+170h] [rbp+68h] BYREF
  unsigned int RequestVPortID; // [rsp+178h] [rbp+70h] BYREF
  unsigned int RequestSwitchID; // [rsp+180h] [rbp+78h] BYREF

  v1 = (KSPIN_LOCK *)(Parameter + 144);
LABEL_2:
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v1);
    v4 = v3;
    v5 = *((_DWORD *)Parameter + 14);
    *((_QWORD *)Parameter + 19) = KeGetCurrentThread();
    if ( (v5 & 0x800) != 0 )
      break;
    v6 = Parameter + 160;
    v7 = (char *)*((_QWORD *)Parameter + 20);
    if ( v7 == Parameter + 160 )
      break;
    *((_DWORD *)Parameter + 14) = v5 | 0x800;
    if ( *((_QWORD **)v7 + 1) != v6 || (v8 = *(_QWORD *)v7, *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    *((_QWORD *)Parameter + 19) = 0LL;
    KeReleaseSpinLock(v1, v4);
    if ( !v7 )
      return;
    v9 = *((_DWORD *)v7 - 10);
    v10 = (struct _NDIS_OID_REQUEST *)(v7 - 72);
    *((_DWORD *)v7 + 4) &= ~4u;
    v32 = *Parameter == 17;
    v11 = 0LL;
    *(_OWORD *)&v49[1] = 0LL;
    v12 = 73;
    v50 = 0LL;
    v51 = 0LL;
    if ( v32 )
      v13 = Parameter;
    else
      v13 = (char *)*((_QWORD *)Parameter + 4);
    if ( !v10->PortNumber || (*((_DWORD *)v13 + 468) & 0x200) == 0 )
    {
      Oid = v10->DATA.QUERY_INFORMATION.Oid;
      v15 = 146LL;
      while ( v12 >= (unsigned int)v11 )
      {
        if ( *((_DWORD *)&unk_1C00D5E60 + 6 * v12) == Oid )
        {
          *((_DWORD *)v7 + 5) = v12;
          v16 = *((unsigned int *)v7 + 4);
          v17 = *((_DWORD *)v7 + 4) | 4;
          HIDWORD(v51) = 0;
          *((_DWORD *)v7 + 4) = v17;
          *(_QWORD *)&v50 = Parameter;
          v49[1] = 0LL;
          *(_QWORD *)&v51 = v7 - 72;
          if ( (v17 & 0x220) != 0 )
            *((_QWORD *)&v50 + 1) = *((_QWORD *)v7 + 4);
          else
            *((_QWORD *)&v50 + 1) = 0LL;
          if ( (v16 & 0x40) != 0 )
            v49[2] = *((_QWORD *)v7 + 4);
          else
            v49[2] = 0LL;
          DWORD2(v51) = 0;
          if ( (v16 & 0x840080) != 0 )
            break;
          v18 = (unsigned __int8 (__fastcall *)(_QWORD *, __int64, __int64, __int64))*((_QWORD *)&unk_1C00D5E60
                                                                                     + 3 * v12
                                                                                     + 1);
          if ( !v18 || v18(&v49[1], v16, v11, v15) != 1 )
            break;
          HIDWORD(v51) |= 4u;
          ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v49[1], v19, v20, v21);
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dqqd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v33,
              v34,
              21,
              v47,
              v9,
              (_BYTE)v7 - 72,
              (char)Parameter,
              3);
          goto LABEL_2;
        }
        if ( *((_DWORD *)&unk_1C00D5E60 + 6 * v12) <= Oid )
        {
          v11 = v12 + 1;
        }
        else
        {
          if ( !v12 )
            break;
          v15 = v12 - 1;
        }
        v12 = v11 + ((unsigned int)(v15 - v11 + 1) >> 1);
        if ( v12 > (unsigned int)v15 )
          break;
      }
    }
    v22 = KeAcquireSpinLockRaiseToDpc(v1);
    v32 = (*((_DWORD *)Parameter + 14) & 0x10000) == 0;
    *((_QWORD *)Parameter + 19) = 0LL;
    if ( v32 )
    {
      KeReleaseSpinLock(v1, v22);
      *((_DWORD *)v7 + 4) |= 0x20000u;
      v23 = KeAcquireSpinLockRaiseToDpc(v1);
      *((_QWORD *)Parameter + 22) = v10;
      *((_QWORD *)Parameter + 19) = 0LL;
      KeReleaseSpinLock(v1, v23);
      ndisDrainWatchdog(*((struct NDISWATCHDOG__ **)Parameter + 23));
      ndisArmWatchdog(
        *((struct NDISWATCHDOG__ **)Parameter + 23),
        Parameter,
        0x24u,
        *(void **)(*((_QWORD *)Parameter + 2) + 248LL),
        0x88B8u,
        v10->DATA.QUERY_INFORMATION.Oid);
      v24 = *((_QWORD *)Parameter + 2);
      v25 = v10->DATA.QUERY_INFORMATION.Oid;
      v48 = 0LL;
      v27 = ndisOidCloneForCompatibility(
              (struct _NDIS_OBJECT_HEADER *)Parameter,
              (struct _NDIS_OID_REQUEST *)(v7 - 72),
              1,
              &v48);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v28,
          0x68u,
          (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
          (char)Parameter,
          v25);
      v30 = v48;
      if ( !v27 )
      {
        if ( (unsigned int)dword_1C00F41D8 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 1024LL) )
          goto LABEL_33;
        if ( ((*(_DWORD *)(v39 + 88) >> 28) & 3) != 0 )
        {
          if ( ((*(_DWORD *)(v39 + 88) >> 28) & 3) != 2 )
            goto LABEL_33;
        }
        else
        {
          if ( !IsOidTelemetryFilterEnabled(*(_DWORD *)(v39 + 32), (struct _NDIS_OID_REQUEST_RESERVED *)(v39 + 72)) )
          {
LABEL_33:
            v31 = v10;
            if ( v30 )
              v31 = v30;
            v27 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_OID_REQUEST *))(v24 + 248))(
                    *((_QWORD *)Parameter + 3),
                    v31);
            goto LABEL_36;
          }
          v38 = dword_1C00F41D8;
        }
        if ( v38 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 1024LL) )
        {
          v48 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)Parameter + 6);
          v59 = *(_DWORD *)(v40 + 88);
          RequestFlags = GetRequestFlags((const struct _NDIS_OID_REQUEST *)v40);
          RequestVPortID = GetRequestVPortID(v41);
          RequestSwitchID = GetRequestSwitchID(v42);
          LODWORD(v49[0]) = *(_DWORD *)(v43 + 32);
          HIDWORD(v49[0]) = *(_DWORD *)(v43 + 4);
          v52 = *((_QWORD *)Parameter + 4) + 4008LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
            v44,
            (unsigned int)&unk_1C00DF635,
            v43 + 168,
            v45,
            (__int64)&v52,
            (__int64)v49 + 4,
            (__int64)v49,
            (__int64)&RequestSwitchID,
            (__int64)&RequestVPortID,
            (__int64)&RequestFlags,
            (__int64)&v59,
            (__int64)&v48);
        }
        goto LABEL_33;
      }
LABEL_36:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v26,
          v28,
          0x69u,
          (struct _GUID *)&WPP_13cdcbc839493cf5610b89d83e48f096_Traceguids,
          (char)Parameter,
          v25,
          (char)v10);
      v32 = v27 == 259;
      if ( v27 != 259 )
      {
        if ( v30 )
          ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)Parameter, v30, 1, 0LL);
        v32 = v27 == 259;
      }
      if ( !v32 )
      {
        v46 = (NdisWatchdogState *)*((_QWORD *)Parameter + 23);
        if ( v46 != (NdisWatchdogState *)-1LL )
          NdisWatchdogState::CancelTimer(v46);
        v56[0] = 0LL;
        v56[1] = 0LL;
        v56[3] = 0LL;
        v58 = 0;
        v56[4] = v10;
        v56[2] = Parameter;
        v57 = v27;
        ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v56, v26, v28, v29);
      }
    }
    else
    {
      KeReleaseSpinLock(v1, v22);
      v53[0] = 0LL;
      v53[1] = 0LL;
      v53[3] = 0LL;
      v55 = 0;
      v53[4] = v7 - 72;
      v53[2] = Parameter;
      v54 = -1073676286;
      ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v53, v35, v36, v37);
    }
  }
  *((_QWORD *)Parameter + 19) = 0LL;
  KeReleaseSpinLock(v1, v3);
}
