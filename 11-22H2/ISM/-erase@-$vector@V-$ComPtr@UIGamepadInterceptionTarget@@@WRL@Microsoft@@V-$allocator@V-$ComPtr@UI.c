/*
 * XREFs of ?erase@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x18006B5A0
 * Callers:
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x18006A6C0 (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  char *v6; // rbp
  char *i; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(char **)(a1 + 8);
  for ( i = (char *)(a3 + 8); i != v6; i += 8 )
  {
    v8 = 0LL;
    if ( &v13 != i )
    {
      v8 = *(_QWORD *)i;
      *(_QWORD *)i = 0LL;
    }
    v9 = *((_QWORD *)i - 1);
    *((_QWORD *)i - 1) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(v10 - 8);
  if ( v11 )
  {
    *(_QWORD *)(v10 - 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *(_QWORD *)(a1 + 8) -= 8LL;
  *a2 = a3;
  return a2;
}
