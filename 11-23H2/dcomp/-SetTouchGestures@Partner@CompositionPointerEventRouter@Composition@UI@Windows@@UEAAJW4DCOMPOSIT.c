/*
 * XREFs of ?SetTouchGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_TOUCH@@@Z @ 0x180153E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::Partner::SetTouchGestures(
        __int64 a1,
        __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 104LL))(
           a1,
           a2,
           1LL,
           0xFFFFFFFFLL);
}
