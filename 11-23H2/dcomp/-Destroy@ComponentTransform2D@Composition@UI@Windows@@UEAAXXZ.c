/*
 * XREFs of ?Destroy@ComponentTransform2D@Composition@UI@Windows@@UEAAXXZ @ 0x18008DA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::ComponentTransform2D::Destroy(
        Windows::UI::Composition::ComponentTransform2D *this)
{
  *((_QWORD *)this + 25) = 0LL;
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
