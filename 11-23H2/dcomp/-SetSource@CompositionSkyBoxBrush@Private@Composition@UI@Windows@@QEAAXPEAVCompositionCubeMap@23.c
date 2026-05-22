/*
 * XREFs of ?SetSource@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAXPEAVCompositionCubeMap@2345@@Z @ 0x180181414
 * Callers:
 *     ?Destroy@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAXXZ @ 0x180180DD0 (-Destroy@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_Source@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJPEAUICompositionCubeMap@3456@@Z @ 0x180182360 (-put_Source@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJPEAUIComposition.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 */

void __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::SetSource(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush *this,
        struct Windows::UI::Composition::Private::CompositionCubeMap *a2)
{
  int v2; // r9d
  Microsoft::WRL2::NestableRuntimeClass *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( a2 )
    v2 = *((_DWORD *)a2 + 32);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    2,
    v2);
  if ( *((struct Windows::UI::Composition::Private::CompositionCubeMap **)this + 21) != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = a2;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v5);
  }
}
