/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x18068001C
 * Callers:
 *     ?DispatchToImmersiveShellThread@?$produce@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcher@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x1806601E0 (-DispatchToImmersiveShellThread@-$produce@UImmersiveShellThreadDispatcher@implementation@SnapCom.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___ @ 0x18067FF7C (Windows--Internal--ComTaskPool--QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___(
        __int64 a1,
        volatile int *a2,
        unsigned int a3)
{
  volatile int *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
  v10 = *(_QWORD *)a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  v11 = a1;
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 44), v6);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___(
         v7,
         a3 != 0 ? 2 : 0,
         a3,
         &v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v11);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  return v8;
}
