/*
 * XREFs of ?Destroy@CompositionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18014F220
 * Callers:
 *     ?Destroy@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180161BD0 (-Destroy@ConditionalExpressionAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@InjectionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180162750 (-Destroy@InjectionAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ @ 0x18003D0F4 (-ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimation::Destroy(
        Windows::UI::Composition::CompositionAnimation *this)
{
  HSTRING v2; // rcx

  v2 = (HSTRING)*((_QWORD *)this + 23);
  if ( v2 )
  {
    WindowsDeleteString(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  Windows::UI::Composition::CompositionAnimation::ClearAllParameters((struct Microsoft::WRL2::ContextSession **)this);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
