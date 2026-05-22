/*
 * XREFs of _InputProcess::InputProcess_::_1_::dtor$2 @ 0x1800D9B47
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputProcess::InputProcess_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<InputSystemInternalClientConnection>::~ComPtr<InputSystemInternalClientConnection>(*(_QWORD *)(a2 + 64) + 32LL);
}
