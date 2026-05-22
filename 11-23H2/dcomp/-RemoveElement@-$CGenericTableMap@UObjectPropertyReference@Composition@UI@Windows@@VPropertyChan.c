/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChangeCallbackMapEntry@234@@@QEAAXPEAVPropertyChangeCallbackMapEntry@Composition@UI@Windows@@@Z @ 0x180071CF0
 * Callers:
 *     ??1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x18001C678 (--1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectPropertyReference@234@PEAI@Z @ 0x180071C28 (-RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectProper.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0 (-InternalUnlock@-$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        _QWORD *Buffer)
{
  __int64 v4; // rcx

  v4 = Buffer[2];
  if ( v4 )
  {
    Buffer[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(Buffer + 1);
  if ( !RtlDeleteElementGenericTable(Table, Buffer) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
