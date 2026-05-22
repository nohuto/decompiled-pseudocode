/*
 * XREFs of ?Destroy@ComponentTransform3D@Composition@UI@Windows@@UEAAXXZ @ 0x18002BE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::ComponentTransform3D::Destroy(
        Windows::UI::Composition::ComponentTransform3D *this)
{
  *((_QWORD *)this + 35) = 0LL;
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
