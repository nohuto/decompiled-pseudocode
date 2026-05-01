/*
 * XREFs of ?FrameRectChanged@CVirtualDesktopContainerElement@@UEAAXAEBUtagRECT@@@Z @ 0x1805918B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180576150 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 *     ??$As@UIVirtualDesktopItemElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805910DC (--$As@UIVirtualDesktopItemElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CVirtualDesktopContainerElement::FrameRectChanged(
        CVirtualDesktopContainerElement *this,
        const struct tagRECT *a2)
{
  _DWORD *v3; // rdi
  int v4; // r8d
  int v5; // r9d
  int v6; // r10d
  int v7; // r11d
  __int64 (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall ****v9)(_QWORD, GUID *, __int64 *); // r14
  int v10; // eax
  struct tagRECT v11; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+28h] BYREF

  v11 = *a2;
  v3 = (_DWORD *)((char *)this + 32);
  if ( !Geometry::operator==((_DWORD *)this + 8, &v11) )
  {
    *v3 = v4;
    v3[1] = v5;
    v3[2] = v6;
    v3[3] = v7;
    v8 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 72);
    v9 = &v8[*((_QWORD *)this + 73)];
    while ( v8 != v9 )
    {
      v14 = *v8;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
      v13 = 0LL;
      v10 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopItemElement>(&v14, &v13);
      if ( v10 >= 0 )
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v13 + 32LL))(v13, v3);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x156,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
          (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
      ++v8;
    }
    CMultitaskingViewElementBase::_LayoutChildren((_QWORD *)this - 27, 0, 0LL);
  }
}
