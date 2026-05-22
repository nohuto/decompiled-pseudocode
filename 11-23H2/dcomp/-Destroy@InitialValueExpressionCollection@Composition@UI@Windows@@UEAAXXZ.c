/*
 * XREFs of ?Destroy@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAXXZ @ 0x180194A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAXXZ @ 0x1801949F4 (-Clear@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::InitialValueExpressionCollection::Destroy(
        Windows::UI::Composition::InitialValueExpressionCollection *this)
{
  Windows::UI::Composition::InitialValueExpressionCollection::Clear(this);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
