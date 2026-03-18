/*
 * XREFs of InitializeGre @ 0x1C02E38D0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027B78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreCreateSemaphoreInternal @ 0x1C0045014 (GreCreateSemaphoreInternal.c)
 *     ?UMPDInitializeSecurityLevel@@YA?AW4UMPDSecurityLevel@@XZ @ 0x1C0055014 (-UMPDInitializeSecurityLevel@@YA-AW4UMPDSecurityLevel@@XZ.c)
 *     HmgCreate @ 0x1C0055348 (HmgCreate.c)
 *     GreCreateRectRgn @ 0x1C008E350 (GreCreateRectRgn.c)
 *     ?Initialize@SfmState@@QEAAHXZ @ 0x1C00B3048 (-Initialize@SfmState@@QEAAHXZ.c)
 *     GreCreateSemaphoreNonTracked @ 0x1C00C2B48 (GreCreateSemaphoreNonTracked.c)
 *     bLockEtwEnabled @ 0x1C00C3CB0 (bLockEtwEnabled.c)
 *     ?bUseActualGDIScale@@YAHXZ @ 0x1C00C3FE4 (-bUseActualGDIScale@@YAHXZ.c)
 *     ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C00C4A90 (-InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C01697C4 (-InitializeDefaultDCAttributes@@YAXXZ.c)
 *     bInitBRUSHOBJ @ 0x1C02E523C (bInitBRUSHOBJ.c)
 *     bInitPALOBJ @ 0x1C02E572C (bInitPALOBJ.c)
 *     vInitXLATE @ 0x1C02E59D4 (vInitXLATE.c)
 *     bInitICM @ 0x1C02E5C44 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C02E5FA0 (bInitBMOBJ.c)
 */

