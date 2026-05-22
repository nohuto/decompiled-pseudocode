/*
 * XREFs of ??0VisualCapture@Composition@UI@Windows@@QEAA@XZ @ 0x18015434C
 * Callers:
 *     ??$MakeAndInitialize2@VGlobalVisualCapture@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVGlobalVisualCapture@Composition@UI@Windows@@AEAPEAVCompositor@456@@Z @ 0x1801541EC (--$MakeAndInitialize2@VGlobalVisualCapture@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@@.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::VisualCapture *__fastcall Windows::UI::Composition::VisualCapture::VisualCapture(
        Windows::UI::Composition::VisualCapture *this)
{
  Windows::UI::Composition::VisualCapture *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::VisualCapture::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::VisualCapture::AsyncOperation::`vftable';
  *((_QWORD *)this + 19) = &Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::UI::Composition::ICompositionSurface *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 50) = -1;
  *((_QWORD *)this + 19) = &Windows::UI::Composition::VisualCapture::AsyncBase::`vftable';
  result = this;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 1;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  return result;
}
