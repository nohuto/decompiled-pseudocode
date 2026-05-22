/*
 * XREFs of ?QueryInterface@VirtualTouchpadControllerProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180145000
 * Callers:
 *     ?QueryInterface@VirtualTouchpadControllerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067B30 (-QueryInterface@VirtualTouchpadControllerProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualTouchpadControllerProxy@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067B50 (-QueryInterface@VirtualTouchpadControllerProxy@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualTouchpadControllerProxy@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180067B70 (-QueryInterface@VirtualTouchpadControllerProxy@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::QueryInterface(
        VirtualTouchpadControllerProxy *this,
        struct _GUID *a2,
        void **a3)
{
  _QWORD *v5; // r8
  unsigned int v6; // ebx
  _QWORD *v8; // r8
  void *v9; // rdx

  v6 = 0;
  if ( IsEqualGUID(a2, &GUID_ae83b6cb_def2_49fe_9564_e870d32281a5) )
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    *a3 = (void *)(((unsigned __int64)this + 128) & -(__int64)(this != 0LL));
    return 0LL;
  }
  if ( IsEqualGUID(v5, &GUID_00000000_0000_0000_c000_000000000046)
    || IsEqualGUID(v8, &GUID_e1df5cf1_7b02_2923_3169_44209f8d749f) )
  {
    v9 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    *a3 = v9;
    if ( v9 )
    {
      (**(void (__fastcall ***)(VirtualTouchpadControllerProxy *))this)(this);
      return v6;
    }
  }
  else
  {
    *a3 = 0LL;
  }
  return (unsigned int)-2147467262;
}
