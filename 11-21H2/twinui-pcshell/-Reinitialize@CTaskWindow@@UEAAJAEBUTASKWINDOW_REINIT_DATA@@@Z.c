/*
 * XREFs of ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x18003D580
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x18003D618 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     ?_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ @ 0x180049328 (-_ReconcileViewWithVisibility@CTaskWindow@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x18006A280 (--4-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicatio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskWindow::Reinitialize(CTaskWindow *this, const struct TASKWINDOW_REINIT_DATA *a2)
{
  int v4; // esi

  Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::operator=((char *)this + 128, *((_QWORD *)a2 + 2));
  v4 = 0;
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 6);
  if ( (*(_BYTE *)a2 & 1) == 0
    || (v4 = (*(__int64 (__fastcall **)(CTaskWindow *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
               this,
               *((_QWORD *)a2 + 1),
               *((_QWORD *)a2 + 4)),
        v4 >= 0) )
  {
    *((_BYTE *)this + 56) = 1;
    if ( (*(_BYTE *)a2 & 2) != 0 )
    {
      CTaskWindow::_QueryCloakedState((CTaskWindow *)((char *)this - 8));
    }
    else if ( (*(_BYTE *)a2 & 4) != 0 )
    {
      *((_DWORD *)this + 30) = 0;
      CTaskWindow::_ReconcileViewWithVisibility((CTaskWindow *)((char *)this - 8));
    }
  }
  return (unsigned int)v4;
}
