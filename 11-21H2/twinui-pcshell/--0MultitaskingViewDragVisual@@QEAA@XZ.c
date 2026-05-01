/*
 * XREFs of ??0MultitaskingViewDragVisual@@QEAA@XZ @ 0x1804DD6A8
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEBUCSize@Geometry@@AEAN@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewDragVisual@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEBUCSize@Geometry@@AEAN@Z @ 0x1804DD588 (--$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMul.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

MultitaskingViewDragVisual *__fastcall MultitaskingViewDragVisual::MultitaskingViewDragVisual(
        MultitaskingViewDragVisual *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewDragVisual>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MultitaskingViewDragVisual::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
