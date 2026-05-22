/*
 * XREFs of ?Destroy@CompositionColorBrush@Composition@UI@Windows@@UEAAXXZ @ 0x180044AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ @ 0x180028D00 (-Destroy@ProxyObject@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@U_D3DCOLORVALUE@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x180044B50 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@U_D3DCOLORVALUE@@@Composition@UI@Windows@@VPro.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

void __fastcall Windows::UI::Composition::CompositionColorBrush::Destroy(
        Windows::UI::Composition::CompositionColorBrush *this)
{
  void *v2; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v3[3]; // [rsp+28h] [rbp-40h] BYREF
  __m128i si128; // [rsp+40h] [rbp-28h] BYREF

  v3[0] = (char *)this + 168;
  v3[1] = &si128;
  v3[2] = &si128;
  v2 = &Windows::UI::Composition::CompositionColorBrush::sc_Color;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<_D3DCOLORVALUE>,Windows::UI::Composition::PropertyUpdateInfo>(
    this,
    v3,
    &v2);
  Windows::UI::Composition::ProxyObject::Destroy(this);
}
