/*
 * XREFs of _wil::MakeOrThrow_CoCreateInstanceImmersiveShellComponentCreator__::_1_::dtor$0 @ 0x1802C55A5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@WRL@Microsoft@@QEAA@XZ @ 0x180489FD4 (--1-$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_CoCreateInstanceImmersiveShellComponentCreator__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CoCreateInstanceImmersiveShellComponentCreator>::~ComPtr<CoCreateInstanceImmersiveShellComponentCreator>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
