/*
 * XREFs of NdisMAllocatePort @ 0x1C007C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C0056858 (WPP_RECORDER_SF_qdL_ea_1C0056858.c)
 */

NDIS_STATUS __stdcall NdisMAllocatePort(NDIS_HANDLE NdisMiniportHandle, PNDIS_PORT_CHARACTERISTICS PortCharacteristics)
{
  unsigned int v2; // r15d
  int v5; // edx
  NDIS_STATUS v6; // edi
  __int64 Pool2; // rax
  char *v8; // rsi
  _BYTE *v9; // rbp
  unsigned int v10; // edi
  size_t v11; // r12
  __int64 v12; // rax
  _BYTE *v13; // rcx
  __int64 v14; // r8
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  unsigned int v18; // edi
  _BYTE *v19; // rax
  _BYTE *v20; // r14
  unsigned int Flags; // eax
  char v22; // bp
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _DWORD *v26; // rax
  unsigned int v27; // r8d
  __int64 *v28; // rdx
  __int64 v29; // rax
  KIRQL v30; // dl
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0xAu,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      NdisMiniportHandle);
  if ( !ndisReferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x64u) )
  {
    v6 = -1073676286;
    goto LABEL_44;
  }
  Pool2 = ExAllocatePool2(64LL, 88LL, 1869628494);
  v8 = (char *)Pool2;
  if ( !Pool2 )
    goto LABEL_6;
  *(_DWORD *)(Pool2 + 16) = 1;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, &NewIrql);
  if ( (unsigned int)(*((_DWORD *)NdisMiniportHandle + 687) + 1) > 0x2AAAAAA )
  {
    *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
LABEL_9:
    KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, NewIrql);
LABEL_6:
    v6 = -1073741670;
    goto LABEL_42;
  }
  v9 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 342);
  v10 = *((_DWORD *)NdisMiniportHandle + 686);
  v11 = v10;
  if ( v9 && (v12 = 0LL, v10) )
  {
    v13 = (_BYTE *)*((_QWORD *)NdisMiniportHandle + 342);
    while ( *v13 == 0xFF )
    {
      v2 += 8;
      v12 = (unsigned int)(v12 + 1);
      ++v13;
      if ( (unsigned int)v12 >= v10 )
        goto LABEL_15;
    }
    v14 = (unsigned int)v12;
    v15 = 1;
    v16 = (unsigned __int8)v9[v12];
    v17 = 0;
    while ( (v16 & v15) != 0 )
    {
      v15 *= 2;
      if ( (unsigned int)++v17 >= 8 )
        goto LABEL_15;
    }
    v9[v14] = v15 | v16;
    v2 += v17;
  }
  else
  {
LABEL_15:
    if ( 8 * v10 + 1 >= 0x1000000 )
      goto LABEL_16;
    v18 = v10 + 1;
    if ( 8 * v18 + 1 < (unsigned int)v11 )
    {
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, NewIrql);
      v6 = -1073676267;
      goto LABEL_42;
    }
    v19 = (_BYTE *)ExAllocatePool2(66LL, v18, 1869628494);
    v20 = v19;
    if ( !v19 )
    {
LABEL_16:
      *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
      goto LABEL_9;
    }
    if ( v9 )
    {
      memmove(v19, v9, v11);
      v20[v18 - 1] = 1;
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      *v19 = 3;
      v2 = 1;
    }
    *((_QWORD *)NdisMiniportHandle + 342) = v20;
    *((_DWORD *)NdisMiniportHandle + 686) = v18;
  }
  Flags = PortCharacteristics->Flags;
  v22 = 0;
  PortCharacteristics->PortNumber = v2;
  v23 = *(_OWORD *)&PortCharacteristics->MediaConnectState;
  *(_OWORD *)(v8 + 24) = *(_OWORD *)&PortCharacteristics->Header.Type;
  v24 = *(_OWORD *)&PortCharacteristics->RcvLinkSpeed;
  *(_OWORD *)(v8 + 40) = v23;
  v25 = *(_OWORD *)&PortCharacteristics->RcvControlState;
  *(_OWORD *)(v8 + 56) = v24;
  *(_OWORD *)(v8 + 72) = v25;
  if ( (Flags & 1) != 0 )
  {
    *((_DWORD *)v8 + 17) = *((_DWORD *)NdisMiniportHandle + 826);
    *((_DWORD *)v8 + 18) = *((_DWORD *)NdisMiniportHandle + 827);
    *((_DWORD *)v8 + 19) = *((_DWORD *)NdisMiniportHandle + 828);
    *((_DWORD *)v8 + 20) = *((_DWORD *)NdisMiniportHandle + 829);
  }
  v26 = (_DWORD *)*((_QWORD *)NdisMiniportHandle + 340);
  if ( v26 == (_DWORD *)((char *)NdisMiniportHandle + 2720) )
  {
LABEL_36:
    v28 = (__int64 *)*((_QWORD *)v26 + 1);
    v29 = *v28;
    if ( *(__int64 **)(*v28 + 8) != v28 )
      __fastfail(3u);
    *(_QWORD *)v8 = v29;
    *((_QWORD *)v8 + 1) = v28;
    *(_QWORD *)(v29 + 8) = v8;
    *v28 = (__int64)v8;
    ++*((_DWORD *)NdisMiniportHandle + 687);
    v6 = 0;
    *((_DWORD *)v8 + 4) = 2;
  }
  else
  {
    v27 = *((_DWORD *)v8 + 7);
    while ( v26[7] != v27 )
    {
      if ( v26[7] <= v27 )
      {
        v26 = *(_DWORD **)v26;
        if ( v26 != (_DWORD *)((char *)NdisMiniportHandle + 2720) )
          continue;
      }
      goto LABEL_36;
    }
    v6 = -1073741270;
    v22 = 1;
  }
  v30 = NewIrql;
  *((_QWORD *)NdisMiniportHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisMiniportHandle + 12, v30);
  if ( v6 )
  {
    if ( !v22 )
    {
LABEL_43:
      ExFreePoolWithTag(v8, 0);
      goto LABEL_44;
    }
LABEL_42:
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle, 0x64u);
    if ( !v8 )
      goto LABEL_44;
    goto LABEL_43;
  }
LABEL_44:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x17u,
      0xBu,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)NdisMiniportHandle,
      v6,
      v2);
  return v6;
}
