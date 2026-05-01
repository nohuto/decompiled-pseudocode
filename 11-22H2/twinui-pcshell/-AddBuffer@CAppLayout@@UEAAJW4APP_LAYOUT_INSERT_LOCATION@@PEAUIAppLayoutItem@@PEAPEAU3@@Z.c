/*
 * XREFs of ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x180794A40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18016CA90 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x1801985EC (-_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::AddBuffer(RTL_SRWLOCK *a1, int a2, __int64 a3, _QWORD *a4)
{
  RTL_SRWLOCK *v8; // rsi
  __int64 *v9; // rbx
  int Instance_Buffer; // ebx
  _QWORD *v11; // rax
  _QWORD *v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v8 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  if ( a4 )
    *a4 = 0LL;
  v13 = 0LL;
  v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v13, &v14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v9);
  Instance_Buffer = CAppLayoutItem::s_CreateInstance_Buffer(&GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, (void **)v9);
  if ( Instance_Buffer >= 0 )
  {
    Instance_Buffer = CAppLayout::_AddItemHelper(&a1[-5].Ptr, v13, a2, a3);
    if ( Instance_Buffer >= 0 )
    {
      if ( a4 )
      {
        v11 = v13;
        v13 = 0LL;
        *a4 = v11;
      }
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)Instance_Buffer;
}
