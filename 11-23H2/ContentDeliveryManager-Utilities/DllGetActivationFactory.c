/*
 * XREFs of DllGetActivationFactory @ 0x18004BD60
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800491E8 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 */

__int64 __fastcall DllGetActivationFactory(HSTRING a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx

  v4 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  return Microsoft::WRL::Details::GetActivationFactory<1>((Microsoft::WRL::Details *)v4, v5, a1, a2);
}
