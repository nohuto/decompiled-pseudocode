/*
 * XREFs of ?Clone@CAppLayoutItem@@UEAAJPEAPEAUIAppLayoutItem@@@Z @ 0x18016C220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4AEBU_GUID@@PEAPEAX@Z @ 0x18016C890 (-s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::Clone(RTL_SRWLOCK *this, struct IAppLayoutItem **a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 *v5; // rbx
  int Instance_Clone; // ebx
  struct IAppLayoutItem *v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  v8 = 0LL;
  v5 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v8, &v9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v5);
  Instance_Clone = CAppLayoutItem::s_CreateInstance_Clone(
                     LODWORD(this[4].Ptr),
                     LODWORD(this[2].Ptr),
                     this[5].Ptr,
                     &this[10],
                     &this[6],
                     &this[8]);
  if ( Instance_Clone >= 0 )
  {
    Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v8);
    *a2 = v8;
    Instance_Clone = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)Instance_Clone;
}
