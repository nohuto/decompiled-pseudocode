/*
 * XREFs of ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0127F20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_qqdqq @ 0x1C0078AE4 (WPP_RECORDER_SF_qqdqq.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C0078F54 (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C00791C0 (WPP_RECORDER_SF_qqqqq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0122128 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C0127B74 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C0127C88 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDCloseProvider(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r12
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  unsigned __int8 v4; // r14
  int v5; // edx
  __int64 v6; // r8
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  wchar_t *Buffer; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // rax
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 *v15; // rcx
  __int64 **v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v21; // [rsp+28h] [rbp-E0h]
  KLockHolder v22; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v23[248]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  memset(v23, 0, sizeof(v23));
  v7 = v1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 0x1Cu, v21);
    v7 = *a1;
  }
  if ( !v7 )
  {
    v4 = 0;
    goto LABEL_36;
  }
  if ( *((_DWORD *)&v3->Header + 1) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)&v3->LinkStateIndicationFlags & 0x4000) == 0 && (v3->Header.Revision < 2u || v3->Header.Size < 0xF8u)
    || (v3->WakeUpDpcTimer.Timer.DueTime.HighPart & 1) == 0
    || HIDWORD(v3->WakeUpDpcTimer.Timer.Header.WaitListHead.Blink)
    || v3->WakeUpDpcTimer.Timer.DueTime.LowPart == -1 )
  {
    goto LABEL_35;
  }
  *((_DWORD *)a1 + 10) = 0;
  if ( v3->PcwDatapathEventMask < 0x10u )
  {
    LODWORD(v3->OpenQueue) = 16;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_36;
  }
  Buffer = v3->Reserved4.Buffer;
  if ( *(_BYTE *)Buffer == 0x80 && *((_BYTE *)Buffer + 1) == 1 && Buffer[1] >= 0x10u && !*((_DWORD *)Buffer + 1) )
  {
    OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v3);
    if ( OidSourceHandle
      && (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) != 0LL
      && (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) != 0LL
      && (v12 = (__int64 *)*((_QWORD *)Buffer + 1), (struct NDIS_PD_CLIENT *)v12[7] == PDClientViaClientDriverHandle)
      && (struct _NDIS_MINIPORT_BLOCK *)v12[6] == v1
      && *((_DWORD *)v12 + 16) == v3->WakeUpDpcTimer.Timer.DueTime.LowPart )
    {
      *((_QWORD *)Buffer + 1) = v12[9];
      *(_DWORD *)&v23[88] |= 8u;
      *(_QWORD *)&v23[104] = &ndisIntReqGeneric;
      v23[0] = -106;
      *(_DWORD *)&v23[32] = *(_DWORD *)&v3->Reserved4.Length;
      *(_DWORD *)&v23[4] = *((_DWORD *)&v3->Header + 1);
      *(_DWORD *)&v23[8] = v3->NextMiniport;
      *(_QWORD *)&v23[40] = v3->Reserved4.Buffer;
      *(_DWORD *)&v23[48] = v3->PcwDatapathEventMask;
      *(_WORD *)&v23[2] = 248;
      v23[1] = 2;
      *(_DWORD *)&v23[244] = 1;
      *(_DWORD *)&v23[240] = v3->WakeUpDpcTimer.Timer.DueTime.LowPart;
      *((_DWORD *)a1 + 10) = ndisMInvokeBlockingOidRequest(v1, (struct _NDIS_OID_REQUEST *)v23);
      *((_QWORD *)Buffer + 1) = v12;
      if ( !*((_DWORD *)a1 + 10) )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v6, v14, v21);
        v22.m_Lock = (KPushLockBase *)qword_1C00EC710;
        v12[9] = 0LL;
        v12[7] = 0LL;
        v22.m_State = Unlocked;
        v22.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v22);
        v15 = (__int64 *)*v12;
        if ( *(__int64 **)(*v12 + 8) != v12
          || (v16 = (__int64 **)v12[1], *v16 != v12)
          || (*v16 = v15,
              v15[1] = (__int64)v16,
              v17 = v12 + 4,
              *v12 = 0LL,
              v18 = v12[4],
              *(__int64 **)(v18 + 8) != v12 + 4)
          || (v19 = (_QWORD *)v12[5], (_QWORD *)*v19 != v17) )
        {
          __fastfail(3u);
        }
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        KLockHolder::~KLockHolder(&v22);
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v12[6], 0x65u);
        v12[6] = 0LL;
        ExFreePoolWithTag(v12, 0x6141444Eu);
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741808;
    }
  }
  else
  {
LABEL_35:
    *((_DWORD *)a1 + 10) = -1073741811;
  }
LABEL_36:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v6, 0x1Eu, v21);
  return v4;
}
