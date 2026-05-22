/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180068FB8
 * Callers:
 *     ?SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@Z @ 0x18006AB68 (-SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180039FAC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x1800606E4 (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x1800691AC (--$_Uninitialized_move@PEAV-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$allocator@V-.c)
 *     ?InternalAddRef@?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A9A0 (-InternalAddRef@-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@_K1@Z @ 0x18006AD40 (-_Change_array@-$vector@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$allocator@V-$C.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 *result; // rax
  __int64 v19; // rcx
  char *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 *v22; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = (char *)v12;
  v14 = &v12[v5];
  try
  {
    *v14 = *a3;
    Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::InternalAddRef(v14);
    v22 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget> *,std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(
        v17,
        a2,
        v13);
      v22 = v13;
      v16 = v14 + 1;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget> *,std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(
      v17,
      v15,
      v16);
    std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::_Change_array(a1, v13, v8, v7, v20);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(v22, v14 + 1);
    std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::deallocate(v19, v21, v7);
    throw;
  }
  return result;
}
