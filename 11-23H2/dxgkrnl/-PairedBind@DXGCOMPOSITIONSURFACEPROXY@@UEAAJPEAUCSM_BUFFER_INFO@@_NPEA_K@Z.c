/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1C02E2430
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008364 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0008394 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000A924 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01AC934 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01C71F0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x1C0362A94 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C0362FA4 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C0363440 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct _LUID *a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  DXGADAPTER *v9; // rbx
  struct DXGADAPTER *v10; // rbx
  unsigned int v11; // ebx
  DXGCOMPOSITIONSURFACEPROXY *v12; // rdi
  DXGCOMPOSITIONSURFACEPROXY *v13; // r8
  struct DXGADAPTER *v14; // rdx
  struct _LUID v15; // rbx
  __int64 v16; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rdi
  unsigned int v20; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v22; // rax
  unsigned int HighPart; // edx
  unsigned int i; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  void *v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rbx
  unsigned __int64 v38; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v40; // rcx
  unsigned int v41; // eax
  char v44; // [rsp+54h] [rbp-ACh] BYREF
  char v45; // [rsp+55h] [rbp-ABh]
  unsigned int v46; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v47; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  char v49; // [rsp+70h] [rbp-90h]
  _BYTE v50[144]; // [rsp+80h] [rbp-80h] BYREF
  void *v51[32]; // [rsp+110h] [rbp+10h] BYREF

  memset(v51, 0, sizeof(v51));
  v46 = 0;
  v45 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v44);
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[22], (unsigned __int64 *)&v47);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(3LL, 1499LL);
LABEL_5:
    v11 = -1073741811;
    goto LABEL_37;
  }
  v47 = 0LL;
  DxgkpGetPairingAdapters(v8, 0, &v47, &v48, 0LL, 0LL, 0);
  DXGADAPTER::ReleaseReference(v9);
  v10 = v47;
  if ( !v47 )
  {
    WdLogSingleEntry1(3LL, 1520LL);
    goto LABEL_5;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v47, 0LL);
  v12 = (DXGCOMPOSITIONSURFACEPROXY *)(int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
  DXGADAPTER::ReleaseReference(v10);
  if ( (int)v12 < 0 )
  {
    v13 = v12;
    v14 = v10;
LABEL_35:
    WdLogSingleEntry2(3LL, v14, v13);
    goto LABEL_36;
  }
  v15 = *(struct _LUID *)((char *)v10 + 4572);
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v50);
  Current = DXGPROCESS::GetCurrent(v16);
  if ( Current )
  {
    KeEnterCriticalRegion();
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v48, (struct DXGPROCESS *)((char *)Current + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v48);
    if ( *((_DWORD *)Current + 126) && (*((_DWORD *)Current + 106) & 4) != 0 )
    {
      if ( *((_BYTE *)Current + 600) )
      {
        v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v19
          && (v20 = PsGetCurrentProcessSessionId(v18),
              (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, v20)) != 0LL) )
        {
          v22 = *((unsigned int *)this + 5);
          if ( (_DWORD)v22 && *((_BYTE *)this + 40) )
          {
            HighPart = a2[20].HighPart;
            for ( i = 0; i < HighPart; v51[v26] = v27 )
            {
              v25 = 4LL * i;
              v26 = i++;
              v27 = (void *)a2[v25 + 21];
              a2[v25 + 21] = 0LL;
              a2[v25 + 22] = v15;
              HighPart = a2[20].HighPart;
            }
            v28 = (void *)a2[147];
            a2[147] = 0LL;
            v51[HighPart] = v28;
            v29 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(
                    SessionDataForSpecifiedSession,
                    HighPart + 1,
                    v51,
                    &v46);
            LODWORD(v12) = v29;
            if ( v29 >= 0 )
            {
              v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v30, v32, v33);
              v34[3] = *((unsigned int *)this + 5);
              v34[4] = this;
              v34[5] = a3;
              v34[6] = a2[1];
              v35 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                      SessionDataForSpecifiedSession,
                      *((_DWORD *)this + 5),
                      a3,
                      (const struct CSM_BUFFER_INFO *)a2,
                      v46,
                      a4);
              LODWORD(v12) = v35;
              if ( v35 < 0 )
                WdLogSingleEntry5(3LL, *((unsigned int *)this + 5), this, a3, *(_QWORD *)&a2[1], v35);
            }
            else
            {
              WdLogSingleEntry2(3LL, v29, this);
            }
            if ( v46 )
            {
              v36 = DXGSESSIONDATA::VailSendDestroyBundleObject(SessionDataForSpecifiedSession, v46);
              if ( v36 < 0 )
              {
                v37 = v36;
                WdLogSingleEntry2(2LL, v36, this);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed SendDestroyBundleObject Returning 0x%I64x",
                  v37,
                  (__int64)this,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            if ( (int)v12 >= 0 )
            {
              *((_BYTE *)this + 41) = 1;
              v38 = *a4;
              ++*((_DWORD *)this + 14);
              *((_QWORD *)this + 6) = v38;
            }
          }
          else
          {
            LODWORD(v12) = -1073741823;
            WdLogSingleEntry4(2LL, -1073741823LL, v22, *((unsigned __int8 *)this + 40), this);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"PairedBind is called without promote Returning  0x%I64x",
              -1073741823LL,
              *((unsigned int *)this + 5),
              *((unsigned __int8 *)this + 40),
              (__int64)this,
              0LL);
          }
        }
        else
        {
          LODWORD(v12) = -1073741811;
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18);
          WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
          v41 = PsGetCurrentProcessSessionId(v40);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
            v41,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        LODWORD(v12) = -2147483611;
        WdLogSingleEntry1(3LL, -2147483611LL);
      }
    }
    KeLeaveCriticalRegion();
    if ( v49 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v48);
    if ( (int)v12 >= 0 )
      goto LABEL_36;
    v14 = (struct DXGADAPTER *)(int)v12;
    v13 = this;
    goto LABEL_35;
  }
  WdLogSingleEntry1(2LL, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid process context. Returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v12) = -1073741811;
LABEL_36:
  v11 = (unsigned int)v12;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
LABEL_37:
  if ( v45 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v44);
  return v11;
}
