/*
 * XREFs of ?SetEnabled@CompositionLight@Composition@UI@Windows@@UEAAJ_N@Z @ 0x18018AA10
 * Callers:
 *     <none>
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::SetEnabled(
        Windows::UI::Composition::CompositionLight *this,
        unsigned __int8 a2)
{
  *((_BYTE *)this + 256) = a2;
  DirectComposition::CDevice::ResourceSetIntegerProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    2,
    a2);
  return 0LL;
}
