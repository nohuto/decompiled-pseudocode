/*
 * XREFs of ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x1800E621C
 * Callers:
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x18010AB5C (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 * Callees:
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x1800072BC (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180007358 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800E5810 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180105C3C (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18010E138 (-IsVailContainer@@YA_NXZ.c)
 */

void __fastcall CTopLevelWindow::HitTestQuery(
        struct CVisual **this,
        const struct tagPOINT *a2,
        char a3,
        int a4,
        unsigned int *a5)
{
  struct CVisual *v8; // rdi
  bool v9; // al
  unsigned int *v10; // rsi
  struct CVisual *v11; // rdx
  __int64 v12; // rdx
  struct CVisual *v13; // rcx
  struct tagPOINT v14; // [rsp+20h] [rbp-38h] BYREF
  struct CVisual *v15; // [rsp+60h] [rbp+8h] BYREF
  struct tagPOINT v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = *a2;
  v15 = 0LL;
  v8 = 0LL;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 )
    IsVailContainer();
  v9 = CVisual::TransformFromParent((CVisual *)this, &v16, &v14);
  v10 = a5;
  if ( v9 )
  {
    CTopLevelWindow::DoHitTest((LONG *)this, &v14, (LONG **)&v15, a5);
    v8 = v15;
  }
  else
  {
    *a5 = 0;
  }
  CTopLevelWindow::UpdateCapturedButton((CTopLevelWindow *)this, a4);
  if ( this[97] )
  {
    v11 = 0LL;
    if ( a4 == *v10 )
      v11 = this[97];
  }
  else
  {
    if ( v8 == (struct CVisual *)this )
      v8 = 0LL;
    v11 = v8;
  }
  CTopLevelWindow::ChangeMouseOver((CTopLevelWindow *)this, v11);
  v13 = this[96];
  if ( v13 )
  {
    LOBYTE(v12) = a3;
    (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v13 + 136LL))(v13, v12);
  }
}
