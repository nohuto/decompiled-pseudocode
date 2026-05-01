/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewElementBase@@UIMultitaskingViewElementRoot@@UIFrameElement@@UIInputEaterElementNotifications@@UIMultitaskingViewDragProvider@@UILightDismissElementHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1804C16E0
 * Callers:
 *     ??0CMultitaskingViewFrameElement@@QEAA@XZ @ 0x1804C177C (--0CMultitaskingViewFrameElement@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x180232E60 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CMultitaskingViewElementBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>(
        CMultitaskingViewElementBase *a1)
{
  __int64 v2; // rcx

  CMultitaskingViewElementBase::CMultitaskingViewElementBase(a1);
  *(_DWORD *)(v2 + 252) = 1;
  *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `Microsoft::WRL::Details::Selector<CMultitaskingViewElementBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>>'};
  *(_QWORD *)(v2 + 208) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewElementBase>,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>>'};
  *(_QWORD *)(v2 + 216) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `IFrameElement'};
  *(_QWORD *)(v2 + 224) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>'};
  *(_QWORD *)(v2 + 232) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `IMultitaskingViewDragProvider'};
  *(_QWORD *)(v2 + 240) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase,IMultitaskingViewElementRoot,IFrameElement,IInputEaterElementNotifications,IMultitaskingViewDragProvider,ILightDismissElementHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ILightDismissElementHost>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
