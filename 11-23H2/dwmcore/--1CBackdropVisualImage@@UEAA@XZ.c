/*
 * XREFs of ??1CBackdropVisualImage@@UEAA@XZ @ 0x180025780
 * Callers:
 *     ??_GCBackdropVisualImage@@UEAAPEAXI@Z @ 0x180025720 (--_GCBackdropVisualImage@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ @ 0x180025764 (--1-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEAA@XZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18004209C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?clear_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180045458 (-clear_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004582C (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800A708C (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x1800A9DB8 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@0@QEAU10@AEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@0@@Z @ 0x1800C0048 (--$_Destroy_range@V-$allocator@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@YAXP.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800DC75C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CBackdropVisualImage::~CBackdropVisualImage(CBackdropVisualImage *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  void **v8; // rbx
  void *v9; // rcx
  bool v10; // zf
  char v11; // [rsp+30h] [rbp+8h] BYREF
  char v12; // [rsp+38h] [rbp+10h] BYREF

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
  v4 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v11, word_18033C470);
  v5 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v12, "BVI-Destroy");
  CBackdropVisualImage::LogEtwEvent(this, v5, v4);
  v6 = *((_QWORD *)this + 245);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>(v6, *((_QWORD *)this + 246));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 245),
      (*((_QWORD *)this + 247) - *((_QWORD *)this + 245)) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 245) = 0LL;
    *((_QWORD *)this + 246) = 0LL;
    *((_QWORD *)this + 247) = 0LL;
  }
  v7 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size((char *)this + 1904);
  if ( v7 )
    detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
      (char *)this + 1904,
      0LL,
      v7);
  detail::pointer_buffer_impl<CBlurredBackdropCache *>::~pointer_buffer_impl<CBlurredBackdropCache *>((_BYTE *)this + 1904);
  v8 = (void **)((char *)this + 1792);
  if ( (__int64)(*((_QWORD *)this + 225) - *((_QWORD *)this + 224)) >> 4 )
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 1792,
      0LL);
  v9 = *v8;
  v10 = *((_QWORD *)this + 224) == (_QWORD)this + 1816;
  *v8 = 0LL;
  if ( v10 )
    v9 = 0LL;
  operator delete(v9);
  CCachedVisualImage::~CCachedVisualImage(this);
}
