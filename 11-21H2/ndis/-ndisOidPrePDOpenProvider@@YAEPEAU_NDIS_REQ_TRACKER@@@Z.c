/*
 * XREFs of ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C01282B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0070B7C (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_qqdqqS @ 0x1C0078C0C (WPP_RECORDER_SF_qqdqqS.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C0078F54 (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C00791C0 (WPP_RECORDER_SF_qqqqq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0122128 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C0127B74 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C0127C88 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r13
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  unsigned __int8 v4; // r14
  int v5; // edx
  __int64 v6; // r8
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  wchar_t *Buffer; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // r12
  unsigned int LowPart; // edx
  struct _NDIS_VPORT_BLOCK *VPortByVPortId; // rax
  struct _NDIS_PD_BLOCK *PDBlock; // rax
  __int64 v15; // rcx
  char *PoolWithTag; // rdi
  KPushLockBase *v17; // rax
  NDIS_STATUS v18; // eax
  __int64 v19; // rax
  struct NDIS_PD_CLIENT **v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 **v23; // rdx
  __int64 v24; // r9
  const wchar_t *v25; // rcx
  __int64 v27; // [rsp+28h] [rbp-E0h]
  KLockHolder v28; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v29[248]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  memset(v29, 0, sizeof(v29));
  v7 = v1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 0x17u, v27);
    v7 = *a1;
  }
  if ( !v7 )
  {
    v4 = 0;
    goto LABEL_54;
  }
  if ( *((_DWORD *)&v3->Header + 1) != 12 )
    goto LABEL_6;
  if ( (*(_DWORD *)&v3->LinkStateIndicationFlags & 0x4000) == 0 && (v3->Header.Revision < 2u || v3->Header.Size < 0xF8u)
    || (v3->WakeUpDpcTimer.Timer.DueTime.HighPart & 1) == 0
    || HIDWORD(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink)
    || v3->WakeUpDpcTimer.Timer.DueTime.LowPart == -1 )
  {
    goto LABEL_53;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( v3->PcwDatapathEventMask < 0x18u )
  {
    HIDWORD(v3->ShortRef.SpinLock) = 24;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_54;
  }
  if ( HIDWORD(v3->Reserved28) < 0x18 )
  {
    HIDWORD(v3->ShortRef.SpinLock) = 24;
    *((_DWORD *)a1 + 10) = -1073676266;
    goto LABEL_54;
  }
  Buffer = v3->Reserved4.Buffer;
  if ( *(_BYTE *)Buffer != 0x80
    || *((_BYTE *)Buffer + 1) != 1
    || Buffer[1] < 0x18u
    || (*((_DWORD *)Buffer + 1) & 0xFFFFFFFE) != 0 )
  {
    goto LABEL_53;
  }
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
  if ( !OidSourceHandle
    || (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) == 0LL
    || (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) == 0LL )
  {
    *((_DWORD *)a1 + 10) = -1073741808;
    goto LABEL_54;
  }
  LowPart = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
  if ( LowPart )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v1, LowPart);
    if ( !VPortByVPortId || (VPortByVPortId->Flags & 2) != 0 )
    {
LABEL_53:
      *((_DWORD *)a1 + 10) = -1073741811;
      goto LABEL_54;
    }
  }
  PDBlock = v1->PDBlock;
  if ( !PDBlock
    || !*((_BYTE *)PDBlock + 12)
    || !*((_DWORD *)PDBlock + 8)
    || (v15 = *((_QWORD *)PDBlock + 3), !*(_DWORD *)(v15 + 16))
    || !*(_BYTE *)(v15 + 8) )
  {
LABEL_6:
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_54;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x6141444Eu);
  if ( !PoolWithTag )
  {
    *((_DWORD *)a1 + 10) = -1073741670;
    goto LABEL_54;
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
    *((_DWORD *)a1 + 10) = -1073741436;
LABEL_36:
    v17 = (KPushLockBase *)*((_QWORD *)PoolWithTag + 9);
    if ( v17 )
    {
      *(_QWORD *)((char *)&v28.m_State + 1) = 0LL;
      v28.m_State = 1048960;
      v28.m_Lock = v17;
      memset(v29, 0, sizeof(v29));
      *(_DWORD *)&v29[88] |= 8u;
      *(_QWORD *)&v29[104] = &ndisIntReqGeneric;
      *(_DWORD *)v29 = 15466902;
      *(_DWORD *)&v29[32] = 66818;
      *(_DWORD *)&v29[4] = 1;
      *(_DWORD *)&v29[8] = v3->NextMiniport;
      *(_QWORD *)&v29[40] = &v28;
      *(_WORD *)&v29[2] = 248;
      *(_DWORD *)&v29[48] = 16;
      v29[1] = 2;
      *(_DWORD *)&v29[244] = 1;
      *(_DWORD *)&v29[240] = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
      ndisMInvokeBlockingOidRequest(v1, (struct _NDIS_OID_REQUEST *)v29);
      *((_QWORD *)PoolWithTag + 9) = 0LL;
    }
    if ( *((_QWORD *)PoolWithTag + 6) )
    {
      ndisDereferenceMiniport(v1, 0x65u);
      *((_QWORD *)PoolWithTag + 6) = 0LL;
    }
    ExFreePoolWithTag(PoolWithTag, 0x6141444Eu);
    goto LABEL_54;
  }
  *((_QWORD *)PoolWithTag + 6) = v1;
  *((_DWORD *)PoolWithTag + 16) = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
  memset(v29, 0, sizeof(v29));
  *(_DWORD *)&v29[88] |= 8u;
  *(_QWORD *)&v29[104] = &ndisIntReqGeneric;
  v29[0] = -106;
  *(_DWORD *)&v29[4] = 12;
  *(_DWORD *)&v29[8] = v3->NextMiniport;
  *(_DWORD *)&v29[32] = *(_DWORD *)&v3->Reserved4.Length;
  *(_DWORD *)&v29[56] = v3->OpenQueue;
  *(_OWORD *)&v29[40] = *(_OWORD *)&v3->PcwDataBlock;
  *(_WORD *)&v29[2] = 248;
  v29[1] = 2;
  *(_DWORD *)&v29[244] = 1;
  *(_DWORD *)&v29[240] = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
  v18 = ndisMInvokeBlockingOidRequest(v1, (struct _NDIS_OID_REQUEST *)v29);
  *((_DWORD *)a1 + 10) = v18;
  if ( v18 )
    goto LABEL_36;
  v19 = *((_QWORD *)Buffer + 1);
  v28.m_State = Unlocked;
  *((_QWORD *)PoolWithTag + 9) = v19;
  *((_QWORD *)PoolWithTag + 10) = *((_QWORD *)Buffer + 2);
  v28.m_Lock = (KPushLockBase *)qword_1C00EC710;
  v28.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v28);
  *((_QWORD *)PoolWithTag + 7) = PDClientViaClientDriverHandle;
  v20 = (struct NDIS_PD_CLIENT **)*((_QWORD *)PDClientViaClientDriverHandle + 3);
  if ( *v20 != (struct NDIS_PD_CLIENT *)((char *)PDClientViaClientDriverHandle + 16)
    || (*(_QWORD *)PoolWithTag = (char *)PDClientViaClientDriverHandle + 16,
        *((_QWORD *)PoolWithTag + 1) = v20,
        *v20 = (struct NDIS_PD_CLIENT *)PoolWithTag,
        v21 = (__int64 *)(PoolWithTag + 32),
        *((_QWORD *)PDClientViaClientDriverHandle + 3) = PoolWithTag,
        v22 = (__int64)v1->PDBlock + 40,
        v23 = (__int64 **)*((_QWORD *)v1->PDBlock + 6),
        *v23 != (__int64 *)v22) )
  {
    __fastfail(3u);
  }
  *v21 = v22;
  *((_QWORD *)PoolWithTag + 5) = v23;
  *v23 = v21;
  *(_QWORD *)(v22 + 8) = v21;
  KLockHolder::~KLockHolder(&v28);
  if ( *((_UNKNOWN **)PoolWithTag + 10) == &unk_1C00D0160 )
    PoolWithTag[88] = 1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v25 = L"PASS_THROUGH";
    if ( !PoolWithTag[88] )
      v25 = L" ";
    WPP_RECORDER_SF_qqdqqS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)L" ",
      v6,
      v24,
      v27,
      (char)PDClientViaClientDriverHandle,
      (char)v1,
      *((_DWORD *)PoolWithTag + 16),
      (char)PoolWithTag,
      *((_QWORD *)Buffer + 1),
      v25);
  }
  *((_QWORD *)Buffer + 1) = PoolWithTag;
  *((_QWORD *)Buffer + 2) = &unk_1C00D0160;
LABEL_54:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v6, 0x19u, v27);
  return v4;
}
