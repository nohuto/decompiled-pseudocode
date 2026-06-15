/*
 * XREFs of ??1?$unique_ptr@VCAPOInstance@@U?$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14005D0D8
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140012F94 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$5 @ 0x1400357A7 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$5.c)
 * Callees:
 *     ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x1400178C4 (--_GCAPOInstance@@QEAAPEAXI@Z.c)
 */

CAPOInstance *__fastcall wistd::unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>::~unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>(
        CAPOInstance **a1)
{
  CAPOInstance *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CAPOInstance::`scalar deleting destructor'(result);
  return result;
}
