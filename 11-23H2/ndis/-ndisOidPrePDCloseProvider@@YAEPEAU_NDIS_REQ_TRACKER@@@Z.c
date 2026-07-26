/*
 * XREFs of ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0133AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00030D0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003DD8A (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qqdqq @ 0x1C007DFC0 (WPP_RECORDER_SF_qqdqq.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C007E430 (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C007E69C (WPP_RECORDER_SF_qqqqq.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C012DBA8 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C013371C (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C0133830 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDCloseProvider(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v2; // rsi
  unsigned __int8 v3; // r15
  int v4; // edx
  int v5; // r8d
  __int64 v6; // r8
  NDIS_STATUS *v7; // rbx
  __int64 v8; // r13
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
  struct _NDIS_MINIPORT_BLOCK *v22; // [rsp+68h] [rbp-A0h]
  KLockHolder v23; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v24[248]; // [rsp+98h] [rbp-70h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  v22 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = 1;
  memset(v24, 0, sizeof(v24));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v5, 0x1Cu, v21);
  LODWORD(v6) = 0;
  if ( !*(_QWORD *)a1 )
  {
    v3 = 0;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(v2 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v2 + 88) & 0x4000) == 0 && (*(_BYTE *)(v2 + 1) < 2u || *(_WORD *)(v2 + 2) < 0xF8u)
    || (*(_DWORD *)(v2 + 244) & 1) == 0
    || *(_DWORD *)(v2 + 236)
    || *(_DWORD *)(v2 + 240) == -1 )
  {
    v7 = (NDIS_STATUS *)((char *)a1 + 40);
    goto LABEL_11;
  }
  v7 = (NDIS_STATUS *)((char *)a1 + 40);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v2 + 48) < 0x10u )
  {
    *(_DWORD *)(v2 + 56) = 16;
    *v7 = -1073676268;
    goto LABEL_36;
  }
  v8 = *(_QWORD *)(v2 + 40);
  if ( *(_BYTE *)v8 != 0x80 || *(_BYTE *)(v8 + 1) != 1 || *(_WORD *)(v8 + 2) < 0x10u || *(_DWORD *)(v8 + 4) )
  {
LABEL_11:
    *v7 = -1073741811;
    goto LABEL_36;
  }
  OidSourceHandle = ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v2);
  if ( OidSourceHandle
    && (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) != 0LL
    && (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) != 0LL )
  {
    v12 = *(__int64 **)(v8 + 8);
    if ( (struct NDIS_PD_CLIENT *)v12[7] == PDClientViaClientDriverHandle
      && (struct _NDIS_MINIPORT_BLOCK *)v12[6] == v22
      && *((_DWORD *)v12 + 16) == *(_DWORD *)(v2 + 240) )
    {
      *(_QWORD *)(v8 + 8) = v12[9];
      *(_DWORD *)&v24[88] |= 8u;
      *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
      EtwActivityIdControl(3u, (LPGUID)&v24[168]);
      *(_DWORD *)v24 = 15466902;
      *(_DWORD *)&v24[32] = *(_DWORD *)(v2 + 32);
      *(_DWORD *)&v24[4] = *(_DWORD *)(v2 + 4);
      *(_DWORD *)&v24[8] = *(_DWORD *)(v2 + 8);
      *(_QWORD *)&v24[40] = *(_QWORD *)(v2 + 40);
      *(_DWORD *)&v24[48] = *(_DWORD *)(v2 + 48);
      *(_WORD *)&v24[2] = 248;
      v24[1] = 2;
      *(_DWORD *)&v24[244] = 1;
      *(_DWORD *)&v24[240] = *(_DWORD *)(v2 + 240);
      *v7 = ndisMInvokeBlockingOidRequest(v22, (struct _NDIS_OID_REQUEST *)v24);
      *(_QWORD *)(v8 + 8) = v12;
      if ( !*v7 )
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v6, v14, v21);
        v23.m_Lock = *(KPushLockBase **)&qword_1C00F5708;
        v12[9] = 0LL;
        v12[7] = 0LL;
        v23.m_State = Unlocked;
        v23.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v23);
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
        KLockHolder::~KLockHolder(&v23);
        ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v12[6], 0x65u);
        v12[6] = 0LL;
        ExFreePoolWithTag(v12, 0x6141444Eu);
      }
    }
    else
    {
      *v7 = -1073741808;
    }
  }
  else
  {
    *v7 = -1073741808;
  }
LABEL_36:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v3, v6, 0x1Eu, v21);
  return v3;
}
