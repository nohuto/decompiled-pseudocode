/*
 * XREFs of ndisIfRegisterInterfaceEx @ 0x1C0021AA4
 * Callers:
 *     NdisIfRegisterInterface @ 0x1C00B25D0 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010A270 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_Llq @ 0x1C0021F78 (WPP_RECORDER_SF_Llq.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C0022020 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0022160 (NdisConvertNtStatusToNdisStatus.c)
 *     ?AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z @ 0x1C0022188 (-AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z.c)
 *     ndisIfTryAllocatingSuggestedIndex @ 0x1C0022210 (ndisIfTryAllocatingSuggestedIndex.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0022378 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     NdisAllocateRefCount @ 0x1C0022460 (NdisAllocateRefCount.c)
 *     WPP_RECORDER_SF_qllq @ 0x1C0022504 (WPP_RECORDER_SF_qllq.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002B1C8 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C010A91C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C010ABF8 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

__int64 __fastcall ndisIfRegisterInterfaceEx(
        _QWORD *a1,
        _LIST_ENTRY *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int64 v7; // r14
  __int64 v9; // rbp
  _LIST_ENTRY *v11; // rbx
  _WORD *Pool2; // rax
  __int64 v14; // rcx
  _WORD *v15; // rdi
  int v16; // eax
  __int64 RefCount; // rax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // ax
  __int128 v20; // xmm0
  bool v21; // zf
  __int64 v22; // rcx
  _OWORD *v23; // rax
  _OWORD *v24; // rsi
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  KIRQL v32; // al
  struct _GUID *v33; // r8
  KIRQL v34; // bp
  __int64 v35; // rcx
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v37; // rsi
  _LIST_ENTRY *i; // r14
  unsigned int v39; // r15d
  IfIndexRange *v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // ebx
  _LIST_ENTRY *v43; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rdx
  _QWORD *v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rdx
  _QWORD *v51; // rax
  KIRQL v52; // bl
  __int128 v54; // xmm0
  size_t v55; // rax
  size_t v56; // rbp
  __int64 v57; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v59; // [rsp+50h] [rbp-48h]
  unsigned int v60; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v61; // [rsp+B8h] [rbp+20h] BYREF

  v7 = (unsigned __int64)a2 >> 48;
  v9 = ((unsigned __int64)a2 >> 24) & 0xFFFFFF;
  v60 = 0;
  v61 = ((unsigned __int64)a2 >> 24) & 0xFFFFFF;
  v11 = a2;
  v59 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qllq(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, a4);
  if ( !a4 )
    goto LABEL_58;
  if ( *(_BYTE *)(a4 + 1) != 1 )
  {
    v42 = -1073741637;
    goto LABEL_37;
  }
  if ( *(_WORD *)(a4 + 2) < 0x60u )
  {
LABEL_58:
    v42 = -1073741811;
    goto LABEL_37;
  }
  Pool2 = (_WORD *)ExAllocatePool2(64LL, 1496LL, 1718174798);
  v15 = Pool2;
  if ( !Pool2 )
  {
    v42 = -1073741670;
    goto LABEL_37;
  }
  *Pool2 = 275;
  Pool2[1] = 1496;
  if ( (unsigned int)(v9 - 32512) > 0x4100 && (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v61, 0, 0) )
  {
    v42 = -1073741811;
LABEL_55:
    ExFreePoolWithTag(v15, 0);
    goto LABEL_37;
  }
  v16 = *(_DWORD *)(a4 + 4);
  LOBYTE(a2) = 2;
  *((_DWORD *)v15 + 334) = v16;
  LOBYTE(v14) = 17;
  *((_DWORD *)v15 + 140) = v16;
  *((_DWORD *)v15 + 335) = *(_DWORD *)(a4 + 20);
  *((_DWORD *)v15 + 336) = *(_DWORD *)(a4 + 24);
  *((_DWORD *)v15 + 354) = *(_DWORD *)(a4 + 84);
  *((_DWORD *)v15 + 350) = a5;
  *((_QWORD *)v15 + 164) = v11;
  *((_DWORD *)v15 + 326) = 1;
  RefCount = NdisAllocateRefCount(v14, a2);
  v18 = *(_WORD *)(a4 + 48);
  *((_QWORD *)v15 + 179) = RefCount;
  v19 = 512;
  if ( v18 <= 0x200u )
    v19 = v18;
  v15[4] = v19;
  if ( v19 )
    memmove(v15 + 5, (const void *)(a4 + *(unsigned __int16 *)(a4 + 50)), v19);
  v20 = *(_OWORD *)(a4 + 52);
  v21 = a1 == qword_1C00EE2E0;
  v15[262] = HIWORD(v11);
  *((_DWORD *)v15 + 132) = *(_DWORD *)(a4 + 28);
  *((_DWORD *)v15 + 133) = *(_DWORD *)(a4 + 32);
  *((_DWORD *)v15 + 134) = *(_DWORD *)(a4 + 36);
  *((_BYTE *)v15 + 556) = *(_BYTE *)(a4 + 40);
  *((_DWORD *)v15 + 141) = *(_DWORD *)(a4 + 88);
  *((_DWORD *)v15 + 142) = *(_DWORD *)(a4 + 92);
  *(_OWORD *)(v15 + 270) = v20;
  if ( v21 || a1 == qword_1C00EE2D8 )
  {
    v22 = 5LL;
    v23 = v15 + 288;
    v24 = (_OWORD *)(a4 + 96);
    do
    {
      v25 = v24[1];
      *v23 = *v24;
      v26 = v24[2];
      v23[1] = v25;
      v27 = v24[3];
      v23[2] = v26;
      v28 = v24[4];
      v23[3] = v27;
      v29 = v24[5];
      v23[4] = v28;
      v30 = v24[6];
      v23[5] = v29;
      v31 = v24[7];
      v24 += 8;
      v23[6] = v30;
      v23 += 8;
      *(v23 - 1) = v31;
      --v22;
    }
    while ( v22 );
    *v23 = *v24;
    *((_BYTE *)v15 + 1393) = 1;
    *((_QWORD *)v15 + 165) = v15;
    if ( a3 )
    {
      v59 = a3;
      *((_QWORD *)v15 + 176) = a3;
      *((_BYTE *)v15 + 1394) = 1;
    }
  }
  else
  {
    v54 = *(_OWORD *)(a4 + 68);
    v55 = *(unsigned __int16 *)(a4 + 42);
    *((_QWORD *)v15 + 165) = a3;
    *(_OWORD *)(v15 + 290) = v54;
    if ( (unsigned int)v55 > 0x20 )
    {
      v42 = -1073741811;
      goto LABEL_55;
    }
    v15[562] = v55;
    v15[579] = v55;
    if ( (_WORD)v55 )
    {
      v56 = v55;
      memmove(v15 + 563, (const void *)(a4 + *(unsigned __int16 *)(a4 + 44)), v55);
      v57 = *(unsigned __int16 *)(a4 + 46);
      if ( (_WORD)v57 )
        memmove(v15 + 580, (const void *)(a4 + v57), v56);
    }
  }
  v32 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v33 = (struct _GUID *)(v15 + 290);
  v34 = v32;
  v35 = *(_QWORD *)(v15 + 290) - *(_QWORD *)&ndisDefaultNetworkGuid.Data1;
  if ( !v35 )
    v35 = *(_QWORD *)(v15 + 294) - *(_QWORD *)ndisDefaultNetworkGuid.Data4;
  if ( !v35 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    if ( !CompartmentBlock )
      goto LABEL_52;
    *v33 = *(struct _GUID *)(*((_QWORD *)CompartmentBlock + 7) + 32LL);
  }
  NetworkBlock = ndisIfFindNetworkBlock(v33);
  v37 = NetworkBlock;
  if ( !NetworkBlock || (*((_DWORD *)NetworkBlock + 18) & 3) != 0 )
  {
LABEL_52:
    v42 = -1073741811;
LABEL_54:
    KeReleaseSpinLock(&ndisIfListLock, v34);
    goto LABEL_55;
  }
  for ( i = ndisIfList.Flink; i != &ndisIfList && i[5].Flink <= v11; i = i->Flink )
  {
    if ( i[5].Flink == v11 )
    {
      v42 = -1073741270;
      goto LABEL_54;
    }
  }
  v39 = a6;
  if ( !(unsigned __int8)ndisIfTryAllocatingSuggestedIndex(a6) )
  {
    v41 = IfIndexRange::AllocateAnyBit(v40, &v60);
    v42 = NdisConvertNtStatusToNdisStatus(v41);
    if ( v42 )
      goto LABEL_54;
    v39 = v60;
  }
  *((_DWORD *)v15 + 1) = v39;
  v43 = (_LIST_ENTRY *)(v15 + 616);
  Blink = i->Blink;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    goto LABEL_56;
  v43->Flink = Flink;
  *((_QWORD *)v15 + 155) = Blink;
  Flink->Blink = v43;
  Blink->Flink = v43;
  v46 = a1 + 3;
  v47 = a1[3];
  v48 = v15 + 624;
  *((_QWORD *)v15 + 166) = a1;
  if ( *(_QWORD **)(v47 + 8) != a1 + 3
    || (*((_QWORD *)v15 + 157) = v46,
        *v48 = v47,
        *(_QWORD *)(v47 + 8) = v48,
        *v46 = v48,
        v49 = (_QWORD *)((char *)v37 + 56),
        v50 = *((_QWORD *)v37 + 7),
        v51 = v15 + 632,
        *(struct _NDIS_IF_NETWORK_BLOCK **)(v50 + 8) != (struct _NDIS_IF_NETWORK_BLOCK *)((char *)v37 + 56)) )
  {
LABEL_56:
    __fastfail(3u);
  }
  *v51 = v50;
  ++ndisInterfaceCount;
  *((_QWORD *)v15 + 159) = v49;
  *(_QWORD *)(v50 + 8) = v51;
  *v49 = v51;
  *((_DWORD *)v15 + 144) = *(_DWORD *)(*((_QWORD *)v37 + 6) + 16LL);
  *((_QWORD *)v15 + 171) = v37;
  *((_QWORD *)v15 + 172) = *((_QWORD *)v37 + 6);
  ++*((_DWORD *)v37 + 19);
  if ( v59 )
  {
    *(_QWORD *)(v59 + 688) = v15;
    *(_DWORD *)(v59 + 680) = v39;
  }
  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v15 + 179), 0);
  ++*((_DWORD *)v15 + 326);
  KeReleaseSpinLock(&ndisIfListLock, v34);
  ndisNsiNotifyClientInterfaceChange(v15, 1LL, 0LL);
  v52 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v15, IFREF_REGISTER);
  KeReleaseSpinLock(&ndisIfListLock, v52);
  v42 = 0;
  *a7 = v39;
LABEL_37:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Llq(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, a4);
  return v42;
}
