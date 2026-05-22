/*
 * XREFs of ?OnDisconnected@InputInjectionClientProxy@@MEAAJXZ @ 0x1801C4020
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??1?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F6B94 (--1-$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800F7640 (-OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputInjectionClientProxy::OnDisconnected(InputInjectionClientProxy *this)
{
  InjectionRawInputProvider *v2; // rcx
  InjectionRawInputProvider *v3; // rbx
  InjectionRawInputProvider *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = InjectionRawInputProvider::s_rawInputProvider;
  v5 = InjectionRawInputProvider::s_rawInputProvider;
  v3 = InjectionRawInputProvider::s_rawInputProvider;
  if ( InjectionRawInputProvider::s_rawInputProvider )
  {
    _InterlockedIncrement((volatile signed __int32 *)InjectionRawInputProvider::s_rawInputProvider + 4);
    v2 = v5;
  }
  if ( *((_BYTE *)this + 56) )
  {
    if ( (int)InjectionRawInputProvider::OnRemoveDevice(v2, this) < 0 )
    {
      Microsoft::WRL::ComPtr<KernelContextProvider>::~ComPtr<KernelContextProvider>((__int64 *)&v5);
      return 0LL;
    }
    *((_BYTE *)this + 56) = 0;
  }
  if ( v3 )
    RefCountedObject::Release((InjectionRawInputProvider *)((char *)v3 + 8));
  return 0LL;
}
