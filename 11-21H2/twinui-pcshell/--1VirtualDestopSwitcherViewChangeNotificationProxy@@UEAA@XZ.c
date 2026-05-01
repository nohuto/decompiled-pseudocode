/*
 * XREFs of ??1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ @ 0x1800AAD60
 * Callers:
 *     ??_G?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800ABB00 (--_G-$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@UEAAPEAXI@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800AA928 (--1-$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDestopSwitcherViewChangeNotificationProxy::~VirtualDestopSwitcherViewChangeNotificationProxy(
        VirtualDestopSwitcherViewChangeNotificationProxy *this)
{
  std::_Func_class<void,>::_Tidy((char *)this + 160);
  SmartCookie::Unregister((VirtualDestopSwitcherViewChangeNotificationProxy *)((char *)this + 32));
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)this + 32);
  if ( *((_QWORD *)this + 3) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 3);
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)this + 8);
}
