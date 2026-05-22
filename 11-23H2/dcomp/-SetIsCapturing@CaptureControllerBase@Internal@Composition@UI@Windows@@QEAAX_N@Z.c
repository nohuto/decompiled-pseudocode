/*
 * XREFs of ?SetIsCapturing@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAX_N@Z @ 0x18018A4BC
 * Callers:
 *     ?put_IsCapturing@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJE@Z @ 0x18017FE20 (-put_IsCapturing@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::SetIsCapturing(
        Windows::UI::Composition::Internal::CaptureControllerBase *this,
        unsigned __int8 a2)
{
  if ( *((_BYTE *)this + 168) != a2 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      1,
      a2);
    *((_BYTE *)this + 168) = a2;
  }
}
