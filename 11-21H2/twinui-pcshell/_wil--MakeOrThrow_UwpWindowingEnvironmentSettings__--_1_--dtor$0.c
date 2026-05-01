/*
 * XREFs of _wil::MakeOrThrow_UwpWindowingEnvironmentSettings__::_1_::dtor$0 @ 0x1803E96AC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@QEAA@XZ @ 0x1803DED88 (--1-$ComPtr@VWindowingEnvironmentSettings@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_UwpWindowingEnvironmentSettings__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<WindowingEnvironmentSettings>::~ComPtr<WindowingEnvironmentSettings>(*(__int64 **)(a2 + 64));
  }
  return result;
}
