/*
 * XREFs of ??1?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAA@XZ @ 0x14000FD98
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000F760 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ??1CAPONode@@UEAA@XZ @ 0x1400128A4 (--1CAPONode@@UEAA@XZ.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$2 @ 0x140034F74 (_CAudioProcessor--ActivateAPO_--_1_--dtor$2.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$3 @ 0x140034F86 (_CAudioProcessor--ActivateAPO_--_1_--dtor$3.c)
 *     _CAPONode::CAPONode_::_1_::dtor$5 @ 0x14003521F (_CAPONode--CAPONode_--_1_--dtor$5.c)
 *     _CAPONode::CAPONode_::_1_::dtor$6 @ 0x140035235 (_CAPONode--CAPONode_--_1_--dtor$6.c)
 *     _CAPONode::CAPONode_::_1_::dtor$7 @ 0x14003524B (_CAPONode--CAPONode_--_1_--dtor$7.c)
 *     _CAPONode::CAPONode_::_1_::dtor$8 @ 0x140035264 (_CAPONode--CAPONode_--_1_--dtor$8.c)
 *     ??1CPropertyPointerArray@@QEAA@XZ @ 0x140070B38 (--1CPropertyPointerArray@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::~CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
