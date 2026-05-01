/*
 * XREFs of ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x180593060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1805782A8 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z @ 0x18059171C (-CalcWidthForDesktopCount@CVirtualDesktopContainerElement@@IEAAHH@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CVirtualDesktopContainerElement::v_LayoutChildren(CVirtualDesktopContainerElement *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  LONG v4; // r8d
  __int64 v5; // rax
  int v6; // r10d
  int v7; // ecx
  int v8; // r14d
  LONG left; // r9d
  LANGID ThreadUILanguage_0; // ax
  int v11; // ebx
  int v12; // eax
  LONG v13; // eax
  __int64 *v14; // rsi
  __int64 *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19[2]; // [rsp+40h] [rbp-40h] BYREF
  LONG v20; // [rsp+50h] [rbp-30h] BYREF
  LONG top; // [rsp+54h] [rbp-2Ch]
  int v22; // [rsp+58h] [rbp-28h]
  LONG bottom; // [rsp+5Ch] [rbp-24h]
  struct tagRECT rc; // [rsp+60h] [rbp-20h] BYREF

  if ( *((_QWORD *)this + 100) )
  {
    v17 = *((_QWORD *)this + 30);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, &v17, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
    v2 = (__int64 *)*((_QWORD *)this + 11);
    v3 = *v2;
    v4 = *((_DWORD *)this + 15);
    v20 = *((_DWORD *)this + 14);
    top = v4;
    v22 = v20 + 1;
    bottom = v4 + 1;
    (*(void (__fastcall **)(__int64 *, LONG *, _QWORD, _QWORD))(v3 + 24))(v2, &v20, 0LL, 0LL);
    v5 = ***((_QWORD ***)this + 99);
    if ( *((_QWORD *)this + 100) == 1LL )
    {
      (*(void (**)(void))(v5 + 144))();
    }
    else
    {
      (*(void (**)(void))(v5 + 136))();
      (*(void (__fastcall **)(char *, struct tagRECT *))(*((_QWORD *)this + 28) + 32LL))((char *)this + 224, &rc);
      InflateRect(&rc, -*((_DWORD *)this + 99), 0);
      rc.left += *((_DWORD *)this + 78);
      rc.right -= *((_DWORD *)this + 79);
      rc.top += *((_DWORD *)this + 80);
      rc.bottom -= *((_DWORD *)this + 81);
      v6 = MulDiv(
             *((_DWORD *)this + 82),
             *((_DWORD *)this + 64) - *((_DWORD *)this + 62),
             *((_DWORD *)this + 65) - *((_DWORD *)this + 63));
      v7 = *((_DWORD *)this + 83);
      v8 = v7 + v6;
      left = rc.left;
      if ( (rc.right - rc.left) / 2 - (*((_DWORD *)this + 200) * (v7 + v6) - v7) / 2 + rc.left > rc.left )
        left = (rc.right - rc.left) / 2 - (*((_DWORD *)this + 200) * (v7 + v6) - v7) / 2 + rc.left;
      v20 = left;
      top = rc.top;
      v22 = left + v6;
      bottom = rc.bottom;
      ThreadUILanguage_0 = GetThreadUILanguage_0();
      if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
      {
        v11 = v20 - *((_DWORD *)this + 99);
        v12 = CVirtualDesktopContainerElement::CalcWidthForDesktopCount(this, *((_DWORD *)this + 200));
        v13 = v11 + v11 + v12 - v22;
        v22 += v13 - v20;
        v20 = v13;
        v8 = -v8;
      }
      v14 = (__int64 *)*((_QWORD *)this + 99);
      v15 = &v14[*((_QWORD *)this + 100)];
      while ( v14 != v15 )
      {
        v17 = *v14;
        v16 = v17;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
        (*(void (__fastcall **)(__int64, LONG *))(*(_QWORD *)v16 + 104LL))(v16, &v20);
        v20 += v8;
        v22 += v8;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
        ++v14;
      }
    }
    v18 = 0LL;
    if ( *((_QWORD *)this + 10) )
    {
      if ( (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 10,
                  &v18) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 80LL))(v18);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
  }
}
