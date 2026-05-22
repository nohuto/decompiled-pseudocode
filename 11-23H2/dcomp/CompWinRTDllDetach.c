/*
 * XREFs of CompWinRTDllDetach @ 0x1801087EC
 * Callers:
 *     DllMain @ 0x18009C1A4 (DllMain.c)
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800878D8 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180102C10 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 */

char CompWinRTDllDetach()
{
  __int64 *v0; // rax
  struct Microsoft::WRL::Details::ModuleBase *v1; // rdx
  char result; // al
  __int64 *v3; // rax
  const unsigned __int16 *v4; // r8
  struct Microsoft::WRL::Details::ModuleBase *v5; // rdx
  __int64 v6; // rcx

  v0 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  result = Microsoft::WRL::Details::TerminateMap((Microsoft::WRL::Details *)v0, v1, 0LL);
  if ( !result )
  {
    v3 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
    LOBYTE(v4) = 1;
    result = Microsoft::WRL::Details::TerminateMap((Microsoft::WRL::Details *)v3, v5, v4);
  }
  v6 = _InterlockedExchange64(&qword_180220878, 0LL);
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return result;
}
