/*
 * XREFs of NdisCoRequest @ 0x1C00C0F20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000CEC0 (WPP_RECORDER_SF_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC6EC (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC8A0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCoOidRequest @ 0x1C00C09E0 (NdisCoOidRequest.c)
 *     NdisCoRequestComplete @ 0x1C00C12F0 (NdisCoRequestComplete.c)
 */

__int64 __fastcall NdisCoRequest(
        NDIS_HANDLE NdisBindingHandle,
        __int64 a2,
        _QWORD *NdisVcHandle,
        _QWORD *NdisPartyHandle,
        char *a5)
{
  NDIS_HANDLE v8; // r12
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 (__fastcall *v15)(PVOID, __int64, __int64, char *); // rbp
  KIRQL v16; // al
  KSPIN_LOCK *v17; // rcx
  NDIS_STATUS v19; // eax
  __int64 OidRequest; // rax
  __int64 v21; // rsi
  int v22; // ecx
  _DWORD *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // r11
  char v28; // [rsp+70h] [rbp+8h]
  PVOID v29; // [rsp+90h] [rbp+28h]

  v28 = (char)NdisBindingHandle;
  v8 = NdisBindingHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)NdisBindingHandle,
      a2,
      a5);
  if ( *((_DWORD *)a5 + 10) == -33554422
    && *((_DWORD *)a5 + 8) == 1
    && a2
    && ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)a2) )
  {
    if ( *(_DWORD *)(a2 + 396) >= 6u )
    {
      *(_QWORD *)(a2 + 400) = a5;
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 384));
      v11 = (KSPIN_LOCK *)(a2 + 384);
      if ( (*(_DWORD *)(a2 + 8) & 0x40000000) != 0 )
      {
        *(_BYTE *)(a2 + 592) = 1;
        *(_QWORD *)(a2 + 584) = a5;
        KeReleaseSpinLock(v11, v10);
LABEL_10:
        v12 = 259;
        goto LABEL_23;
      }
      KeReleaseSpinLock(v11, v10);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(a2 + 360))(*(_QWORD *)(a2 + 376));
      if ( v12 != 259 )
      {
        *(_QWORD *)(a2 + 400) = 0LL;
        ndisDereferenceAf((KSPIN_LOCK *)a2);
      }
      goto LABEL_23;
    }
    v13 = 0LL;
    *(_OWORD *)(a5 + 72) = 0LL;
    v14 = 0LL;
    *(_OWORD *)(a5 + 88) = 0LL;
    v15 = *(__int64 (__fastcall **)(PVOID, __int64, __int64, char *))(a2 + 80);
    v29 = *(PVOID *)(a2 + 376);
    *((_QWORD *)a5 + 11) = *(_QWORD *)(a2 + 48);
    *((_QWORD *)a5 + 9) = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 128LL);
    if ( NdisVcHandle )
    {
      *((_QWORD *)a5 + 10) = NdisVcHandle[18];
      v13 = NdisVcHandle[3];
    }
    if ( NdisPartyHandle )
    {
      *((_QWORD *)a5 + 12) = NdisPartyHandle[18];
      v14 = NdisPartyHandle[2];
    }
    if ( !v15 )
    {
      v12 = -1073741637;
      ndisDereferenceAf((KSPIN_LOCK *)a2);
      LOBYTE(v8) = v28;
      goto LABEL_23;
    }
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 384));
    v17 = (KSPIN_LOCK *)(a2 + 384);
    if ( (*(_DWORD *)(a2 + 8) & 0x40000000) != 0 )
    {
      *(_BYTE *)(a2 + 592) = 1;
      *(_QWORD *)(a2 + 584) = a5;
      KeReleaseSpinLock(v17, v16);
    }
    else
    {
      KeReleaseSpinLock(v17, v16);
      v19 = v15(v29, v13, v14, a5);
      v12 = v19;
      if ( v19 == 259 )
        goto LABEL_22;
      NdisCoRequestComplete(v19, (PVOID)a2, NdisVcHandle, NdisPartyHandle, a5);
    }
    v12 = 259;
LABEL_22:
    LOBYTE(v8) = v28;
    goto LABEL_23;
  }
  OidRequest = ExAllocatePool2(64LL, 248LL, 1701987406);
  v21 = OidRequest;
  if ( OidRequest )
  {
    v22 = *((_DWORD *)a5 + 8);
    *(_DWORD *)OidRequest = 16253334;
    *(_DWORD *)(OidRequest + 4) = v22;
    if ( v22 != 12 )
    {
      *(_DWORD *)(OidRequest + 32) = *((_DWORD *)a5 + 10);
      *(_QWORD *)(OidRequest + 40) = *((_QWORD *)a5 + 6);
      *(_DWORD *)(OidRequest + 48) = *((_DWORD *)a5 + 14);
      *(_DWORD *)(OidRequest + 52) = *((_DWORD *)a5 + 15);
      *(_DWORD *)(OidRequest + 56) = *((_DWORD *)a5 + 16);
    }
    *(_QWORD *)(OidRequest + 104) = v8;
    *(_QWORD *)(OidRequest + 96) = a5;
    v12 = NdisCoOidRequest(v8, (NDIS_HANDLE)a2, NdisVcHandle, NdisPartyHandle, (PNDIS_OID_REQUEST)OidRequest);
    if ( v12 != 259 )
    {
      v23 = *(_DWORD **)(v21 + 96);
      v24 = *(_QWORD *)(v21 + 112);
      v25 = *(_QWORD *)(v21 + 128);
      v26 = *(_QWORD *)(v21 + 136);
      v27 = *(_QWORD *)(v21 + 104);
      if ( v23[8] != 12 )
      {
        v23[15] = *(_DWORD *)(v21 + 52);
        v23[16] = *(_DWORD *)(v21 + 56);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD *))(v27 + 1080))(v12, v26, v25, v24, v23);
      ExFreePoolWithTag((PVOID)v21, 0);
      goto LABEL_10;
    }
  }
  else
  {
    v12 = -1073741670;
  }
LABEL_23:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_f2e723125d8f3d1097c3ab5c6e889825_Traceguids,
      (char)v8,
      a2,
      a5);
  return v12;
}
