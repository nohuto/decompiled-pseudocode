/*
 * XREFs of ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0133EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DC0A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0075FA0 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_qqdqqS @ 0x1C007E0C8 (WPP_RECORDER_SF_qqdqqS.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C007E410 (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C007E67C (WPP_RECORDER_SF_qqqqq.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C012DBE8 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C013375C (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C0133870 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r12
  __int64 v3; // rsi
  unsigned __int8 v4; // r15
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r8
  NDIS_STATUS *v8; // rbx
  unsigned int *v9; // rdi
  bool v10; // zf
  __int64 v11; // r13
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  struct _NDIS_PD_BLOCK *PDBlock; // rax
  __int64 v16; // rcx
  char *PoolWithTag; // rdi
  __int64 v18; // rax
  NDIS_STATUS v19; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 **v25; // rdx
  __int64 v26; // r9
  const wchar_t *v27; // rcx
  __int64 v29; // [rsp+28h] [rbp-E0h]
  __int128 v30; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD *v31; // [rsp+78h] [rbp-90h]
  KLockHolder v32; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v33[248]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 1;
  memset(v33, 0, sizeof(v33));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 0x17u, v29);
  LODWORD(v7) = 0;
  if ( !*(_QWORD *)a1 )
  {
    v4 = 0;
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v3 + 4) != 12 )
  {
    v8 = (NDIS_STATUS *)((char *)a1 + 40);
LABEL_7:
    *v8 = -1073741637;
    goto LABEL_56;
  }
  if ( (*(_DWORD *)(v3 + 88) & 0x4000) == 0 && (*(_BYTE *)(v3 + 1) < 2u || *(_WORD *)(v3 + 2) < 0xF8u)
    || (*(_DWORD *)(v3 + 244) & 1) == 0
    || *(_DWORD *)(v3 + 236)
    || (v9 = (unsigned int *)(v3 + 240), v10 = *(_DWORD *)(v3 + 240) == -1, v31 = (_DWORD *)(v3 + 240), v10) )
  {
    v8 = (NDIS_STATUS *)((char *)a1 + 40);
LABEL_55:
    *v8 = -1073741811;
    goto LABEL_56;
  }
  v8 = (NDIS_STATUS *)((char *)a1 + 40);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x18u )
  {
    *(_DWORD *)(v3 + 68) = 24;
    *v8 = -1073676268;
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v3 + 52) < 0x18u )
  {
    *(_DWORD *)(v3 + 68) = 24;
    *v8 = -1073676266;
    goto LABEL_56;
  }
  v11 = *(_QWORD *)(v3 + 40);
  if ( *(_BYTE *)v11 != 0x80
    || *(_BYTE *)(v11 + 1) != 1
    || *(_WORD *)(v11 + 2) < 0x18u
    || (*(_DWORD *)(v11 + 4) & 0xFFFFFFFE) != 0 )
  {
    goto LABEL_55;
  }
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
  if ( !OidSourceHandle
    || (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) == 0LL
    || (*(_QWORD *)&v30 = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle), !(_QWORD)v30) )
  {
    *v8 = -1073741808;
    goto LABEL_56;
  }
  if ( *v9 )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v1, *v9);
    if ( !VPortByVPortId || (VPortByVPortId->Flags & 2) != 0 )
      goto LABEL_55;
  }
  PDBlock = v1->PDBlock;
  if ( !PDBlock )
    goto LABEL_7;
  if ( !*((_BYTE *)PDBlock + 12) )
    goto LABEL_7;
  if ( !*((_DWORD *)PDBlock + 8) )
    goto LABEL_7;
  v16 = *((_QWORD *)PDBlock + 3);
  if ( !*(_DWORD *)(v16 + 16) || !*(_BYTE *)(v16 + 8) )
    goto LABEL_7;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x6141444Eu);
  if ( !PoolWithTag )
  {
    *v8 = -1073741670;
    goto LABEL_56;
  }
  *((_DWORD *)PoolWithTag + 16) = -1;
  *((_QWORD *)PoolWithTag + 6) = 0LL;
  *((_QWORD *)PoolWithTag + 7) = 0LL;
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *((_WORD *)PoolWithTag + 44) = 0;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *(_QWORD *)PoolWithTag = 0LL;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 96;
  *((_QWORD *)PoolWithTag + 12) = PoolWithTag + 96;
  *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 112;
  *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 112;
  *((_QWORD *)PoolWithTag + 17) = PoolWithTag + 128;
  *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 128;
  *((_QWORD *)PoolWithTag + 19) = PoolWithTag + 144;
  *((_QWORD *)PoolWithTag + 18) = PoolWithTag + 144;
  *((_QWORD *)PoolWithTag + 21) = PoolWithTag + 160;
  *((_QWORD *)PoolWithTag + 20) = PoolWithTag + 160;
  *((_QWORD *)PoolWithTag + 23) = PoolWithTag + 176;
  *((_QWORD *)PoolWithTag + 22) = PoolWithTag + 176;
  if ( !ndisReferenceMiniport(v1, 0x65u) )
  {
    *v8 = -1073741436;
LABEL_37:
    v18 = *((_QWORD *)PoolWithTag + 9);
    if ( v18 )
    {
      *(_QWORD *)((char *)&v30 + 1) = 0LL;
      LODWORD(v30) = 1048960;
      *((_QWORD *)&v30 + 1) = v18;
      memset(v33, 0, sizeof(v33));
      *(_DWORD *)&v33[88] |= 8u;
      *(_QWORD *)&v33[104] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v33[168]);
      *(_DWORD *)v33 = 15466902;
      *(_DWORD *)&v33[32] = 66818;
      *(_DWORD *)&v33[4] = 1;
      *(_DWORD *)&v33[8] = *(_DWORD *)(v3 + 8);
      *(_QWORD *)&v33[40] = &v30;
      *(_WORD *)&v33[2] = 248;
      *(_DWORD *)&v33[48] = 16;
      v33[1] = 2;
      *(_DWORD *)&v33[244] = 1;
      *(_DWORD *)&v33[240] = *v31;
      ndisMInvokeBlockingOidRequest(v1, (struct _NDIS_OID_REQUEST *)v33);
      *((_QWORD *)PoolWithTag + 9) = 0LL;
    }
    if ( *((_QWORD *)PoolWithTag + 6) )
    {
      ndisDereferenceMiniport(v1, 0x65u);
      *((_QWORD *)PoolWithTag + 6) = 0LL;
    }
    ExFreePoolWithTag(PoolWithTag, 0x6141444Eu);
    goto LABEL_56;
  }
  *((_QWORD *)PoolWithTag + 6) = v1;
  *((_DWORD *)PoolWithTag + 16) = *(_DWORD *)(v3 + 240);
  memset(v33, 0, sizeof(v33));
  *(_DWORD *)&v33[88] |= 8u;
  *(_QWORD *)&v33[104] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v33[168]);
  *(_DWORD *)v33 = 15466902;
  *(_DWORD *)&v33[4] = 12;
  *(_DWORD *)&v33[8] = *(_DWORD *)(v3 + 8);
  *(_DWORD *)&v33[32] = *(_DWORD *)(v3 + 32);
  *(_DWORD *)&v33[56] = *(_DWORD *)(v3 + 56);
  *(_OWORD *)&v33[40] = *(_OWORD *)(v3 + 40);
  *(_WORD *)&v33[2] = 248;
  v33[1] = 2;
  *(_DWORD *)&v33[244] = 1;
  *(_DWORD *)&v33[240] = *(_DWORD *)(v3 + 240);
  v19 = ndisMInvokeBlockingOidRequest(v1, (struct _NDIS_OID_REQUEST *)v33);
  *v8 = v19;
  v31 = (_DWORD *)(v3 + 240);
  if ( v19 )
    goto LABEL_37;
  v20 = *(_QWORD *)(v11 + 8);
  v32.m_State = Unlocked;
  *((_QWORD *)PoolWithTag + 9) = v20;
  *((_QWORD *)PoolWithTag + 10) = *(_QWORD *)(v11 + 16);
  v32.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
  v32.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v32);
  v21 = v30;
  *((_QWORD *)PoolWithTag + 7) = v30;
  v22 = *(_QWORD **)(v21 + 24);
  if ( *v22 != v21 + 16
    || (*(_QWORD *)PoolWithTag = v21 + 16,
        *((_QWORD *)PoolWithTag + 1) = v22,
        *v22 = PoolWithTag,
        v23 = (__int64 *)(PoolWithTag + 32),
        *(_QWORD *)(v21 + 24) = PoolWithTag,
        v24 = (__int64)v1->PDBlock + 40,
        v25 = (__int64 **)*((_QWORD *)v1->PDBlock + 6),
        *v25 != (__int64 *)v24) )
  {
    __fastfail(3u);
  }
  *v23 = v24;
  *((_QWORD *)PoolWithTag + 5) = v25;
  *v25 = v23;
  *(_QWORD *)(v24 + 8) = v23;
  KLockHolder::~KLockHolder(&v32);
  if ( *((_UNKNOWN **)PoolWithTag + 10) == &unk_1C00D7520 )
    PoolWithTag[88] = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v27 = L"PASS_THROUGH";
    if ( !PoolWithTag[88] )
      v27 = L" ";
    WPP_RECORDER_SF_qqdqqS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)L" ",
      v7,
      v26,
      v29,
      v21,
      (char)v1,
      *((_DWORD *)PoolWithTag + 16),
      (char)PoolWithTag,
      *(_QWORD *)(v11 + 8),
      v27);
  }
  *(_QWORD *)(v11 + 8) = PoolWithTag;
  *(_QWORD *)(v11 + 16) = &unk_1C00D7520;
LABEL_56:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v7, 0x19u, v29);
  return v4;
}
