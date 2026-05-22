/*
 * XREFs of ?SetController@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAXPEAVCaptureControllerBase@2345@@Z @ 0x18018046C
 * Callers:
 *     ?Destroy@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x1800B7FF0 (-Destroy@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_Controller@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAUICaptureControllerBase@3456@@Z @ 0x180180A90 (-put_Controller@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAUICaptureCo.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureRenderTarget::SetController(
        Windows::UI::Composition::Internal::CaptureRenderTarget *this,
        struct Windows::UI::Composition::Internal::CaptureControllerBase *a2)
{
  int v4; // r9d
  Microsoft::WRL2::NestableRuntimeClass *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct Windows::UI::Composition::Internal::CaptureControllerBase **)this + 21) != a2 )
  {
    v4 = 0;
    if ( a2 )
      v4 = *((_DWORD *)a2 + 32);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      v4);
    DirectComposition::CDevice::TryFlushKernelCommands(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      0);
    if ( *((struct Windows::UI::Composition::Internal::CaptureControllerBase **)this + 21) != a2 )
    {
      if ( a2 )
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
      v5 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = a2;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v5);
    }
  }
}
