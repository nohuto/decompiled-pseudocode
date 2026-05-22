/*
 * XREFs of ?SetIsConstrainedBySize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAX_N@Z @ 0x18018A510
 * Callers:
 *     ?put_IsConstrainedBySize@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJE@Z @ 0x18017FEB0 (-put_IsConstrainedBySize@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::SetIsConstrainedBySize(
        Windows::UI::Composition::Internal::CaptureControllerBase *this,
        unsigned __int8 a2)
{
  if ( *((_BYTE *)this + 169) != a2 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      6,
      a2);
    *((_BYTE *)this + 169) = a2;
  }
}
