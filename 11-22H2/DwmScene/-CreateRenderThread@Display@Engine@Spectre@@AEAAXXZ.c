/*
 * XREFs of ?CreateRenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800577F0
 * Callers:
 *     ??0Display@Engine@Spectre@@QEAA@AEAV112@W4RefreshPolicy@012@W4RenderingMode@012@@Z @ 0x1800570E8 (--0Display@Engine@Spectre@@QEAA@AEAV112@W4RefreshPolicy@012@W4RenderingMode@012@@Z.c)
 * Callees:
 *     ??1thread@std@@QEAA@XZ @ 0x180032088 (--1thread@std@@QEAA@XZ.c)
 *     ??4thread@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180032120 (--4thread@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     ??$make_unique@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@P8Display@Engine@Spectre@@EAAXXZPEAV345@$0A@@std@@YA?AV?$unique_ptr@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@U?$default_delete@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@@2@@0@$$QEAP8Display@Engine@Spectre@@EAAXXZ$$QEAPEAV234@@Z @ 0x180057004 (--$make_unique@V-$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@P8Display@Engine@Spectre@@.c)
 *     ??1?$unique_ptr@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@U?$default_delete@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@@2@@std@@QEAA@XZ @ 0x1800572A0 (--1-$unique_ptr@V-$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@U-$default_delete@V-$tupl.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Display::CreateRenderThread(
        Spectre::Engine::Display *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  void *v9; // [rsp+50h] [rbp+10h] BYREF
  Spectre::Engine::Display *v10; // [rsp+58h] [rbp+18h] BYREF
  void (__fastcall *v11)(Spectre::Engine::Display *__hidden); // [rsp+60h] [rbp+20h] BYREF

  std::atomic<bool>::operator=((__int64)this + 426, 0LL, a3, a4);
  LOBYTE(v5) = 1;
  std::atomic<bool>::operator=((__int64)this + 425, v5, v6, v7);
  v10 = this;
  v11 = Spectre::Engine::Display::RenderThread;
  std::make_unique<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>,void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *,0>(
    &v9,
    &v11,
    &v10);
  *(_QWORD *)&v8 = _o__beginthreadex(
                     0LL,
                     0LL,
                     std::thread::_Invoke<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>,0,1>,
                     v9,
                     0,
                     (char *)&v8 + 8);
  if ( !(_QWORD)v8 )
  {
    DWORD2(v8) = 0;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x1800578B5LL);
  }
  v9 = 0LL;
  std::unique_ptr<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>>::~unique_ptr<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>>(&v9);
  std::thread::operator=((__int64)this + 104, &v8);
  std::thread::~thread((std::thread *)&v8);
}
