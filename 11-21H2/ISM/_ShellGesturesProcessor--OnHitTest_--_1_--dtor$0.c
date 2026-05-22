/*
 * XREFs of _ShellGesturesProcessor::OnHitTest_::_1_::dtor$0 @ 0x180054CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18008014C (--1-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall ShellGesturesProcessor::OnHitTest_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 152) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 152) &= ~1u;
    return Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::~ComPtr<ShellGesturesClientProxy>(a2 + 48);
  }
  return result;
}