char InitializeGre()
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rcx
  void *v2; // rcx
  HRGN RectRgn; // rax
  SfmState *v4; // rcx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-69h] BYREF
  __int64 v6; // [rsp+68h] [rbp-31h]
  int v7; // [rsp+70h] [rbp-29h]
  __int64 v8; // [rsp+78h] [rbp-21h]
  _QWORD v9[10]; // [rsp+A0h] [rbp+7h] BYREF
  PULONG BitMapBuffer; // [rsp+100h] [rbp+67h] BYREF
  void *v11; // [rsp+108h] [rbp+6Fh] BYREF
  PRTL_BITMAP BitMapHeader; // [rsp+110h] [rbp+77h] BYREF
  _QWORD *v13; // [rsp+118h] [rbp+7Fh] BYREF

  G_fServiceSession = gbNonServiceSession == 0;
  gUMPDSecurityLevel = UMPDInitializeSecurityLevel();
  if ( _InterlockedExchangeAdd(&CountInit, 0xFFFFFFFF) != 1 )
    return 1;
  InitializeDefaultDCAttributes();
  RtlGetSuiteMask();
  qword_1C029A000 = (__int64)&MultiUserGreEngAllocList;
  MultiUserGreEngAllocList.Flink = &MultiUserGreEngAllocList;
  MultiUserEngAllocListLock = (HSEMAPHORE)GreCreateSemaphoreNonTracked();
  if ( MultiUserEngAllocListLock )
  {
    if ( qword_1C029B370 && (int)qword_1C029B370() >= 0 && qword_1C029B378 )
      qword_1C029B378();
    qword_1C0299FF0 = (__int64)&GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocList.Flink = &GreEngLoadModuleAllocList;
    GreEngLoadModuleAllocListLock = GreCreateSemaphoreNonTracked();
    if ( GreEngLoadModuleAllocListLock )
    {
      if ( !qword_1C029B380 || (int)qword_1C029B380() < 0 || qword_1C029B388 && (unsigned int)qword_1C029B388() )
      {
        gbLockEtw = bLockEtwEnabled();
        if ( (unsigned int)HmgCreate() )
        {
          if ( RGNMEMOBJ::InitializeScanLookAsideList(v1) )
          {
            REGION::ulUniqueREGION = 1;
            if ( qword_1C029B390 && (int)qword_1C029B390() >= 0 )
            {
              v2 = 0LL;
              v11 = 0LL;
              BitMapBuffer = 0LL;
              BitMapHeader = 0LL;
              v13 = 0LL;
              if ( qword_1C029B398 )
              {
                qword_1C029B398(&v11, &BitMapBuffer, &BitMapHeader, &v13);
                v2 = v11;
              }
              memset(v2, 0, 0x200uLL);
              *(_QWORD *)BitMapBuffer = 0LL;
              RtlInitializeBitMap(BitMapHeader, BitMapBuffer, 0x40u);
              *v13 = 0LL;
            }
            ghsemDriverMgmt = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
            if ( ghsemDriverMgmt )
            {
              PATHALLOC::hsemFreelist = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
              if ( PATHALLOC::hsemFreelist )
              {
                PATHALLOC::freelist = 0LL;
                PATHALLOC::cFree = 0;
                PATHALLOC::cAllocated = 0;
                ghsemRFONTList = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                if ( ghsemRFONTList )
                {
                  ghsemCLISERV = GreCreateSemaphoreInternal(0);
                  if ( ghsemCLISERV )
                  {
                    ghsemAtmfdInit = GreCreateSemaphoreInternal(0);
                    if ( ghsemAtmfdInit )
                    {
                      ghsemWndobj = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                      if ( ghsemWndobj )
                      {
                        ghsemFntCache = GreCreateSemaphoreInternal(0);
                        if ( ghsemFntCache )
                        {
                          ghsemDwmState = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                          if ( ghsemDwmState )
                          {
                            ghsemDynamicModeChange = (PERESOURCE)GreCreateSemaphoreInternal(0);
                            if ( ghsemDynamicModeChange )
                            {
                              ghsemDCVisRgn = (PERESOURCE)GreCreateSemaphoreInternal(0);
                              if ( ghsemDCVisRgn )
                              {
                                ghsemVisRgnUniqueness = (PERESOURCE)GreCreateSemaphoreInternal(0);
                                if ( ghsemVisRgnUniqueness )
                                {
                                  ghsemVisRgnPublish = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                  if ( ghsemVisRgnPublish )
                                  {
                                    ghsemSprite = (PERESOURCE)GreCreateSemaphoreInternal(0);
                                    if ( ghsemSprite )
                                    {
                                      ghsemMapRot = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                      if ( ghsemMapRot )
                                      {
                                        ghsemGreLock = (PERESOURCE)GreCreateSemaphoreInternal(0);
                                        if ( ghsemGreLock )
                                        {
                                          ghsemHT = (HSEMAPHORE)GreCreateSemaphoreInternal(0);
                                          if ( ghsemHT )
                                          {
                                            RectRgn = (HRGN)GreCreateRectRgn(0, 0, 0, 0);
                                            hrgnDefault = RectRgn;
                                            if ( RectRgn )
                                            {
                                              RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v9, RectRgn, 1, 0);
                                              if ( v9[0] )
                                              {
                                                prgnDefault = (struct REGION *)v9[0];
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
                                                if ( (unsigned int)bInitPALOBJ() )
                                                {
                                                  vInitXLATE();
                                                  if ( (unsigned int)bInitBMOBJ() )
                                                  {
                                                    if ( (unsigned int)bInitBRUSHOBJ()
                                                      && (unsigned int)bInitICM()
                                                      && (!qword_1C029B3A0
                                                       || (int)qword_1C029B3A0() < 0
                                                       || qword_1C029B3A8 && (unsigned int)qword_1C029B3A8())
                                                      && (!qword_1C029B3B0
                                                       || (int)qword_1C029B3B0() < 0
                                                       || qword_1C029B3B8 && (unsigned int)qword_1C029B3B8()) )
                                                    {
                                                      if ( qword_1C029B3C0 && (int)qword_1C029B3C0() >= 0 )
                                                      {
                                                        if ( qword_1C029B3C8 )
                                                          qword_1C029B3C8();
                                                      }
                                                      if ( (unsigned int)SfmState::Initialize(v4) )
                                                      {
                                                        QueryTable.Flags = 0;
                                                        QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)LpkShapeQueryRoutine;
                                                        memset(&QueryTable.Name, 0, 20);
                                                        QueryTable.DefaultData = 0LL;
                                                        QueryTable.DefaultLength = 0;
                                                        v6 = 0LL;
                                                        v7 = 0;
                                                        v8 = 0LL;
                                                        *((_DWORD *)gpGdiSharedMemory + 393253) = 0;
                                                        RtlQueryRegistryValues(
                                                          0x80000003,
                                                          L"LanguagePack",
                                                          &QueryTable,
                                                          0LL,
                                                          0LL);
                                                        *((_DWORD *)gpGdiSharedMemory + 393254) = 1;
                                                        gbUseActualGDIScale = bUseActualGDIScale();
                                                        return 1;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v9);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
