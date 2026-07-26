/*
 * XREFs of ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009560
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009C80 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000A220 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000D6F0 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014814 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C00273F4 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x1C00973C0 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C009F05C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C009F1FC (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C00B5A80 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1C0001008 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxq_EtwWriteTransfer @ 0x1C0006AF8 (McTemplateK0jqxq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00092E0 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00093A0 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_Dqqqqd @ 0x1C0009460 (WPP_RECORDER_SF_Dqqqqd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C000D140 (WPP_RECORDER_SF_qDd.c)
 *     NdisFreeRefCount @ 0x1C0015420 (NdisFreeRefCount.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F3B0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D7FC (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C00B5B84 (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C00B5C64 (ndisInvokeDirectOidRequestComplete.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49FC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z @ 0x1C00D0368 (-IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x1C00D03E4 (--$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x1C00D0544 (--$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0AA4 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLO.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0B90 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0C80 (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BL.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x1C00D0D6C (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0148B30 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisOidRequestComplete(struct _NDIS_REQ_TRACKER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  char v5; // r12
  struct _NDIS_OPEN_BLOCK *v7; // r13
  struct _NDIS_OPEN_BLOCK *v8; // rdi
  __int64 v9; // r9
  int v10; // ecx
  int v11; // r15d
  _DWORD *v12; // rsi
  ULONG_PTR v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  void (__fastcall *v16)(struct _NDIS_REQ_TRACKER *, ULONG_PTR, __int64, __int64); // rax
  __int64 v17; // r14
  _DWORD *v18; // rdx
  int v19; // eax
  int v20; // edi
  ULONG_PTR v21; // rdi
  __int64 v22; // rdi
  KIRQL v23; // al
  __int64 v24; // rdi
  KIRQL v25; // al
  ULONG_PTR v26; // r8
  KIRQL v27; // bp
  int v28; // ecx
  __int64 v29; // r10
  unsigned __int8 v30; // r9
  _BYTE *v31; // rdx
  bool v32; // zf
  struct _NDIS_OPEN_BLOCK *v33; // rdi
  unsigned int v34; // esi
  __int64 v35; // rdi
  _NDIS_MINIPORT_BLOCK *v36; // r14
  int v37; // ebp
  int v38; // r8d
  char v39; // al
  __int64 v40; // rcx
  int v41; // ecx
  KIRQL v42; // dl
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  KIRQL v51; // al
  KSPIN_LOCK *p_RefCountLock; // rsi
  KIRQL v53; // r15
  ULONG_PTR RefCountTracker; // r8
  int v55; // ecx
  __int64 v56; // r10
  unsigned __int8 v57; // r9
  _BYTE *v58; // rdx
  char v59; // al
  struct _NDIS_OID_REQUEST_RESERVED *v60; // rdx
  bool v61; // al
  KIRQL v62; // al
  __int64 v63; // rax
  struct _NDIS_MINIPORT_BLOCK **v64; // rax
  struct _NDIS_MINIPORT_BLOCK *v65; // rbp
  int v66; // edx
  int v67; // r8d
  int v68; // ecx
  KIRQL v69; // dl
  ULONG_PTR v70; // rsi
  unsigned int v71; // edx
  int v72; // ecx
  __int64 v73; // r11
  ULONG_PTR v74; // rdi
  unsigned int v75; // edx
  int v76; // ecx
  int v77; // [rsp+20h] [rbp-88h]
  __int64 v78; // [rsp+40h] [rbp-68h]
  unsigned __int8 v79; // [rsp+B0h] [rbp+8h] BYREF
  char v80; // [rsp+B8h] [rbp+10h]
  int v81; // [rsp+C0h] [rbp+18h]
  struct _NDIS_OPEN_BLOCK *v82; // [rsp+C8h] [rbp+20h]

  v4 = *((_QWORD *)a1 + 4);
  v5 = 0;
  v82 = 0LL;
  v7 = 0LL;
  v79 = 0;
  v80 = 0;
  v8 = *(struct _NDIS_OPEN_BLOCK **)(v4 + 104);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v78 = *((_QWORD *)a1 + 2);
    WPP_RECORDER_SF_Dqqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v77);
  }
  v9 = *((_QWORD *)a1 + 4);
  if ( (unsigned int)dword_1C00F41D8 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 1024LL) )
  {
    v60 = (struct _NDIS_OID_REQUEST_RESERVED *)(v9 + 72);
    if ( ((*(_DWORD *)(v9 + 88) >> 28) & 3) != 0 )
    {
      if ( ((*(_DWORD *)(v9 + 88) >> 28) & 3) != 2 )
        goto LABEL_4;
    }
    else
    {
      v61 = IsOidTelemetryFilterEnabled(*(_DWORD *)(v9 + 32), v60);
      v9 = *((_QWORD *)a1 + 4);
      if ( !v61 )
        goto LABEL_4;
    }
    if ( (*(_DWORD *)(v9 + 88) & 8) != 0 )
      TraceLoggingWriteOidRequestCompletedActivity<2>(a1, v60);
    else
      TraceLoggingWriteOidRequestCompletedActivity<0>(a1, v60);
  }
LABEL_4:
  v10 = *(_DWORD *)(v4 + 88);
  v11 = v10 & 0x200000;
  *(_DWORD *)(v4 + 88) = v10 | 1;
  v12 = (_DWORD *)*((_QWORD *)a1 + 4);
  v81 = v10 & 0x200000;
  if ( (v10 & 0x220) != 0 )
  {
    *((_QWORD *)a1 + 3) = v8;
    v32 = (*(_DWORD *)(v4 + 88) & 0x200) == 0;
    v82 = v8;
    if ( v32 )
      goto LABEL_7;
  }
  else
  {
    *((_QWORD *)a1 + 3) = 0LL;
    if ( v8->Header.Type == 5 )
    {
      v7 = v8;
      *((_QWORD *)a1 + 1) = v8;
      goto LABEL_7;
    }
  }
  v80 = 1;
LABEL_7:
  v13 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_BYTE *)(v13 + 32) > 6u || *(_BYTE *)(v13 + 32) == 6 && *(_BYTE *)(v13 + 33) >= 0x28u)
      && !*((_DWORD *)a1 + 10) )
    {
      v43 = v12[1];
      if ( (v43 & 0xFFFFFFFD) != 0 )
      {
        if ( v43 != 12 )
          goto LABEL_12;
        v44 = v12[13];
        v45 = v12[15];
      }
      else
      {
        v44 = v12[12];
        v45 = v12[13];
      }
      if ( v45 > v44 )
        ndisBugCheckEx(0x1DuLL, v13, (ULONG_PTR)v12, 0LL);
    }
  }
  else
  {
    v13 = *((_QWORD *)a1 + 2);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 16);
      if ( *(_BYTE *)(v14 + 100) > 6u || *(_BYTE *)(v14 + 100) == 6 && *(_BYTE *)(v14 + 101) >= 0x28u )
      {
        v46 = *(_QWORD *)(v13 + 32);
        if ( (*(_BYTE *)(v46 + 32) > 6u || *(_BYTE *)(v46 + 32) == 6 && *(_BYTE *)(v46 + 33) >= 0x28u)
          && !*((_DWORD *)a1 + 10) )
        {
          v47 = v12[1];
          if ( (v47 & 0xFFFFFFFD) != 0 )
          {
            if ( v47 != 12 )
              goto LABEL_12;
            v48 = v12[13];
            v49 = v12[15];
          }
          else
          {
            v48 = v12[12];
            v49 = v12[13];
          }
          if ( v49 > v48 )
            ndisBugCheckEx(0x1DuLL, v13, (ULONG_PTR)v12, 0LL);
        }
      }
    }
  }
LABEL_12:
  v15 = v12;
  if ( (v12[22] & 0x1240004) == 4 )
  {
    v16 = (void (__fastcall *)(struct _NDIS_REQ_TRACKER *, ULONG_PTR, __int64, __int64))*((_QWORD *)&unk_1C00D5E70
                                                                                        + 3 * (unsigned int)v12[23]);
    v15 = v12;
    if ( v16 )
    {
      v16(a1, v13, a3, v9);
      v15 = (_DWORD *)*((_QWORD *)a1 + 4);
    }
  }
  v17 = *(_QWORD *)a1;
  v18 = v15;
  if ( *(_QWORD *)a1 && v15[8] == -50265855 && *((_DWORD *)a1 + 10) )
  {
    v62 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v17 + 3872));
    *(_DWORD *)(v17 + 3880) = *(_DWORD *)(v17 + 3884);
    v79 = v62;
    *(_DWORD *)(v17 + 3884) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 3872), v62);
    v18 = (_DWORD *)*((_QWORD *)a1 + 4);
  }
  v19 = *(_DWORD *)(v4 + 88);
  LOBYTE(a3) = (v19 & 2) != 0;
  LOBYTE(v9) = (v19 & 0x100) != 0;
  v20 = v18[1];
  if ( (v19 & 0x2000000) != 0 )
    v5 = 1;
  if ( (*(_DWORD *)(v4 + 88) & 8) != 0 )
  {
    *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 10);
    KeSetEvent((PRKEVENT)(v4 + 112), 0, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  else if ( (_BYTE)a3 == 1 )
  {
    if ( (v19 & 0x100) != 0 )
    {
      v63 = *((_QWORD *)a1 + 2);
      if ( v63 )
        v64 = (struct _NDIS_MINIPORT_BLOCK **)(v63 + 32);
      else
        v64 = (struct _NDIS_MINIPORT_BLOCK **)a1;
      v65 = *v64;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*v64, &v79);
      if ( v20 == 1 && (v65->Flags & 0x200000) != 0 )
      {
        v68 = *((_DWORD *)a1 + 10);
        if ( v68 && v68 != -1073676276 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v66) = 3;
          WPP_RECORDER_SF_qDd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v66,
            v67,
            17,
            (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
            (char)v65,
            *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
            v68);
        }
        ndisMResetCompleteStage2(v65);
      }
      v65->Flags &= ~0x1000000u;
      v69 = v79;
      v65->MiniportThread = 0LL;
      KeReleaseSpinLock(&v65->Lock, v69);
    }
    ExFreePoolWithTag(*((PVOID *)a1 + 4), 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v21 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v22 = *((_QWORD *)a1 + 2);
    if ( !v22 )
      goto LABEL_38;
    if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    {
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 144));
      if ( v11 )
      {
        --*(_DWORD *)(v22 + 704);
      }
      else
      {
        *(_DWORD *)(v22 + 56) &= ~0x800u;
        *(_QWORD *)(v22 + 176) = 0LL;
      }
      *(_QWORD *)(v22 + 152) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 144), v23);
    }
    v24 = v22 + 312;
    if ( v11 )
    {
      ndisDereferenceRef((PKSPIN_LOCK)v24, 0x10u);
      goto LABEL_38;
    }
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v24);
    v26 = *(_QWORD *)(v24 + 16);
    v27 = v25;
    if ( v26 - 2 <= 1 )
      goto LABEL_36;
    if ( v26 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v26, 0LL);
    if ( *(_BYTE *)(v26 + 2) <= 0xFu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v26, 0xFuLL);
    v28 = *(unsigned __int8 *)(v26 + 1);
    if ( *(_BYTE *)(v26 + 1) )
    {
      if ( v28 != 1 )
        goto LABEL_36;
      v70 = v26 + 968;
      v71 = *(_DWORD *)(v26 + 1024);
      v72 = (unsigned __int16)v71 >> 1;
      if ( v71 >> 17 < 0x3FFE && v72 == (v71 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v26 + 968));
        *(_DWORD *)(v70 + 56) &= 0x10001u;
        goto LABEL_36;
      }
      if ( v72 != 0 || (v71 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v26 + 968), 0);
        goto LABEL_36;
      }
    }
    else
    {
      v29 = *(_QWORD *)(v26 + 8);
      if ( v29 )
      {
        v30 = *(_BYTE *)(v26 + 3);
        if ( v30 )
        {
          while ( 1 )
          {
            v31 = (_BYTE *)(v29 + 2LL * (unsigned __int8)v28);
            if ( *v31 == 15 )
            {
              v39 = v31[1];
              if ( v39 )
                break;
            }
            LOBYTE(v28) = v28 + 1;
            if ( (unsigned __int8)v28 >= v30 )
              goto LABEL_35;
          }
          v31[1] = v39 - 1;
          goto LABEL_36;
        }
      }
LABEL_35:
      if ( _bittestandreset((signed __int32 *)(v26 + 16), 0xFu) )
      {
LABEL_36:
        v32 = (*(_WORD *)(v24 + 8))-- == 1;
        if ( v32 && !*(_BYTE *)(v24 + 11) )
        {
          NdisFreeRefCount(*(_QWORD *)(v24 + 16));
          *(_QWORD *)(v24 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v24, v27);
        goto LABEL_38;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v26, 0xFuLL);
  }
  v79 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 96));
  *(_QWORD *)(v21 + 520) = KeGetCurrentThread();
  if ( !v11 )
  {
    *(_DWORD *)(v21 + 4420) &= ~2u;
    if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    {
      if ( (byte_1C00F7641 & 0x40) != 0 )
        McTemplateK0jqxq_EtwWriteTransfer(
          v40,
          (__int64)&ClearingOidRequest,
          v21 + 4008,
          v21 + 4008,
          *(_DWORD *)(v21 + 4056),
          *(_QWORD *)(v21 + 4024),
          1);
      *(_DWORD *)(v21 + 4420) &= ~1u;
      *(_QWORD *)(v21 + 2216) = 0LL;
    }
    v41 = *((_DWORD *)a1 + 11);
    if ( (v41 & 3) == 2 && *(_DWORD **)(v21 + 2208) != v12 )
      ndisBugCheckEx(0x26uLL, v21, (ULONG_PTR)v12, 0LL);
    if ( (v41 & 1) == 0 && *(_QWORD *)(v21 + 2208) )
      *(_QWORD *)(v21 + 2208) = 0LL;
  }
  v42 = v79;
  *(_QWORD *)(v21 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 96), v42);
  *(_WORD *)(v21 + 1822) = 0;
LABEL_38:
  v33 = v82;
  if ( !v82 || v5 )
    goto LABEL_39;
  if ( !v80 )
  {
    if ( !v11 )
    {
      if ( (unsigned int)dword_1C00F41D8 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 1024LL) )
        goto LABEL_85;
      if ( ((*(_DWORD *)(v73 + 88) >> 28) & 3) != 0 )
      {
        if ( ((*(_DWORD *)(v73 + 88) >> 28) & 3) != 2 )
          goto LABEL_85;
      }
      else if ( !IsOidTelemetryFilterEnabled(*(_DWORD *)(v73 + 32), (struct _NDIS_OID_REQUEST_RESERVED *)(v73 + 72)) )
      {
LABEL_85:
        ((void (__fastcall *)(struct _NDIS_OPEN_BLOCK *, _QWORD, _QWORD, __int64))v33->OidRequestCompleteHandler)(
          v33,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 10),
          v9);
        goto LABEL_86;
      }
      if ( *(_QWORD *)(v73 + 96) )
        TraceLoggingWriteOidRequestReturnedActivity<0,_NDIS_OPEN_BLOCK>(v33, v73);
      else
        TraceLoggingWriteOidRequestReturnedActivity<2,_NDIS_OPEN_BLOCK>(v33, v73);
      goto LABEL_85;
    }
    ndisInvokeDirectOidRequestComplete((char)v82, *((_QWORD *)a1 + 4), *((_DWORD *)a1 + 10));
  }
LABEL_86:
  MiniportHandle = v33->MiniportHandle;
  v51 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
  p_RefCountLock = &v33->RefCountLock;
  MiniportHandle->MiniportThread = KeGetCurrentThread();
  v53 = v51;
  KeAcquireSpinLockAtDpcLevel(&v33->RefCountLock);
  RefCountTracker = (ULONG_PTR)v33->RefCountTracker;
  if ( RefCountTracker - 2 <= 1 )
    goto LABEL_96;
  if ( RefCountTracker < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, RefCountTracker, 0LL);
  if ( *(_BYTE *)(RefCountTracker + 2) <= 6u )
    ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 6uLL);
  v55 = *(unsigned __int8 *)(RefCountTracker + 1);
  if ( *(_BYTE *)(RefCountTracker + 1) )
  {
    if ( v55 != 1 )
      goto LABEL_96;
    v74 = RefCountTracker + 392;
    v75 = *(_DWORD *)(RefCountTracker + 448);
    v76 = (unsigned __int16)v75 >> 1;
    if ( v75 >> 17 < 0x3FFE && v76 == (v75 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 392));
      *(_DWORD *)(v74 + 56) &= 0x10001u;
    }
    else
    {
      if ( v76 == 0 && (v75 & 1) == 0 )
        goto LABEL_161;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 392), 0);
    }
    v33 = v82;
    goto LABEL_96;
  }
  v56 = *(_QWORD *)(RefCountTracker + 8);
  if ( v56 )
  {
    v57 = *(_BYTE *)(RefCountTracker + 3);
    if ( v57 )
    {
      while ( 1 )
      {
        v58 = (_BYTE *)(v56 + 2LL * (unsigned __int8)v55);
        if ( *v58 == 6 )
        {
          v59 = v58[1];
          if ( v59 )
            break;
        }
        LOBYTE(v55) = v55 + 1;
        if ( (unsigned __int8)v55 >= v57 )
          goto LABEL_95;
      }
      v58[1] = v59 - 1;
      goto LABEL_96;
    }
  }
LABEL_95:
  if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 16), 6u) )
LABEL_161:
    ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 6uLL);
LABEL_96:
  v32 = v33->References-- == 1;
  if ( v32 )
  {
    KeReleaseSpinLockFromDpcLevel(p_RefCountLock);
    ndisMFinishClose(v33);
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(p_RefCountLock);
  }
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLock(&MiniportHandle->Lock, v53);
  v11 = v81;
LABEL_39:
  if ( !v7 || v5 )
    goto LABEL_49;
  if ( (byte_1C00F7641 & 0x40) != 0 )
    McTemplateK0jqxqdq_EtwWriteTransfer(
      *((_QWORD *)a1 + 4),
      (__int64)&CompletingOidRequestFilterEx,
      (__int64)&v7->PauseEvent.Event._NDIS_COMMON_OPEN_BLOCK::Header.WaitListHead.Blink,
      (__int64)&v7->PauseEvent.Event._NDIS_COMMON_OPEN_BLOCK::Header.WaitListHead.Blink,
      (char)v7->ProtSendCompleteHandler,
      *((_QWORD *)v7->OidRequestCompleteHandler + 164),
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
      *((_DWORD *)a1 + 10));
  v34 = *((_DWORD *)a1 + 10);
  v35 = *((_QWORD *)a1 + 4);
  if ( v11 )
  {
    ndisFInvokeDirectOidRequestComplete((char)v7, *((_QWORD *)a1 + 4));
    goto LABEL_49;
  }
  v36 = v7->MiniportHandle;
  v37 = *(_DWORD *)(v35 + 32);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v78) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v18,
      a3,
      0xAu,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      (char)v7,
      v37,
      v35,
      v78);
  }
  if ( (unsigned int)dword_1C00F41D8 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 1024LL) )
  {
    if ( ((*(_DWORD *)(v35 + 88) >> 28) & 3) != 0 )
    {
      if ( ((*(_DWORD *)(v35 + 88) >> 28) & 3) != 2 )
        goto LABEL_47;
    }
    else if ( !IsOidTelemetryFilterEnabled(*(_DWORD *)(v35 + 32), (struct _NDIS_OID_REQUEST_RESERVED *)(v35 + 72)) )
    {
      goto LABEL_47;
    }
    if ( *(_QWORD *)(v35 + 96) )
      TraceLoggingWriteOidRequestReturnedActivity<0,_NDIS_FILTER_BLOCK>(v7, v35);
    else
      TraceLoggingWriteOidRequestReturnedActivity<2,_NDIS_FILTER_BLOCK>(v7, v35);
  }
LABEL_47:
  ((void (__fastcall *)(_NDIS_PROTOCOL_BLOCK *, __int64, _QWORD, __int64))v36->WakeUpDpcTimer.Timer.TimerListEntry.Blink)(
    v7->ProtocolHandle,
    v35,
    v34,
    v9);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      v38,
      0xBu,
      (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
      (char)v7,
      v37,
      v35);
LABEL_49:
  *((_QWORD *)a1 + 4) = 0LL;
}
