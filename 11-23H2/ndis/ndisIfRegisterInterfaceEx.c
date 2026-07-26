/*
 * XREFs of ndisIfRegisterInterfaceEx @ 0x1C001BA9C
 * Callers:
 *     NdisIfRegisterInterface @ 0x1C00B77F0 (NdisIfRegisterInterface.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C011140C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CBD0 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_Llq @ 0x1C001B4F0 (WPP_RECORDER_SF_Llq.c)
 *     WPP_RECORDER_SF_qllq @ 0x1C001B598 (WPP_RECORDER_SF_qllq.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001BF78 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     NdisAllocateRefCount @ 0x1C001C060 (NdisAllocateRefCount.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C001C190 (NdisConvertNtStatusToNdisStatus.c)
 *     ?AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z @ 0x1C001C1B8 (-AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z.c)
 *     ndisIfTryAllocatingSuggestedIndex @ 0x1C001C240 (ndisIfTryAllocatingSuggestedIndex.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001C3A4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002FB28 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0110F74 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C0111B04 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisIfRegisterInterfaceEx(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned __int64 v7; // r12
  __int64 v9; // rbp
  _LIST_ENTRY *v11; // rbx
  _WORD *Pool2; // rax
  __int64 v14; // rcx
  _WORD *v15; // rdi
  int v16; // eax
  __int64 RefCount; // rax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // ax
  bool v20; // zf
  __int128 v21; // xmm0
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
  __int64 v32; // r12
  KIRQL v33; // al
  struct _GUID *v34; // r8
  KIRQL v35; // bp
  __int64 v36; // rcx
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v38; // rsi
  _LIST_ENTRY *i; // r14
  unsigned int v40; // r15d
  IfIndexRange *v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // ebx
  _LIST_ENTRY *v44; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rdx
  _QWORD *v47; // rcx
  __int64 v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rcx
  __int64 v51; // rdx
  _QWORD *v52; // rax
  KIRQL v53; // bl
  __int128 v55; // xmm0
  unsigned int v56; // eax
  unsigned int v57; // ebp
  __int64 v58; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int v60; // [rsp+20h] [rbp-68h]
  unsigned int v61; // [rsp+98h] [rbp+10h] BYREF

  v7 = HIWORD(a2);
  v9 = (a2 >> 24) & 0xFFFFFF;
  v61 = (a2 >> 24) & 0xFFFFFF;
  v11 = (_LIST_ENTRY *)a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qllq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v60);
  if ( !a4 )
    goto LABEL_59;
  if ( *(_BYTE *)(a4 + 1) != 1 )
  {
    v43 = -1073741637;
    goto LABEL_36;
  }
  if ( *(_WORD *)(a4 + 2) < 0x60u )
  {
LABEL_59:
    v43 = -1073741811;
    goto LABEL_36;
  }
  Pool2 = (_WORD *)ExAllocatePool2(64LL, 1496LL, 1718174798);
  v15 = Pool2;
  if ( !Pool2 )
  {
    v43 = -1073741670;
    goto LABEL_36;
  }
  *Pool2 = 275;
  Pool2[1] = 1496;
  if ( (unsigned int)(v9 - 32512) > 0x4100 && (unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v7, &v61, 0, 0) )
    goto LABEL_44;
  v16 = *(_DWORD *)(a4 + 4);
  LOBYTE(a2) = 2;
  *((_DWORD *)v15 + 334) = v16;
  LOBYTE(v14) = 18;
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
  if ( v18 > 0x200u )
  {
    v15[4] = 512;
    goto LABEL_11;
  }
  v15[4] = v18;
  v19 = v18;
  if ( v18 )
LABEL_11:
    memmove(v15 + 5, (const void *)(a4 + *(unsigned __int16 *)(a4 + 50)), v19);
  v20 = a1 == qword_1C00F7330;
  v21 = *(_OWORD *)(a4 + 52);
  *((_DWORD *)v15 + 132) = *(_DWORD *)(a4 + 28);
  *((_DWORD *)v15 + 133) = *(_DWORD *)(a4 + 32);
  *((_DWORD *)v15 + 134) = *(_DWORD *)(a4 + 36);
  *((_BYTE *)v15 + 556) = *(_BYTE *)(a4 + 40);
  *((_DWORD *)v15 + 141) = *(_DWORD *)(a4 + 88);
  *((_DWORD *)v15 + 142) = *(_DWORD *)(a4 + 92);
  v15[262] = v7;
  *(_OWORD *)(v15 + 270) = v21;
  if ( v20 || a1 == qword_1C00F7328 )
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
      v32 = a3;
      *((_QWORD *)v15 + 176) = a3;
      *((_BYTE *)v15 + 1394) = 1;
      goto LABEL_17;
    }
    goto LABEL_39;
  }
  v55 = *(_OWORD *)(a4 + 68);
  v56 = *(unsigned __int16 *)(a4 + 42);
  *((_QWORD *)v15 + 165) = a3;
  *(_OWORD *)(v15 + 290) = v55;
  if ( v56 > 0x20 )
  {
LABEL_44:
    v43 = -1073741811;
LABEL_56:
    ExFreePoolWithTag(v15, 0);
    goto LABEL_36;
  }
  v15[562] = v56;
  v15[579] = v56;
  if ( !(_WORD)v56 )
  {
LABEL_39:
    v32 = 0LL;
    goto LABEL_17;
  }
  v57 = v56;
  memmove(v15 + 563, (const void *)(a4 + *(unsigned __int16 *)(a4 + 44)), v56);
  v58 = *(unsigned __int16 *)(a4 + 46);
  if ( (_WORD)v58 )
  {
    memmove(v15 + 580, (const void *)(a4 + v58), v57);
    goto LABEL_39;
  }
  v32 = 0LL;
LABEL_17:
  v33 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v34 = (struct _GUID *)(v15 + 290);
  v35 = v33;
  v36 = *(_QWORD *)(v15 + 290) - *(_QWORD *)&ndisDefaultNetworkGuid.Data1;
  if ( !v36 )
    v36 = *(_QWORD *)(v15 + 294) - *(_QWORD *)ndisDefaultNetworkGuid.Data4;
  if ( !v36 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(1u);
    if ( !CompartmentBlock )
      goto LABEL_53;
    *v34 = *(struct _GUID *)(*((_QWORD *)CompartmentBlock + 7) + 32LL);
  }
  NetworkBlock = ndisIfFindNetworkBlock(v34);
  v38 = NetworkBlock;
  if ( !NetworkBlock || (*((_DWORD *)NetworkBlock + 18) & 3) != 0 )
  {
LABEL_53:
    v43 = -1073741811;
LABEL_55:
    KeReleaseSpinLock(&ndisIfListLock, v35);
    goto LABEL_56;
  }
  for ( i = ndisIfList.Flink; i != &ndisIfList && i[5].Flink <= v11; i = i->Flink )
  {
    if ( i[5].Flink == v11 )
    {
      v43 = -1073741270;
      goto LABEL_55;
    }
  }
  v40 = a6;
  v61 = 0;
  if ( !(unsigned __int8)ndisIfTryAllocatingSuggestedIndex(a6) )
  {
    v42 = IfIndexRange::AllocateAnyBit(v41, &v61);
    v43 = NdisConvertNtStatusToNdisStatus(v42);
    if ( v43 )
      goto LABEL_55;
    v40 = v61;
  }
  *((_DWORD *)v15 + 1) = v40;
  v44 = (_LIST_ENTRY *)(v15 + 616);
  Blink = i->Blink;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    goto LABEL_57;
  v44->Flink = Flink;
  *((_QWORD *)v15 + 155) = Blink;
  Flink->Blink = v44;
  Blink->Flink = v44;
  v47 = a1 + 3;
  v48 = a1[3];
  v49 = v15 + 624;
  *((_QWORD *)v15 + 166) = a1;
  if ( *(_QWORD **)(v48 + 8) != a1 + 3
    || (*((_QWORD *)v15 + 157) = v47,
        *v49 = v48,
        *(_QWORD *)(v48 + 8) = v49,
        *v47 = v49,
        v50 = (_QWORD *)((char *)v38 + 56),
        v51 = *((_QWORD *)v38 + 7),
        v52 = v15 + 632,
        *(struct _NDIS_IF_NETWORK_BLOCK **)(v51 + 8) != (struct _NDIS_IF_NETWORK_BLOCK *)((char *)v38 + 56)) )
  {
LABEL_57:
    __fastfail(3u);
  }
  *v52 = v51;
  ++ndisInterfaceCount;
  *((_QWORD *)v15 + 159) = v50;
  *(_QWORD *)(v51 + 8) = v52;
  *v50 = v52;
  *((_DWORD *)v15 + 144) = *(_DWORD *)(*((_QWORD *)v38 + 6) + 16LL);
  *((_QWORD *)v15 + 171) = v38;
  *((_QWORD *)v15 + 172) = *((_QWORD *)v38 + 6);
  ++*((_DWORD *)v38 + 19);
  if ( v32 )
  {
    *(_QWORD *)(v32 + 688) = v15;
    *(_DWORD *)(v32 + 680) = v40;
  }
  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v15 + 179), 0);
  ++*((_DWORD *)v15 + 326);
  KeReleaseSpinLock(&ndisIfListLock, v35);
  ndisNsiNotifyClientInterfaceChange(v15, 1LL, 0LL);
  v53 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((struct _NDIS_IF_BLOCK *)v15, IFREF_REGISTER);
  KeReleaseSpinLock(&ndisIfListLock, v53);
  *a7 = v40;
  v43 = 0;
LABEL_36:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Llq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4, v60);
  return v43;
}
