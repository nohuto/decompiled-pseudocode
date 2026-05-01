/*
 * XREFs of ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1801642D0
 * Callers:
 *     ??$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180164440 (--$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AE.c)
 *     ??$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1804FE480 (--$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCrea.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1804FE65C (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1804FE6E0 (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?Attach@?$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1804FEBE8 (-Attach@-$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriH.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v4; // edi
  int v6; // ebx

  v2 = 0x7FFFFFFFLL;
  do
  {
    v3 = *(unsigned int *)(a1 + 12);
    if ( (_DWORD)v3 == 0x7FFFFFFF )
      break;
    a2 = (unsigned int)(v3 - 1);
  }
  while ( (_DWORD)v3 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 12), a2, v3) );
  v4 = v3 - 1;
  if ( (_DWORD)v3 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 20) & 5;
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL, v3, 0x7FFFFFFFLL);
    if ( v6 == 5 && Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        a2,
        v3,
        v2);
  }
  else if ( (*(_DWORD *)(a1 + 20) & 6) == 0 && (_DWORD)v3 == 2 && Microsoft::WRL::Details::ModuleBase::module_ )
  {
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
      Microsoft::WRL::Details::ModuleBase::module_,
      *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
      v3,
      0x7FFFFFFFLL);
  }
  return v4;
}
