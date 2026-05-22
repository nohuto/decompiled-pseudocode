/*
 * XREFs of ?InternalAddRef@?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A9A0
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180068FB8 (--$_Emplace_reallocate@AEBV-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@-$vector@V-$Co.c)
 *     ??4?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18006A508 (--4-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x18006A6C0 (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 *     ?SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@Z @ 0x18006AB68 (-SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
