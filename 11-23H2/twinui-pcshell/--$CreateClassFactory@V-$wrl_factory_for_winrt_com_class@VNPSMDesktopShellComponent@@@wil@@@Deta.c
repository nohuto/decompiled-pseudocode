/*
 * XREFs of ??$CreateClassFactory@V?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801A2FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@@Z @ 0x1801A3068 (--$MakeAndInitialize@V-$wrl_factory_for_winrt_com_class@VNPSMDesktopShellComponent@@@wil@@V12@$$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<wil::wrl_factory_for_winrt_com_class<NPSMDesktopShellComponent>>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  _DWORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  _DWORD *v12; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<wil::wrl_factory_for_winrt_com_class<NPSMDesktopShellComponent>,wil::wrl_factory_for_winrt_com_class<NPSMDesktopShellComponent>,>(&v12);
  if ( v7 < 0 )
  {
    if ( v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
    return (unsigned int)v7;
  }
  else
  {
    v8 = v12;
    v12[5] = *a1;
    v9 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, __int64))v8)(v8, a3, a4);
    v10 = v9;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v9 < 0 )
      {
        v8[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v8 = 0LL;
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    return v10;
  }
}
