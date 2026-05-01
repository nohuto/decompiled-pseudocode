/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::_scalar_deleting_destructor_ @ 0x180022EA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c7e28edb760347053732171cef665d5d_::__lambda_c7e28edb760347053732171cef665d5d_ @ 0x18001FEC4 (_lambda_c7e28edb760347053732171cef665d5d_--__lambda_c7e28edb760347053732171cef665d5d_.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18004B690 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  `eh vector destructor iterator'(
    a1 + 5,
    8uLL,
    1uLL,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
  lambda_c7e28edb760347053732171cef665d5d_::__lambda_c7e28edb760347053732171cef665d5d_(a1 + 1, v4, v5);
  *a1 = (__int64)&Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x30uLL);
  return a1;
}
