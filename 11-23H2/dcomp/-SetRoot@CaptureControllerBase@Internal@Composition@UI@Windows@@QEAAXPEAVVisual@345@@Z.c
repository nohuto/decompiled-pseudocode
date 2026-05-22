/*
 * XREFs of ?SetRoot@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXPEAVVisual@345@@Z @ 0x18018A610
 * Callers:
 *     ?Destroy@CaptureController@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x18017F520 (-Destroy@CaptureController@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?put_Root@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x18017FFD0 (-put_Root@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z.c)
 *     ?put_Root@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z @ 0x180182A80 (-put_Root@Partner@SharedWriteCaptureController@Internal@Composition@UI@Windows@@UEAAJPEAUIVisual.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z @ 0x180032700 (-TryFlushKernelCommands@CDevice@DirectComposition@@AEAAJ_N@Z.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::SetRoot(
        Windows::UI::Composition::Internal::CaptureControllerBase *this,
        struct Windows::UI::Composition::Visual *a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v2; // rsi
  int v5; // eax

  v2 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 152);
  if ( *((struct Windows::UI::Composition::Visual **)this + 19) != a2 )
  {
    v5 = 0;
    if ( a2 )
      v5 = *((_DWORD *)a2 + 32);
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0,
      v5);
    DirectComposition::CDevice::TryFlushKernelCommands(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      0);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(v2, (volatile signed __int32 *)a2);
  }
}
