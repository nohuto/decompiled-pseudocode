/*
 * XREFs of ??$_Invoke@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@$0A@$00@thread@std@@CAIPEAX@Z @ 0x180056EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@U?$default_delete@V?$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@@2@@std@@QEAA@XZ @ 0x1800572A0 (--1-$unique_ptr@V-$tuple@P8Display@Engine@Spectre@@EAAXXZPEAV123@@std@@U-$default_delete@V-$tupl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::thread::_Invoke<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>,0,1>(
        __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  (*(void (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  _Cnd_do_broadcast_at_thread_exit();
  std::unique_ptr<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>>::~unique_ptr<std::tuple<void (Spectre::Engine::Display::*)(void),Spectre::Engine::Display *>>(&v2);
  return 0LL;
}
