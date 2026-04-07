/*
 * XREFs of ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18006C12C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180041554 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18006BFB6 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18006D374 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18006E442 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800AF938 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800B70B8 (-UpdateShowContact@CDirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnShowContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edx
  __int64 v8; // rdx
  CContactManager *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct CTouchVisual *v15; // rbp
  CContactManager *v16; // rcx
  struct CTouchVisual *v17; // rbp
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  CPenBarrelKeyVisual *v21; // rcx
  char v22; // al
  __int64 v23; // rcx
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp+8h] BYREF

  v25 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -2147024809;
  v5 = 0xFFFFFFFFLL;
  v6 = 0xFFFFFFFFLL;
  v7 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(104LL * v7 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 1) )
    {
      if ( ++v7 >= *((_DWORD *)this + 20) )
        goto LABEL_6;
    }
    v5 = v7;
  }
LABEL_6:
  v8 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40 * v8) != *((_DWORD *)a2 + 1) )
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)this + 28) )
        goto LABEL_11;
    }
    v6 = (unsigned int)v8;
  }
LABEL_11:
  if ( (int)v5 < 0 )
  {
    if ( (int)v6 >= 0 )
    {
      v4 = 0;
      *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v6 + 24) = *((_DWORD *)a2 + 2);
      if ( *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v6 + 8) )
      {
        _mm_lfence();
        v21 = *(CPenBarrelKeyVisual **)(*((_QWORD *)this + 11) + 40LL * (unsigned int)v6 + 8);
        v22 = (*((_DWORD *)a2 + 2) & 0x10) != 0;
        if ( *((_BYTE *)v21 + 348) != v22 )
        {
          *((_BYTE *)v21 + 348) = v22;
          CPenBarrelKeyVisual::UpdateBarrelAlpha(v21);
        }
      }
    }
  }
  else
  {
    v4 = 0;
    v9 = (CContactManager *)*((unsigned int *)a2 + 2);
    v10 = 104LL * (unsigned int)v5;
    *(_DWORD *)(*((_QWORD *)this + 7) + v10 + 40) = (_DWORD)v9;
    v11 = *((_QWORD *)this + 7);
    if ( *((_BYTE *)this + 324) )
    {
      v12 = *(_QWORD *)(v10 + v11 + 48);
      if ( v12 )
        CDirectTouchVisual::UpdateShowContact(v12, 4294967291LL, v5, v6);
      v13 = *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 56);
      if ( v13 )
        *(_DWORD *)(v13 + 356) = -5;
    }
    else
    {
      v14 = *((unsigned int *)a2 + 2);
      if ( (_DWORD)v14 )
      {
        v18 = *(_QWORD *)(v11 + v10 + 48);
        if ( v18 )
        {
          CDirectTouchVisual::UpdateShowContact(v18, v14, v5, v6);
          v14 = *((unsigned int *)a2 + 2);
        }
        v19 = *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 80);
        if ( v19 )
          CTouchDragVisual::UpdateShowContact(v19, v14, v5, v6);
      }
      else
      {
        v15 = *(struct CTouchVisual **)(v11 + v10 + 48);
        CContactManager::StopAndRemoveFromRootNode(v9, v15);
        if ( v15 )
          CBaseObject::Release(v15);
        v17 = *(struct CTouchVisual **)(v10 + *((_QWORD *)this + 7) + 80);
        CContactManager::StopAndRemoveFromRootNode(v16, v17);
        if ( v17 )
          CBaseObject::Release(v17);
        *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 48) = 0LL;
        *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 80) = 0LL;
      }
      v20 = *(_QWORD *)(v10 + *((_QWORD *)this + 7) + 56);
      if ( v20 )
        *(_DWORD *)(v20 + 356) = *((_DWORD *)a2 + 2);
    }
  }
  if ( !CContactManager::CheckShowContact((__int64)this, *((_DWORD *)a2 + 2), 2) )
    CContactManager::CancelStationaryAnimation(v23, *((unsigned int *)a2 + 1));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
  return v4;
}
