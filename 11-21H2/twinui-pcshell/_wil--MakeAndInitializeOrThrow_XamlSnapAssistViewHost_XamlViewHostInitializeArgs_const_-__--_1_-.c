/*
 * XREFs of _wil::MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const_&__::_1_::dtor$0 @ 0x1805FF886
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A7068 (--1-$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_XamlSnapAssistViewHost_XamlViewHostInitializeArgs_const____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<SwitchItemCollection>::~ComPtr<SwitchItemCollection>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
