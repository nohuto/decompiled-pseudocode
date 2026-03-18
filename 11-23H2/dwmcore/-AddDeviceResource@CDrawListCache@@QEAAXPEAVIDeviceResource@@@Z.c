/*
 * XREFs of ?AddDeviceResource@CDrawListCache@@QEAAXPEAVIDeviceResource@@@Z @ 0x180027394
 * Callers:
 *     ?AddDeviceResourceToCache@CDrawListBitmap@@QEBAXPEAVCDrawListCache@@@Z @ 0x1800272A0 (-AddDeviceResourceToCache@CDrawListBitmap@@QEBAXPEAVCDrawListCache@@@Z.c)
 *     ?AddDeviceResourcesToCache@CCommonRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z @ 0x1800DAA20 (-AddDeviceResourcesToCache@CCommonRenderingEffect@@UEBAXPEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVIDeviceResource@@V?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@@detail@@IEAAPEAPEAVIDeviceResource@@_K0@Z @ 0x180027180 (-reserve_region@-$vector_facade@PEAVIDeviceResource@@V-$pointer_buffer_impl@PEAVIDeviceResource@.c)
 *     ?last@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x180027494 (-last@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ @ 0x18007486C (-first@-$pointer_buffer_impl@PEAVIDeviceResource@@@detail@@QEBAPEAPEAVIDeviceResource@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawListCache::AddDeviceResource(CDrawListCache *this, struct IDeviceResource *a2)
{
  char *v2; // rsi
  __int64 v5; // rdi
  struct IDeviceResource **i; // rbx
  char *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax

  v2 = (char *)this + 56;
  v5 = detail::pointer_buffer_impl<IDeviceResource *>::last((char *)this + 56);
  for ( i = (struct IDeviceResource **)detail::pointer_buffer_impl<IDeviceResource *>::first(v2);
        i != (struct IDeviceResource **)v5 && *i != a2;
        ++i )
  {
    ;
  }
  if ( i == (struct IDeviceResource **)detail::pointer_buffer_impl<IDeviceResource *>::last(v2) )
  {
    v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(struct IDeviceResource *, unsigned __int64))(*(_QWORD *)a2 + 40LL))(
      a2,
      ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
    v8 = detail::pointer_buffer_impl<IDeviceResource *>::last(v2);
    v9 = detail::pointer_buffer_impl<IDeviceResource *>::first(v2);
    *(_QWORD *)detail::vector_facade<IDeviceResource *,detail::pointer_buffer_impl<IDeviceResource *>>::reserve_region(
                 (__int64)v2,
                 (v8 - v9) >> 3) = a2;
    detail::pointer_buffer_impl<IDeviceResource *>::first(v2);
  }
}
