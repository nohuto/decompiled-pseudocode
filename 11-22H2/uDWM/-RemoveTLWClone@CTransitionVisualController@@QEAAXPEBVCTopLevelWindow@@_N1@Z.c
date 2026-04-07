/*
 * XREFs of ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x180016010
 * Callers:
 *     ?OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z @ 0x1800376CC (-OnWindowCloakChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@_N1PEA_N@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E2D40 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x1800166B4 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CTransitionVisualController::RemoveTLWClone(
        CTransitionVisualController *this,
        const struct CTopLevelWindow *a2,
        char a3,
        char a4)
{
  int v5; // edi
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  CBaseObject *v11; // rcx
  struct CVisual *v12; // rdx
  __int64 v13; // rax
  CBaseObject *v14; // rcx

  if ( a2 )
  {
    v5 = *((_DWORD *)this + 12) - 1;
    if ( v5 >= 0 )
    {
      v8 = (__int64 *)((char *)this + 24);
      v9 = 24LL * v5;
      do
      {
        v10 = *v8;
        v11 = *(CBaseObject **)(v9 + *v8);
        if ( v11 == a2 )
        {
          v12 = *(struct CVisual **)(v9 + v10 + 8);
          v13 = *((_QWORD *)v12 + 3);
          if ( v13 && (*(_BYTE *)(v9 + v10 + 16) || a3) )
          {
            VisualCollection::Remove((VisualCollection *)(v13 + 32), v12);
            v11 = *(CBaseObject **)(v9 + v10);
          }
          if ( a4 )
          {
            if ( v11 )
              CBaseObject::Release(v11);
            v14 = *(CBaseObject **)(v9 + v10 + 8);
            if ( v14 )
              CBaseObject::Release(v14);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v8, (unsigned int)v5);
          }
        }
        v9 -= 24LL;
        --v5;
      }
      while ( v5 >= 0 );
    }
  }
}
