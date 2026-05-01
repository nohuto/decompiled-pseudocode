/*
 * XREFs of ?HandleAutoRotationLock@TabletModePositioner@@AEAAXXZ @ 0x1805044D0
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180500804 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall TabletModePositioner::HandleAutoRotationLock(TabletModePositioner *this)
{
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 64LL))(*((_QWORD *)this + 31)) )
  {
    if ( !*((_BYTE *)this + 242) )
      *((_BYTE *)this + 242) = (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 40LL))(*((_QWORD *)this + 48)) >= 0;
  }
  else if ( *((_BYTE *)this + 242) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 48LL))(*((_QWORD *)this + 48));
    *((_BYTE *)this + 242) = 0;
  }
}
