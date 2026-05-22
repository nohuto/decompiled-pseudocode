/*
 * XREFs of ??1AnimationBindingManager@Composition@UI@Windows@@QEAA@XZ @ 0x18001C678
 * Callers:
 *     ?PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x18001C73C (-PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChangeCallbackMapEntry@234@@@QEAAXPEAVPropertyChangeCallbackMapEntry@Composition@UI@Windows@@@Z @ 0x180071CF0 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChan.c)
 *     ?RemoveElement@?$CGenericTableMap@IVPropertyMapEntry@Composition@UI@Windows@@@@QEAAXPEAVPropertyMapEntry@Composition@UI@Windows@@@Z @ 0x180169408 (-RemoveElement@-$CGenericTableMap@IVPropertyMapEntry@Composition@UI@Windows@@@@QEAAXPEAVProperty.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VTargetMapEntry@234@@@QEAAXPEAVTargetMapEntry@Composition@UI@Windows@@@Z @ 0x18016943C (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VTargetMapEnt.c)
 */

void __fastcall Windows::UI::Composition::AnimationBindingManager::~AnimationBindingManager(PRTL_GENERIC_TABLE Table)
{
  struct _RTL_GENERIC_TABLE *v2; // rdi
  PVOID v3; // rax
  PVOID v4; // rax
  PVOID v5; // rax
  PVOID v6; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+10h] BYREF

  v2 = Table + 3;
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
    if ( !v3 )
      break;
    if ( !RtlDeleteElementGenericTable(v2, v3) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying(Table + 2, &RestartKey);
    if ( !v4 )
      break;
    CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::RemoveElement(
      Table + 2,
      v4);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(Table + 1, &RestartKey);
    if ( !v5 )
      break;
    CGenericTableMap<unsigned int,Windows::UI::Composition::PropertyMapEntry>::RemoveElement(&Table[1], v5);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v6 = RtlEnumerateGenericTableWithoutSplaying(Table, &RestartKey);
    if ( !v6 )
      break;
    CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::TargetMapEntry>::RemoveElement(
      Table,
      v6);
  }
}
