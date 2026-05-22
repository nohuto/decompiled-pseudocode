/*
 * XREFs of ?FindElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChangeCallbackMapEntry@234@@@QEAAPEAVPropertyChangeCallbackMapEntry@Composition@UI@Windows@@UObjectPropertyReference@345@@Z @ 0x18002D618
 * Callers:
 *     ?ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV5234@PEAPEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x18002D528 (-ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV.c)
 *     ?RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectPropertyReference@234@PEAI@Z @ 0x180071C28 (-RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectProper.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

PVOID __fastcall CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 *a2)
{
  PVOID v2; // rax
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx
  PVOID v4; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v5; // rcx
  __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v8[2]; // [rsp+28h] [rbp-20h]

  Buffer = *a2;
  *(_OWORD *)v8 = 0LL;
  v2 = RtlLookupElementGenericTable(a1, &Buffer);
  v3 = v8[1];
  v4 = v2;
  if ( v8[1] )
  {
    v8[1] = 0LL;
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v5 = v8[0];
  if ( v8[0] )
  {
    v8[0] = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v5);
  }
  return v4;
}
