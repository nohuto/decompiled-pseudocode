/*
 * XREFs of ??1?$unique_ptr@VCAPOInstance@@U?$default_delete@VCAPOInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14005A408
 * Callers:
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$5 @ 0x1400386B0 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$5.c)
 * Callees:
 *     ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x14005A56C (--_GCAPOInstance@@QEAAPEAXI@Z.c)
 */

CAPOInstance *__fastcall wistd::unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>::~unique_ptr<CAPOInstance,wistd::default_delete<CAPOInstance>>(
        CAPOInstance **a1,
        unsigned int a2)
{
  CAPOInstance *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CAPOInstance *)CAPOInstance::`scalar deleting destructor'(result, a2);
  return result;
}
