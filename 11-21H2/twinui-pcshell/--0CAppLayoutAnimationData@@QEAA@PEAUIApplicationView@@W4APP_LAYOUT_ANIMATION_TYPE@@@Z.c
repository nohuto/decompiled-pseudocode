/*
 * XREFs of ??0CAppLayoutAnimationData@@QEAA@PEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180619CA4
 * Callers:
 *     ?CAppLayoutAnimationData_CreateInstance@@YAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x180619D74 (-CAppLayoutAnimationData_CreateInstance@@YAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@A.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutOperationItem@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802384D0 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutOperationIte.c)
 */

__int64 __fastcall CAppLayoutAnimationData::CAppLayoutAnimationData(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutOperationItem>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutOperationItem>((IApplicationViewChangeListener *)a1);
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppLayoutAnimationData>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &CAppLayoutAnimationData::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  result = a1;
  *(_DWORD *)(a1 + 24) = a3;
  return result;
}
