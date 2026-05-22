/*
 * XREFs of _InputSystemServerConnection::Create_::_1_::dtor$0 @ 0x18006DC57
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x180059144 (--1-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 */

unsigned int __fastcall InputSystemServerConnection::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  unsigned int result; // eax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<InputSystemServerConnection>::~ComPtr<InputSystemServerConnection>(*(Microsoft::Bamo::BaseBamoConnection ***)(a2 + 112));
  }
  return result;
}
