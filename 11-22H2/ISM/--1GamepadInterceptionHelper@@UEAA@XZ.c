/*
 * XREFs of ??1GamepadInterceptionHelper@@UEAA@XZ @ 0x18006A330
 * Callers:
 *     ??_GGamepadInterceptionHelper@@UEAAPEAXI@Z @ 0x18006A5C0 (--_GGamepadInterceptionHelper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@0@@Z @ 0x180068D70 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std.c)
 *     ??1?$_Tree@V?$_Tset_traits@KU?$less@K@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA@XZ @ 0x18006A158 (--1-$_Tree@V-$_Tset_traits@KU-$less@K@std@@V-$allocator@K@2@$0A@@std@@@std@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamepadInterceptionHelper::~GamepadInterceptionHelper(GamepadInterceptionHelper *this)
{
  void *v2; // rcx
  __int64 *v3; // rcx
  __int64 v4; // rcx

  std::_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>::~_Tree<std::_Tset_traits<unsigned long,std::less<unsigned long>,std::allocator<unsigned long>,0>>((void **)this + 9);
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 8) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v3 = (__int64 *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>>(v3, *((__int64 **)this + 4));
    std::_Deallocate<16,0>(
      *((void **)this + 3),
      (*((_QWORD *)this + 5) - *((_QWORD *)this + 3)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
