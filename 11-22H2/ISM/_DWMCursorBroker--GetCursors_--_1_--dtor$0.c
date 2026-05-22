/*
 * XREFs of _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x1800837E2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18010C67C (--1-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget@@@WRL@.c)
 */

__int64 __fastcall DWMCursorBroker::GetCursors_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>(*(_QWORD *)(a2 + 88));
  }
  return result;
}
