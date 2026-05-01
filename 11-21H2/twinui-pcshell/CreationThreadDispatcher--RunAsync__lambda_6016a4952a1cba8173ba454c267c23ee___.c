/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x1805B2708
 * Callers:
 *     ?DispatchToImmersiveShellThread@?$produce@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcher@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x180592720 (-DispatchToImmersiveShellThread@-$produce@UImmersiveShellThreadDispatcher@implementation@SnapCom.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___ @ 0x1805B2668 (Windows--Internal--ComTaskPool--QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___.c)
 */

__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___(
        __int64 a1,
        volatile int *a2,
        unsigned int a3)
{
  Microsoft::WRL::Details *v4; // rdi
  volatile int *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  v4 = (Microsoft::WRL::Details *)(a1 + 44);
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, a2);
  v11 = *(_QWORD *)a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  v12 = a1;
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, v7);
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___(
         v8,
         a3 != 0 ? 2 : 0,
         a3,
         &v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v13);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a2);
  return v9;
}
