/*
 * XREFs of ?ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV5234@PEAPEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x18002D528
 * Callers:
 *     ??$InvokePropertyChange_Callback@UVector2@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector2@Numerics@Foundation@3@@Z @ 0x18002D428 (--$InvokePropertyChange_Callback@UVector2@Numerics@Foundation@Windows@@@ProxyObject@Composition@.c)
 *     ?ReferencePropertyChanged_Callback@ProxyObject@Composition@UI@Windows@@QEAAXI@Z @ 0x180094E30 (-ReferencePropertyChanged_Callback@ProxyObject@Composition@UI@Windows@@QEAAXI@Z.c)
 *     ??$InvokePropertyChange_Callback@M@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBM@Z @ 0x1801463C4 (--$InvokePropertyChange_Callback@M@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRE.c)
 *     ??$InvokePropertyChange_Callback@UMatrix3x2@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUMatrix3x2@Numerics@Foundation@3@@Z @ 0x1801464C4 (--$InvokePropertyChange_Callback@UMatrix3x2@Numerics@Foundation@Windows@@@ProxyObject@Compositio.c)
 *     ??$InvokePropertyChange_Callback@UMatrix4x4@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUMatrix4x4@Numerics@Foundation@3@@Z @ 0x1801465C4 (--$InvokePropertyChange_Callback@UMatrix4x4@Numerics@Foundation@Windows@@@ProxyObject@Compositio.c)
 *     ??$InvokePropertyChange_Callback@UQuaternion@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUQuaternion@Numerics@Foundation@3@@Z @ 0x1801466C4 (--$InvokePropertyChange_Callback@UQuaternion@Numerics@Foundation@Windows@@@ProxyObject@Compositi.c)
 *     ??$InvokePropertyChange_Callback@UVector4@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector4@Numerics@Foundation@3@@Z @ 0x1801467C4 (--$InvokePropertyChange_Callback@UVector4@Numerics@Foundation@Windows@@@ProxyObject@Composition@.c)
 *     ??$InvokePropertyChange_Callback@U_D3DCOLORVALUE@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBU_D3DCOLORVALUE@@@Z @ 0x1801468C4 (--$InvokePropertyChange_Callback@U_D3DCOLORVALUE@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DC.c)
 *     ??$InvokePropertyChange_Callback@_N@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEB_N@Z @ 0x1801469C4 (--$InvokePropertyChange_Callback@_N@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPR.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChangeCallbackMapEntry@234@@@QEAAPEAVPropertyChangeCallbackMapEntry@Composition@UI@Windows@@UObjectPropertyReference@345@@Z @ 0x18002D618 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChange.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Windows::UI::Composition::AnimationBindingManager::ShouldNotify(
        struct _RTL_GENERIC_TABLE *this,
        struct Windows::UI::Composition::ProxyObject *a2,
        unsigned int a3,
        struct Windows::UI::Composition::ProxyObject **a4,
        struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner **Buffer)
{
  struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner **v5; // r15
  char v8; // bl
  __int64 Element; // rax
  __int64 v12; // rdi
  _DWORD *v13; // rax
  int v14; // eax
  int (__fastcall ***v15)(_QWORD, GUID *, struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner **); // rcx

  v5 = Buffer;
  HIDWORD(Buffer) = a3;
  v8 = 0;
  *v5 = 0LL;
  LODWORD(Buffer) = *((_DWORD *)a2 + 32);
  Element = CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::FindElement(
              &this[2],
              &Buffer);
  v12 = Element;
  if ( Element )
  {
    if ( *(_QWORD *)(Element + 16) )
    {
      LODWORD(Buffer) = *((_DWORD *)a2 + 32);
      v13 = RtlLookupElementGenericTable(this + 3, &Buffer);
      if ( v13 )
      {
        v14 = v13[1];
        if ( _bittest(&v14, a3) )
        {
          v15 = *(int (__fastcall ****)(_QWORD, GUID *, struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner **))(v12 + 16);
          *a4 = *(struct Windows::UI::Composition::ProxyObject **)(v12 + 8);
          return (**v15)(v15, &GUID_ea6ef06f_31fe_4d0e_96e5_6db1a9855444, v5) >= 0;
        }
      }
    }
  }
  return v8;
}
