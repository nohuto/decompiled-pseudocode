/*
 * XREFs of ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002C750
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18002F690 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800413E0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CAnimationEngine@@AEAA@XZ @ 0x1800AAC9C (--1CAnimationEngine@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::MoveTransitionAndTouchVisualToFront(CWindowList *this)
{
  int v2; // esi
  CDesktopManager *v3; // rbx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rbx
  __int64 v7; // rdi
  CVisual *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  CVisual *v11; // rdi
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v14; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+40h] [rbp-48h]
  __int128 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-28h]
  char v18; // [rsp+68h] [rbp-20h]

  v2 = 0;
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v5 = 1;
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 116), 1u);
    v3 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v6 = *((_QWORD *)v3 + 22);
  if ( v6 )
  {
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( *(_DWORD *)(v6 + 64) && *(_BYTE *)(v6 + 120) )
      v5 = 0;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v5 )
    {
      v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      if ( v7 )
      {
        v8 = *(CVisual **)(v7 + 8);
        if ( v8 )
        {
          v2 = CVisual::MoveToFront(v8, 0);
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 8) + 112LL))(*(_QWORD *)(v7 + 8));
          if ( v2 >= 0 )
          {
            v9 = *(_QWORD *)(v7 + 96);
            Buffer[1] = 0LL;
            v14 = 0LL;
            v17 = -1LL;
            v18 = 0;
            v15 = 0LL;
            v16 = 0LL;
            Buffer[0] = v9;
            v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
            v11 = v10 ? (CVisual *)v10[5] : 0LL;
            if ( v11 )
            {
              CVisual::MoveToFront(v11, 0);
              (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v11 + 112LL))(v11);
            }
          }
        }
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 116), 0xFFFFFFFF) == 1 )
    {
      CAnimationEngine::~CAnimationEngine((CAnimationEngine *)v6);
      (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v6);
    }
  }
  return (unsigned int)v2;
}
