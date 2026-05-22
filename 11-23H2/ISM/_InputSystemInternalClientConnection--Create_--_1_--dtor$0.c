/*
 * XREFs of _InputSystemInternalClientConnection::Create_::_1_::dtor$0 @ 0x18013C14C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18009E4CC (--1-$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall InputSystemInternalClientConnection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::~ComPtr<InputSystemInternalClientConnection>(*(_QWORD *)(a2 + 80));
  }
  return result;
}
