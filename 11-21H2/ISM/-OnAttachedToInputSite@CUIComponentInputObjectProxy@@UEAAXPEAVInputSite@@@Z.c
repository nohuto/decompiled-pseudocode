/*
 * XREFs of ?OnAttachedToInputSite@CUIComponentInputObjectProxy@@UEAAXPEAVInputSite@@@Z @ 0x180024B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CUIComponentInputObjectProxy::OnAttachedToInputSite(
        CUIComponentInputObjectProxy *this,
        struct InputSite *a2)
{
  *((_QWORD *)this + 1) = a2;
}
