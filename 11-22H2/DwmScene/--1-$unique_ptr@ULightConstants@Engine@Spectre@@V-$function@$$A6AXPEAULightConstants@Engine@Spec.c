/*
 * XREFs of ??1?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@std@@QEAA@XZ @ 0x18007CB94
 * Callers:
 *     ??1StandardShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007CC08 (--1StandardShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 *     ??1BackgroundUnlitShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007FDD0 (--1BackgroundUnlitShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<Spectre::Engine::LightConstants,std::function<void (Spectre::Engine::LightConstants *)>>::~unique_ptr<Spectre::Engine::LightConstants,std::function<void (Spectre::Engine::LightConstants *)>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 64) )
  {
    v5 = *(_QWORD *)(a1 + 64);
    v3 = *(_QWORD *)(a1 + 56);
    if ( !v3 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 16LL))(v3, &v5);
  }
  return std::_Func_class<void,>::_Tidy(a1, a2);
}
