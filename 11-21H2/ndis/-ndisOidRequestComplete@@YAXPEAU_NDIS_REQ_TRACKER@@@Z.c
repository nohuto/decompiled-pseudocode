/*
 * XREFs of ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0009FB0
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000ABC0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000DB60 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00148DC (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x1C0091390 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C009906C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C009920C (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C00B03F0 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C00B06AC (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_Dqqqqd @ 0x1C000A5C0 (WPP_RECORDER_SF_Dqqqqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B180 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B240 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C000B300 (WPP_RECORDER_SF_qDd.c)
 *     NdisDereferenceWithTag @ 0x1C000D510 (NdisDereferenceWithTag.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0014380 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     NdisFreeRefCount @ 0x1C0016360 (NdisFreeRefCount.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001E1E0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006841C (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1C00A210C (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C00B04F4 (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C00B05D4 (ndisInvokeDirectOidRequestComplete.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BFCF0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013C370 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisOidRequestComplete(struct _NDIS_REQ_TRACKER *a1, int a2, int a3, int a4)
{
  __int64 v4; // rbp
  char v5; // r15
  _BYTE *v6; // r12
  _BYTE *v8; // r13
  _BYTE *v9; // rdi
  int v10; // eax
  _DWORD *v11; // rsi
  ULONG_PTR v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  void (__fastcall *v15)(struct _NDIS_REQ_TRACKER *); // rax
  __int64 v16; // r14
  _DWORD *v17; // r8
  int v18; // eax
  int v19; // edi
  ULONG_PTR v20; // rdi
  __int64 v21; // rdi
  KIRQL v22; // al
  bool v23; // si
  __int64 v24; // rdi
  KIRQL v25; // al
  ULONG_PTR v26; // r8
  KIRQL v27; // bp
  int v28; // ecx
  __int64 v29; // r10
  unsigned __int8 v30; // r9
  _BYTE *v31; // rdx
  bool v32; // zf
  unsigned int v33; // ebp
  __int64 v34; // rdi
  __int64 v35; // r14
  int v36; // esi
  int v37; // edx
  int v38; // r8d
  char v39; // al
  unsigned int v40; // ecx
  int v41; // ecx
  KIRQL v42; // dl
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rsi
  KIRQL v53; // al
  KIRQL v54; // r14
  KSPIN_LOCK *v55; // rcx
  KIRQL v56; // al
  __int64 v57; // rax
  struct _NDIS_MINIPORT_BLOCK **v58; // rax
  struct _NDIS_MINIPORT_BLOCK *v59; // rbp
  int v60; // edx
  int v61; // r8d
  int v62; // ecx
  KIRQL v63; // dl
  ULONG_PTR v64; // rsi
  unsigned int v65; // edx
  int v66; // ecx
  bool v67; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v68; // [rsp+A8h] [rbp+10h] BYREF
  char v69; // [rsp+B0h] [rbp+18h]

  v4 = *((_QWORD *)a1 + 4);
  v5 = 0;
  v6 = 0LL;
  v8 = 0LL;
  v68 = 0;
  v69 = 0;
  v9 = *(_BYTE **)(v4 + 104);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dqqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
  *(_DWORD *)(v4 + 88) |= 1u;
  v10 = *(_DWORD *)(v4 + 88);
  v67 = (v10 & 0x200000) != 0;
  v11 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( (v10 & 0x220) != 0 )
  {
    *((_QWORD *)a1 + 3) = v9;
    v6 = v9;
    if ( (*(_DWORD *)(v4 + 88) & 0x200) == 0 )
      goto LABEL_6;
  }
  else
  {
    *((_QWORD *)a1 + 3) = 0LL;
    if ( *v9 == 5 )
    {
      v8 = v9;
      *((_QWORD *)a1 + 1) = v9;
      goto LABEL_6;
    }
  }
  v69 = 1;
LABEL_6:
  v12 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_BYTE *)(v12 + 32) > 6u || *(_BYTE *)(v12 + 32) == 6 && *(_BYTE *)(v12 + 33) >= 0x28u)
      && !*((_DWORD *)a1 + 10) )
    {
      v43 = v11[1];
      if ( (v43 & 0xFFFFFFFD) != 0 )
      {
        if ( v43 != 12 )
          goto LABEL_11;
        v44 = v11[13];
        v45 = v11[15];
      }
      else
      {
        v44 = v11[12];
        v45 = v11[13];
      }
      if ( v45 > v44 )
        ndisBugCheckEx(0x1DuLL, v12, (ULONG_PTR)v11, 0LL);
    }
  }
  else
  {
    v12 = *((_QWORD *)a1 + 2);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 16);
      if ( *(_BYTE *)(v13 + 100) > 6u || *(_BYTE *)(v13 + 100) == 6 && *(_BYTE *)(v13 + 101) >= 0x28u )
      {
        v46 = *(_QWORD *)(v12 + 32);
        if ( (*(_BYTE *)(v46 + 32) > 6u || *(_BYTE *)(v46 + 32) == 6 && *(_BYTE *)(v46 + 33) >= 0x28u)
          && !*((_DWORD *)a1 + 10) )
        {
          v47 = v11[1];
          if ( (v47 & 0xFFFFFFFD) != 0 )
          {
            if ( v47 != 12 )
              goto LABEL_11;
            v48 = v11[13];
            v49 = v11[15];
          }
          else
          {
            v48 = v11[12];
            v49 = v11[13];
          }
          if ( v49 > v48 )
            ndisBugCheckEx(0x1DuLL, v12, (ULONG_PTR)v11, 0LL);
        }
      }
    }
  }
LABEL_11:
  v14 = v11;
  if ( (v11[22] & 0x1240004) == 4 )
  {
    v15 = (void (__fastcall *)(struct _NDIS_REQ_TRACKER *))*((_QWORD *)&unk_1C00CEAC0 + 3 * (unsigned int)v11[23]);
    v14 = v11;
    if ( v15 )
    {
      v15(a1);
      v14 = (_DWORD *)*((_QWORD *)a1 + 4);
    }
  }
  v16 = *(_QWORD *)a1;
  v17 = v14;
  if ( *(_QWORD *)a1 && v14[8] == -50265855 && *((_DWORD *)a1 + 10) )
  {
    v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 3872));
    *(_DWORD *)(v16 + 3880) = *(_DWORD *)(v16 + 3884);
    v68 = v56;
    *(_DWORD *)(v16 + 3884) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 3872), v56);
    v17 = (_DWORD *)*((_QWORD *)a1 + 4);
  }
  v18 = *(_DWORD *)(v4 + 88);
  LOBYTE(v12) = (v18 & 2) != 0;
  v19 = v17[1];
  if ( (v18 & 0x2000000) != 0 )
    v5 = 1;
  if ( (*(_DWORD *)(v4 + 88) & 8) != 0 )
  {
    *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 10);
    KeSetEvent((PRKEVENT)(v4 + 112), 0, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  else if ( (_BYTE)v12 == 1 )
  {
    if ( (v18 & 0x100) != 0 )
    {
      v57 = *((_QWORD *)a1 + 2);
      if ( v57 )
        v58 = (struct _NDIS_MINIPORT_BLOCK **)(v57 + 32);
      else
        v58 = (struct _NDIS_MINIPORT_BLOCK **)a1;
      v59 = *v58;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*v58, &v68);
      if ( v19 == 1 && (v59->Flags & 0x200000) != 0 )
      {
        v62 = *((_DWORD *)a1 + 10);
        if ( v62 && v62 != -1073676276 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v60) = 3;
          WPP_RECORDER_SF_qDd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v60,
            v61,
            17,
            (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
            (char)v59,
            *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
            v62);
        }
        ndisMResetCompleteStage2(v59);
      }
      v59->Flags &= ~0x1000000u;
      v63 = v68;
      v59->MiniportThread = 0LL;
      KeReleaseSpinLock(&v59->Lock, v63);
      v17 = (_DWORD *)*((_QWORD *)a1 + 4);
    }
    ExFreePoolWithTag(v17, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v20 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v68 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 96));
    *(_QWORD *)(v20 + 520) = KeGetCurrentThread();
    if ( !v67 )
    {
      v40 = *(_DWORD *)(v20 + 4420) & 0xFFFFFFFD;
      *(_DWORD *)(v20 + 4420) = v40;
      if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
      {
        if ( (byte_1C00EE581 & 0x40) != 0 )
        {
          McTemplateK0jqxd_EtwWriteTransfer(
            v40,
            (unsigned int)&ClearingOidRequest,
            v20 + 4008,
            v20 + 4008,
            *(_DWORD *)(v20 + 4056),
            *(_QWORD *)(v20 + 4024),
            1);
          v40 = *(_DWORD *)(v20 + 4420);
        }
        *(_QWORD *)(v20 + 2216) = 0LL;
        *(_DWORD *)(v20 + 4420) = v40 & 0xFFFFFFFE;
      }
      v41 = *((_DWORD *)a1 + 11);
      if ( (v41 & 3) == 2 && *(_DWORD **)(v20 + 2208) != v11 )
        ndisBugCheckEx(0x26uLL, v20, (ULONG_PTR)v11, 0LL);
      if ( (v41 & 1) == 0 && *(_QWORD *)(v20 + 2208) )
        *(_QWORD *)(v20 + 2208) = 0LL;
    }
    v42 = v68;
    *(_QWORD *)(v20 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 96), v42);
    *(_WORD *)(v20 + 1822) = 0;
    goto LABEL_61;
  }
  v21 = *((_QWORD *)a1 + 2);
  if ( !v21 )
  {
LABEL_61:
    v23 = v67;
    goto LABEL_37;
  }
  if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
  {
    v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 144));
    if ( v67 )
    {
      --*(_DWORD *)(v21 + 704);
    }
    else
    {
      *(_DWORD *)(v21 + 56) &= ~0x800u;
      *(_QWORD *)(v21 + 176) = 0LL;
    }
    *(_QWORD *)(v21 + 152) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 144), v22);
  }
  v23 = v67;
  v24 = v21 + 312;
  if ( v67 )
  {
    ndisDereferenceRef((PKSPIN_LOCK)v24, 0x10u);
    goto LABEL_37;
  }
  v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v24);
  v26 = *(_QWORD *)(v24 + 16);
  v27 = v25;
  if ( v26 - 2 <= 1 )
    goto LABEL_35;
  if ( v26 < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, v26, 0LL);
  if ( *(_BYTE *)(v26 + 2) <= 0xFu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v26, 0xFuLL);
  v28 = *(unsigned __int8 *)(v26 + 1);
  if ( *(_BYTE *)(v26 + 1) )
  {
    if ( v28 != 1 )
      goto LABEL_35;
    v64 = v26 + 968;
    v65 = *(_DWORD *)(v26 + 1024);
    v66 = (unsigned __int16)v65 >> 1;
    if ( v65 >> 17 < 0x3FFE && v66 == (v65 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v26 + 968));
      *(_DWORD *)(v64 + 56) &= 0x10001u;
    }
    else
    {
      if ( v66 == 0 && (v65 & 1) == 0 )
        goto LABEL_120;
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v26 + 968), 0);
    }
    v23 = 0;
    goto LABEL_35;
  }
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
          goto LABEL_34;
      }
      v31[1] = v39 - 1;
      goto LABEL_35;
    }
  }
LABEL_34:
  if ( !_bittestandreset((signed __int32 *)(v26 + 16), 0xFu) )
LABEL_120:
    ndisBugCheckEx(0x1EuLL, 0LL, v26, 0xFuLL);
LABEL_35:
  v32 = (*(_WORD *)(v24 + 8))-- == 1;
  if ( v32 && !*(_BYTE *)(v24 + 11) )
  {
    NdisFreeRefCount(*(_QWORD *)(v24 + 16));
    *(_QWORD *)(v24 + 16) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v24, v27);
LABEL_37:
  if ( v6 && !v5 )
  {
    if ( !v69 )
    {
      v50 = *((unsigned int *)a1 + 10);
      v51 = *((_QWORD *)a1 + 4);
      if ( v23 )
        ndisInvokeDirectOidRequestComplete((char)v6, v51, v50);
      else
        (*((void (__fastcall **)(_BYTE *, __int64, __int64))v6 + 86))(v6, v51, v50);
    }
    v52 = *((_QWORD *)v6 + 2);
    v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v52 + 96));
    *(_QWORD *)(v52 + 520) = KeGetCurrentThread();
    v54 = v53;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v6 + 75);
    NdisDereferenceWithTag(*((_QWORD *)v6 + 74));
    v32 = (*((_DWORD *)v6 + 57))-- == 1;
    v55 = (KSPIN_LOCK *)(v6 + 600);
    if ( v32 )
    {
      KeReleaseSpinLockFromDpcLevel(v55);
      ndisMFinishClose((struct _NDIS_OPEN_BLOCK *)v6);
    }
    else
    {
      KeReleaseSpinLockFromDpcLevel(v55);
    }
    *(_QWORD *)(v52 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v52 + 96), v54);
  }
  if ( v8 && !v5 )
  {
    if ( (byte_1C00EE581 & 0x40) != 0 )
      McTemplateK0jqxqdq_EtwWriteTransfer(
        *((_QWORD *)a1 + 4),
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v8 + 664,
        (_DWORD)v8 + 664,
        *((_DWORD *)v8 + 170),
        *(_QWORD *)(*((_QWORD *)v8 + 86) + 1312LL),
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
        *((_DWORD *)a1 + 10));
    v33 = *((_DWORD *)a1 + 10);
    v34 = *((_QWORD *)a1 + 4);
    if ( v67 )
    {
      ndisFInvokeDirectOidRequestComplete((char)v8, *((_QWORD *)a1 + 4));
    }
    else
    {
      v35 = *((_QWORD *)v8 + 2);
      v36 = *(_DWORD *)(v34 + 32);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          (int)v17,
          10,
          (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
          (char)v8,
          v36,
          v34,
          *((_DWORD *)a1 + 10));
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v35 + 256))(*((_QWORD *)v8 + 3), v34, v33);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = 4;
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v37,
          v38,
          11,
          (struct _GUID *)&WPP_3f10502a8e7e385c6a77087d2be74200_Traceguids,
          (char)v8,
          v36,
          v34);
      }
    }
  }
  *((_QWORD *)a1 + 4) = 0LL;
}
