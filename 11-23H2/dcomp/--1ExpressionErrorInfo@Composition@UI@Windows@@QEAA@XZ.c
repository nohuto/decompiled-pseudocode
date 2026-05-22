/*
 * XREFs of ??1ExpressionErrorInfo@Composition@UI@Windows@@QEAA@XZ @ 0x1801676F8
 * Callers:
 *     ?SplitTargetPropertyNameAndMask@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAU6@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@@Z @ 0x180169470 (-SplitTargetPropertyNameAndMask@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyOb.c)
 *     ?Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180194E48 (-Insert@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@0PEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::ExpressionErrorInfo::~ExpressionErrorInfo(
        Windows::UI::Composition::ExpressionErrorInfo *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext(this);
}
