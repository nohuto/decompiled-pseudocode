/*
 * XREFs of ??0CompositionCubeMap@Private@Composition@UI@Windows@@QEAA@XZ @ 0x1801228C8
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionCubeMap@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAIAEAIAEA_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionCubeMap@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAI2AEA_N@Z @ 0x180120240 (--$MakeAndInitialize2@VCompositionCubeMap@Private@Composition@UI@Windows@@V12345@PEAVCompositor@.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Private::CompositionCubeMap *__fastcall Windows::UI::Composition::Private::CompositionCubeMap::CompositionCubeMap(
        Windows::UI::Composition::Private::CompositionCubeMap *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Private::CompositionCubeMap::`vftable'{for `Windows::UI::Composition::ProxyObject'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::Private::CompositionCubeMap::`vftable'{for `Windows::UI::Composition::SurfaceBindPoint::IOwner'};
  *((_QWORD *)this + 18) = &Windows::UI::Composition::Private::CompositionCubeMap::Partner::`vftable';
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  return this;
}
