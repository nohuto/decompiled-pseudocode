/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x18009B274
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer_::_1_::dtor$9 @ 0x1800D9B2C (_Windows--Services--TargetedContent--Internal--EnumerateAllTriggersInContainer_--_1_--dtor$9.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::GetCompositeValue_::_1_::dtor$2 @ 0x1800D9C4C (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800D9C4C.c)
 *     _CreativeFramework::Triggers::PropertySetHelperBase_&RuntimeClass_Windows_Foundation_Collections_PropertySet_::SetCompositeValue_::_1_::dtor$2 @ 0x1800D9E7D (_CreativeFramework--Triggers--PropertySetHelperBase_-RuntimeClass_Windows_Foundatio_ea_1800D9E7D.c)
 * Callees:
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x18009AF8C (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18009B2EC (--1RoVariant@@QEAA@XZ.c)
 */

void __fastcall RoVariant::OutRef::~OutRef(struct IInspectable **this)
{
  struct IInspectable *v1; // rsi
  struct IInspectableVtbl *v2; // rbx
  int v3; // edi
  struct IInspectableVtbl *lpVtbl; // rax
  struct IInspectableVtbl *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v1 = *this;
  RoVariant::RoVariant((RoVariant *)&v5, this[1]);
  v2 = v5;
  v5 = 0LL;
  v3 = v6;
  v6 = 0;
  RoVariant::~RoVariant((RoVariant *)&v5);
  lpVtbl = v1->lpVtbl;
  v1->lpVtbl = v2;
  v5 = lpVtbl;
  LODWORD(lpVtbl) = v1[1].lpVtbl;
  LODWORD(v1[1].lpVtbl) = v3;
  v6 = (int)lpVtbl;
  RoVariant::~RoVariant((RoVariant *)&v5);
}
