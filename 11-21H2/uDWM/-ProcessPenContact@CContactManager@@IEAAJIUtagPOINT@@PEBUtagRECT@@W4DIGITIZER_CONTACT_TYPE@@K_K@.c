/*
 * XREFs of ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800ACBD4
 * Callers:
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800AB6E0 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x1800AC5F4 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003FD24 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800699FC (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180069AB0 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z @ 0x1800AA5E0 (-AddMultipleAndSet@-$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x1800AB444 (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x1800AD8E8 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800ADB84 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::ProcessPenContact(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int64 a7)
{
  CContactManager *v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 *v13; // r14
  _DWORD *v14; // rax
  int started; // eax
  __int64 v16; // rsi
  __int64 v17; // rax
  struct CTouchVisual *v18; // rbx
  CContactManager *v19; // rcx
  struct CTouchVisual *v20; // rbx
  __int64 v21; // rdi
  _DWORD v23[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+38h] [rbp-40h]
  int v25; // [rsp+48h] [rbp-30h]
  __int64 v26; // [rsp+4Ch] [rbp-2Ch]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+98h] [rbp+20h] BYREF

  v27 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v11 = 0;
  v12 = 0LL;
  if ( !*(_DWORD *)(a1 + 112) )
    goto LABEL_5;
  v13 = (__int64 *)(a1 + 88);
  v14 = *(_DWORD **)(a1 + 88);
  while ( *v14 != a2 )
  {
    v12 = (unsigned int)(v12 + 1);
    v14 += 10;
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 112) )
      goto LABEL_5;
  }
  if ( (int)v12 >= 0 )
  {
    v16 = 5 * v12;
    v17 = *v13;
    if ( a5 == 3 )
    {
      v18 = *(struct CTouchVisual **)(v17 + 40 * v12 + 8);
      CContactManager::StopAndRemoveFromRootNode(v10, v18);
      if ( v18 )
        CBaseObject::Release(v18);
      v20 = *(struct CTouchVisual **)(*v13 + 40 * v12 + 16);
      CContactManager::StopAndRemoveFromRootNode(v19, v20);
      if ( v20 )
        CBaseObject::Release(v20);
      DynArray<CPenContact,0>::RemoveAt(v13, (unsigned int)v12);
    }
    else
    {
      v21 = *(_QWORD *)(v17 + 40 * v12 + 8);
      if ( v21 )
      {
        *(_QWORD *)(v21 + 308) = a3;
        *(_DWORD *)(v21 + 316) = a6;
        CPenBarrelKeyVisual::PlaceVisuals((CPenBarrelKeyVisual *)v21);
        CPenBarrelKeyVisual::UpdateBarrelAlpha((CPenBarrelKeyVisual *)v21);
        v17 = *v13;
      }
      *(_QWORD *)(v17 + 8 * v16 + 28) = a3;
    }
  }
  else
  {
LABEL_5:
    if ( !*(_QWORD *)(a1 + 40) )
      CContactManager::LoadPenResources((CContactManager *)a1);
    v23[0] = a2;
    v23[1] = a6;
    v24 = 0LL;
    v25 = -1;
    v26 = a3;
    started = CContactManager::StartPenBarrelVisual(v10, (struct CPenContact *)v23, a7);
    v11 = started;
    if ( started >= 0 )
      DynArray<CPenContact,0>::AddMultipleAndSet(a1 + 88, (__int64)v23);
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x59Bu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v27);
  return v11;
}
