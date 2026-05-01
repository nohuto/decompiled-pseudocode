/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18048B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_28273f6668f79f5db2d6a9fae521721a_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 5);
  v4 = (std::_Ref_count_base *)a1[4];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
