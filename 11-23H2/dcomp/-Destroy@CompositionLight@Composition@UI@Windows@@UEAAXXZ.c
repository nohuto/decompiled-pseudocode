/*
 * XREFs of ?Destroy@CompositionLight@Composition@UI@Windows@@UEAAXXZ @ 0x180010790
 * Callers:
 *     ?Destroy@DistantLight@Composition@UI@Windows@@UEAAXXZ @ 0x180176260 (-Destroy@DistantLight@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@PointLight@Composition@UI@Windows@@UEAAXXZ @ 0x18017A130 (-Destroy@PointLight@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@SpotLight@Composition@UI@Windows@@UEAAXXZ @ 0x18017C130 (-Destroy@SpotLight@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionLight::Destroy(Windows::UI::Composition::CompositionLight *this)
{
  char *v1; // rbx

  v1 = (char *)this + 136;
  (*(void (__fastcall **)(char *, char *))(*((_QWORD *)this + 17) + 56LL))((char *)this + 136, (char *)this + 216);
  (*(void (__fastcall **)(char *, char *))(*(_QWORD *)v1 + 56LL))(v1, (char *)this + 176);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
