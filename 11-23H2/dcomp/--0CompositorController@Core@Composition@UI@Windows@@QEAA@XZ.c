/*
 * XREFs of ??0CompositorController@Core@Composition@UI@Windows@@QEAA@XZ @ 0x18003C904
 * Callers:
 *     ??$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQueue@System@5@PEAUICoreWindow@245@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositorController@Core@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@7@$$QEAPEAUICoreWindow@467@@Z @ 0x18003C858 (--$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQ.c)
 *     ??$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQueue@System@5@AEAPEAUICoreWindow@245@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositorController@Core@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@7@AEAPEAUICoreWindow@467@@Z @ 0x18012C980 (--$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEA_ea_18012C980.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::Core::CompositorController::CompositorController(RTL_SRWLOCK *this)
{
  Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass((Microsoft::WRL2::NestableRuntimeClass *)this);
  this->Ptr = &Windows::UI::Composition::Core::CompositorController::`vftable';
  this[9].Ptr = 0LL;
  this[5].Ptr = &Windows::UI::Composition::Core::CompositorController::Api::`vftable';
  this[7].Ptr = &Windows::UI::Composition::Core::CompositorController::Partner::`vftable';
  this[10].Ptr = 0LL;
  InitializeSRWLock(this + 11);
  InitializeSRWLock(this + 12);
  return this;
}
