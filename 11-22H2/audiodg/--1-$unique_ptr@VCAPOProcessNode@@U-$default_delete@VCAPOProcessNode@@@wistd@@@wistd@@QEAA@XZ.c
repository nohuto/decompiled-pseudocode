/*
 * XREFs of ??1?$unique_ptr@VCAPOProcessNode@@U?$default_delete@VCAPOProcessNode@@@wistd@@@wistd@@QEAA@XZ @ 0x14005D14C
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140012F94 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$3 @ 0x1400357D5 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<CAPOProcessNode,wistd::default_delete<CAPOProcessNode>>::~unique_ptr<CAPOProcessNode,wistd::default_delete<CAPOProcessNode>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
