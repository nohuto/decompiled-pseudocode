/*
 * XREFs of ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x1805EF4AC
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1805F0EE8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1805F0A80 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

void __fastcall CDragVisual::_OnAppWindowSizeChanged(CDragVisual *this, void *a2)
{
  __int64 v4; // rsi
  int (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h] BYREF
  HWND hWnd; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12[2]; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+68h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 279) && *((_QWORD *)this + 10) )
  {
    v9 = *((_QWORD *)this + 9);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v12, &v9, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    v4 = *((_QWORD *)this + 10);
    v10 = 0LL;
    v5 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
    v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v6);
    if ( v5(v4, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v6) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v10 + 32LL))(v10, &hWnd) >= 0 )
    {
      Rect = 0LL;
      GetWindowRect(hWnd, &Rect);
      if ( !EqualRect((const RECT *)this + 14, &Rect) )
      {
        if ( *((_QWORD *)this + 13) == *((_QWORD *)this + 14) )
        {
          CopyRect((LPRECT)this + 14, &Rect);
          if ( !*((_BYTE *)this + 277) )
            CDragVisual::_UpdateThumbnailRect(this, *((unsigned int *)this + 37));
          v7 = (__int64 *)*((_QWORD *)this + 13);
          if ( v7 )
          {
            v8 = *v7;
            LODWORD(v9) = *((_DWORD *)this + 58) - *((_DWORD *)this + 56);
            HIDWORD(v9) = *((_DWORD *)this + 59) - *((_DWORD *)this + 57);
            (*(void (__fastcall **)(__int64 *, void *, __int64 *, char *, _DWORD, _QWORD))(v8 + 120))(
              v7,
              a2,
              &v9,
              (char *)this + 240,
              0,
              0LL);
          }
        }
        else
        {
          (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 64LL))(
            (char *)this + 24,
            *((_QWORD *)this + 10));
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v12);
  }
}
