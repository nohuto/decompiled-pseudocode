/*
 * XREFs of ?RemovePropertyChangeCallback@AnimationBindingManager@Composition@UI@Windows@@AEAAXUObjectPropertyReference@234@PEAI@Z @ 0x180071C28
 * Callers:
 *     ?Shutdown@AnimationBindingManager@Composition@UI@Windows@@QEAAXXZ @ 0x180066D98 (-Shutdown@AnimationBindingManager@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?SetPropertyChangedListener@ComponentTransform3D@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@234@PEAVProxyObject@234@@Z @ 0x180070280 (-SetPropertyChangedListener@ComponentTransform3D@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EXP.c)
 *     ?UpdatePropertyChangeCallbackRegistration@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@0PEAUICompositionPropertyChangedListenerPartner@234@IPEAI@Z @ 0x180070598 (-UpdatePropertyChangeCallbackRegistration@AnimationBindingManager@Composition@UI@Windows@@QEAAJP.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChangeCallbackMapEntry@234@@@QEAAPEAVPropertyChangeCallbackMapEntry@Composition@UI@Windows@@UObjectPropertyReference@345@@Z @ 0x18002D618 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChange.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChangeCallbackMapEntry@234@@@QEAAXPEAVPropertyChangeCallbackMapEntry@Composition@UI@Windows@@@Z @ 0x180071CF0 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChan.c)
 */

void __fastcall Windows::UI::Composition::AnimationBindingManager::RemovePropertyChangeCallback(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2,
        _DWORD *a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rdi
  PVOID Element; // rax
  _DWORD *v8; // rax
  int v9; // edx
  bool v10; // zf
  __int64 Buffer; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 2;
  Buffer = *(_QWORD *)a2;
  Element = CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::FindElement(
              a1 + 2,
              &Buffer);
  if ( Element )
    CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::RemoveElement(
      v3,
      Element);
  LODWORD(Buffer) = *(_DWORD *)a2;
  v8 = RtlLookupElementGenericTable(a1 + 3, &Buffer);
  if ( v8 )
  {
    v9 = ~(1 << *(_DWORD *)(a2 + 4));
    v10 = (v9 & v8[1]) == 0;
    v8[1] &= v9;
    *a3 = v8[1];
    if ( v10 && !RtlDeleteElementGenericTable(a1 + 3, v8) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
  else
  {
    *a3 = 0;
  }
}
