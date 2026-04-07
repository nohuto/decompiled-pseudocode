/*
 * XREFs of ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x18001ED0C
 * Callers:
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18001AF24 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18001BEAC (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EC08 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180007ADC (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::NotifyMouseLeave(CTopLevelWindow *this)
{
  CButton *v2; // rcx
  CBaseObject *v3; // rdi
  __int64 v4; // rcx
  CBaseObject *v5; // rcx

  v2 = (CButton *)*((_QWORD *)this + 97);
  if ( v2 )
  {
    CButton::SetMouseCapture(v2, 0);
    v5 = (CBaseObject *)*((_QWORD *)this + 97);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 97) = 0LL;
    }
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 96);
  if ( v3 )
  {
    *((_QWORD *)this + 96) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v3 + 120LL))(v3);
    v4 = *((_QWORD *)this + 96);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4);
    CBaseObject::Release(v3);
  }
}
