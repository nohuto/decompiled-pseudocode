/*
 * XREFs of ??0RectangleClip@Composition@UI@Windows@@QEAA@XZ @ 0x18006EBCC
 * Callers:
 *     ??$MakeAndInitialize2@VRectangleClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAMAEAUVector2@Numerics@Foundation@4@AEAU6784@AEAU6784@AEAU6784@@Details@WRL2@Microsoft@@YAJPEAPEAVRectangleClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222AEAUVector2@Numerics@Foundation@6@333@Z @ 0x18006EAA0 (--$MakeAndInitialize2@VRectangleClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAE.c)
 * Callees:
 *     ??0CompositionClip@Composition@UI@Windows@@QEAA@XZ @ 0x18006EC20 (--0CompositionClip@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::RectangleClip *__fastcall Windows::UI::Composition::RectangleClip::RectangleClip(
        Windows::UI::Composition::RectangleClip *this)
{
  Windows::UI::Composition::CompositionClip::CompositionClip(this);
  *(_QWORD *)this = &Windows::UI::Composition::RectangleClip::`vftable';
  *((_QWORD *)this + 21) = &Windows::UI::Composition::RectangleClip::Api::`vftable';
  *((_QWORD *)this + 23) = &Windows::UI::Composition::RectangleClip::Private::`vftable';
  *((_QWORD *)this + 25) = &Windows::UI::Composition::RectangleClip::Partner::`vftable';
  return this;
}
