/*
 * XREFs of ??_E?$_Ref_count_obj2@VVirtualDesktopSwitcherHookData@@@std@@UEAAPEAXI@Z @ 0x180608890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<VirtualDesktopSwitcherHookData>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<VirtualDesktopSwitcherHookData>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
