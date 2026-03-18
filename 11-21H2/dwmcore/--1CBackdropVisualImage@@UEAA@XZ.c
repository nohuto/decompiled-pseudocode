/*
 * XREFs of ??1CBackdropVisualImage@@UEAA@XZ @ 0x1800D4224
 * Callers:
 *     ??_GCBackdropVisualImage@@UEAAPEAXI@Z @ 0x1800D41E0 (--_GCBackdropVisualImage@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x180053AAC (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x180058F70 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800592F8 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x18005F02C (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ @ 0x1800D47DC (--1-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CBackdropVisualImage::~CBackdropVisualImage(CBackdropVisualImage *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void **v4; // rbx
  void **v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax
  CBackdropVisualImage *v8; // rcx
  __int64 v9; // rax
  char *v10; // [rsp+30h] [rbp+8h] BYREF
  char *v11; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CBackdropVisualImage::`vftable'{for `CImageSource'};
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CBackdropVisualImage::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CBackdropVisualImage::`vftable'{for `IPixelFormat's `CImageSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 64) = &CBackdropVisualImage::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 1936;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 1952;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 12LL)
                                                                          - 1976;
  v4 = (void **)DwmDbg::DbgString::DbgString(&v10, &byte_18032C47F);
  v5 = (void **)DwmDbg::DbgString::DbgString(&v11, "BVI-Destroy");
  CBackdropVisualImage::LogEtwEvent((__int64)this, v5, v4);
  v6 = (_QWORD *)*((_QWORD *)this + 245);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v6, *((_QWORD **)this + 246));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 245),
      (*((_QWORD *)this + 247) - *((_QWORD *)this + 245)) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 245) = 0LL;
    *((_QWORD *)this + 246) = 0LL;
    *((_QWORD *)this + 247) = 0LL;
  }
  v7 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size((__int64)this + 1904);
  if ( v7 )
    detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
      (_QWORD *)this + 238,
      0LL,
      v7);
  detail::pointer_buffer_impl<CBlurredBackdropCache *>::~pointer_buffer_impl<CBlurredBackdropCache *>((char *)this + 1904);
  v8 = (CBackdropVisualImage *)*((_QWORD *)this + 224);
  v9 = (__int64)(*((_QWORD *)this + 225) - (_QWORD)v8) >> 4;
  if ( v9 )
    *((_QWORD *)this + 225) -= 16 * v9;
  *((_QWORD *)this + 224) = 0LL;
  if ( v8 == (CBackdropVisualImage *)((char *)this + 1816) )
    v8 = 0LL;
  DefaultHeap::Free(v8);
  CCachedVisualImage::~CCachedVisualImage(this);
}
