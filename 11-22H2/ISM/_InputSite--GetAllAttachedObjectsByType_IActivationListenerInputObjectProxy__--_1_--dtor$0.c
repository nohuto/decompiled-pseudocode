/*
 * XREFs of _InputSite::GetAllAttachedObjectsByType_IActivationListenerInputObjectProxy__::_1_::dtor$0 @ 0x180081900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18010E4CC (--1-$vector@V-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 */

__int64 __fastcall InputSite::GetAllAttachedObjectsByType_IActivationListenerInputObjectProxy__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::~vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>(*(_QWORD *)(a2 + 104));
  }
  return result;
}
