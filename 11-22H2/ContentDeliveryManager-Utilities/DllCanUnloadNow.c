/*
 * XREFs of DllCanUnloadNow @ 0x18004BD60
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180049238 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x18004B840 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  __int64 *v0; // rax
  RTL_SRWLOCK *v1; // rdx

  v0 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  if ( Microsoft::WRL::Details::TerminateMap((Microsoft::WRL::Details *)v0, v1, 0LL) )
    return NdrDllCanUnloadNow(&gPFactory);
  else
    return 1;
}
