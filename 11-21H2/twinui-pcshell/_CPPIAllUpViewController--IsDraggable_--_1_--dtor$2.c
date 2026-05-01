/*
 * XREFs of _CPPIAllUpViewController::IsDraggable_::_1_::dtor$2 @ 0x1804B5B07
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x1802DF6C8 (--1-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CPPIAllUpViewController::IsDraggable_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 104));
  }
  return result;
}
