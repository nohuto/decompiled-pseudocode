/*
 * XREFs of ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800EE4F0
 * Callers:
 *     ?_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ @ 0x1800EE5B8 (-_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800EF294 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z @ 0x1800EEF30 (-_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800EEFA0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 */

void __fastcall CTransitionVisualController::_CleanupHighZOrderClone(
        CTransitionVisualController *this,
        struct CTopLevelWindow **a2)
{
  struct CTopLevelWindow *v2; // r10
  __int64 v3; // r9
  const struct CWindowData *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rdi
  HWND v8; // r8
  int v9; // r9d
  unsigned int v10; // r11d
  CBaseObject *v11; // rax
  __int64 v12; // rcx

  v2 = *a2;
  v3 = 0LL;
  v5 = (const struct CWindowData *)*((_QWORD *)*a2 + 94);
  if ( *((_DWORD *)this + 34) )
  {
    v6 = *((_QWORD *)this + 14);
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 8 * v3);
      v8 = *(HWND *)(v7 + 16);
      if ( v8 == *((HWND *)v5 + 5)
        || CTransitionVisualController::_IsOwnedByWindow(this, v5, v8) && (*(_DWORD *)(v7 + 24) & 0x10000000) != 0 )
      {
        break;
      }
      v3 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v3 >= v10 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    CTransitionVisualController::_MoveWindowOffscreen(v2, 0);
  }
  v11 = a2[1];
  v12 = *((_QWORD *)v11 + 3);
  if ( v12 )
  {
    VisualCollection::Remove((VisualCollection *)(v12 + 32), a2[1]);
    v11 = a2[1];
  }
  if ( v11 )
  {
    CBaseObject::Release(v11);
    a2[1] = 0LL;
  }
  if ( *a2 )
  {
    CBaseObject::Release(*a2);
    *a2 = 0LL;
  }
}
