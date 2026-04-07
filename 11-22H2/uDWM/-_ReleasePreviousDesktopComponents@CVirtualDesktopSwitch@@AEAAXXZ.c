/*
 * XREFs of ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800DE434
 * Callers:
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800DA0F0 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DC000 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents(CVirtualDesktopSwitch *this)
{
  __int64 v1; // rsi
  char *i; // rbx
  CBaseObject *v4; // rcx

  v1 = 0LL;
  for ( i = (char *)this + 128; (unsigned int)v1 < *((_DWORD *)this + 38); v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *(CBaseObject **)(*(_QWORD *)i + 8 * v1);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *(_QWORD *)(*(_QWORD *)i + 8 * v1) = 0LL;
    }
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)i, 8u);
}
