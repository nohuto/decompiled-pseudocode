/*
 * XREFs of ??$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepadInterceptionHelper@@@Z @ 0x180068CAC
 * Callers:
 *     ?Create@GamepadInterceptionHelper@@SA?AV?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ @ 0x18006A864 (-Create@GamepadInterceptionHelper@@SA-AV-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005A954 (-InternalRelease@-$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAA.c)
 *     ??0GamepadInterceptionHelper@@QEAA@XZ @ 0x180069EC8 (--0GamepadInterceptionHelper@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GamepadInterceptionHelper,GamepadInterceptionHelper,>(
        GamepadInterceptionHelper **a1)
{
  unsigned int v2; // ebx
  GamepadInterceptionHelper *v3; // rax
  GamepadInterceptionHelper *v4; // rax
  GamepadInterceptionHelper *v5; // rdi
  GamepadInterceptionHelper *v7; // [rsp+40h] [rbp+8h] BYREF
  GamepadInterceptionHelper *v8; // [rsp+48h] [rbp+10h] BYREF
  GamepadInterceptionHelper *v9; // [rsp+50h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (GamepadInterceptionHelper *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  v8 = v3;
  if ( v3 )
  {
    v9 = v3;
    v4 = GamepadInterceptionHelper::GamepadInterceptionHelper(v3);
    v5 = v4;
    v8 = v4;
    v7 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(GamepadInterceptionHelper *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v7);
  return v2;
}
