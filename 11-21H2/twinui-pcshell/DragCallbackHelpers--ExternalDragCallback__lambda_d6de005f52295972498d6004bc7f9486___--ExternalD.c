/*
 * XREFs of DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1804D7114
 * Callers:
 *     DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1804D6AA4 (DragCallbackHelpers--CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DragCallbackHelpers::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___::ExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IExternalDragCallback>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_1806614F8;
  *(_BYTE *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 32));
  return a1;
}
