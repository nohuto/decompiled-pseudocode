/*
 * XREFs of _InputSystemInternalServerConnection::Create_::_1_::dtor$2 @ 0x18006C375
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x180098BAC (--1-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall InputSystemInternalServerConnection::Create_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::~ComPtr<InputSystemInternalServerConnection>(*(_QWORD *)(a2 + 112));
  }
  return result;
}
