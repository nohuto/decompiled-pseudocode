/*
 * XREFs of ?SetIsHardwareCursorEnabled@CursorVisual@Composition@UI@Windows@@QEAAX_N@Z @ 0x180175AE8
 * Callers:
 *     ?SetIsHardwareCursorEnabled@Partner@CursorVisual@Composition@UI@Windows@@UEAAJ_N@Z @ 0x180175B50 (-SetIsHardwareCursorEnabled@Partner@CursorVisual@Composition@UI@Windows@@UEAAJ_N@Z.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

void __fastcall Windows::UI::Composition::CursorVisual::SetIsHardwareCursorEnabled(
        Windows::UI::Composition::CursorVisual *this,
        unsigned __int8 a2)
{
  if ( (a2 ^ 1) != (*((_BYTE *)this + 336) == 0) )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1,
      a2);
    *((_BYTE *)this + 336) = a2;
  }
}
