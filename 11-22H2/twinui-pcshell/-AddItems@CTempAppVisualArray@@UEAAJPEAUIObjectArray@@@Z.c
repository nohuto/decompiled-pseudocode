/*
 * XREFs of ?AddItems@CTempAppVisualArray@@UEAAJPEAUIObjectArray@@@Z @ 0x1805F1BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z @ 0x1805F1A00 (-AddItem@CTempAppVisualArray@@UEAAJPEAUITemporaryAppVisual@@@Z.c)
 */

__int64 __fastcall CTempAppVisualArray::AddItems(CTempAppVisualArray *this, struct IObjectArray *a2)
{
  int v4; // ebx
  unsigned int i; // edi
  struct IObjectArrayVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rbx
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  struct ITemporaryAppVisual *v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  ((void (__fastcall *)(struct IObjectArray *, unsigned int *))a2->lpVtbl->GetCount)(a2, &v9);
  for ( i = 0; i < v9; ++i )
  {
    if ( v4 < 0 )
      break;
    lpVtbl = a2->lpVtbl;
    v10 = 0LL;
    GetAt = lpVtbl->GetAt;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v10);
    v4 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct ITemporaryAppVisual **))GetAt)(
           a2,
           i,
           &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
           &v10);
    if ( v4 >= 0 )
      v4 = CTempAppVisualArray::AddItem(this, v10);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v10);
  }
  return (unsigned int)v4;
}
