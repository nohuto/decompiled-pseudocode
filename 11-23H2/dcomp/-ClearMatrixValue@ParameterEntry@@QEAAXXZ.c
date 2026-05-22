/*
 * XREFs of ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC
 * Callers:
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?Destroy@ExpressionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180029AA0 (-Destroy@ExpressionAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?SetScalar@ParameterEntry@@QEAAXM@Z @ 0x18003DD18 (-SetScalar@ParameterEntry@@QEAAXM@Z.c)
 *     ?SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIAnimationObject@234@@Z @ 0x18003FA48 (-SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__.c)
 *     ?SetMatrix4x4@ParameterEntry@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z @ 0x18003FC24 (-SetMatrix4x4@ParameterEntry@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z.c)
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 *     ??1ParameterEntry@@QEAA@XZ @ 0x18003FEF4 (--1ParameterEntry@@QEAA@XZ.c)
 *     ?GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004ECA0 (-GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@.c)
 *     ?SetBooleanParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@_N@Z @ 0x18014F4F0 (-SetBooleanParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@_N@Z.c)
 *     ?SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVALUE@@@Z @ 0x18014F66C (-SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVA.c)
 *     ?SetMatrix3x2@ParameterEntry@@QEAAXAEBUMatrix3x2@Numerics@Foundation@Windows@@@Z @ 0x18014F83C (-SetMatrix3x2@ParameterEntry@@QEAAXAEBUMatrix3x2@Numerics@Foundation@Windows@@@Z.c)
 *     ?SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18014FA88 (-SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQua.c)
 *     ?SetReference@ParameterEntry@@QEAAXPEAVCompositionObject@Composition@UI@Windows@@@Z @ 0x18014FB3C (-SetReference@ParameterEntry@@QEAAXPEAVCompositionObject@Composition@UI@Windows@@@Z.c)
 *     ?SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector2@Numerics@Foundation@4@@Z @ 0x18014FD04 (-SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector4@Numerics@Foundation@4@@Z @ 0x18014FE58 (-SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ParameterEntry::ClearMatrixValue(ParameterEntry *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdx

  if ( *((_DWORD *)this + 2) == 104 )
  {
    v2 = (void *)*((_QWORD *)this + 5);
    if ( v2 )
    {
      v3 = 24LL;
      goto LABEL_6;
    }
  }
  else if ( *((_DWORD *)this + 2) == 265 )
  {
    v2 = (void *)*((_QWORD *)this + 5);
    if ( v2 )
    {
      v3 = 64LL;
LABEL_6:
      operator delete(v2, v3);
      *((_QWORD *)this + 5) = 0LL;
    }
  }
}
