/*
 * XREFs of ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18060B7D4
 * Callers:
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18060D2E0 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18060D3E0 (-FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x18060B350 (-AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z.c)
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x18060BD28 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall VirtualDesktopGestureContext::Commit(
        VirtualDesktopGestureContext *this,
        struct IVirtualDesktopGestureHandlerPrivate *a2,
        int a3,
        bool a4)
{
  struct IVirtualDesktopGestureHandlerPrivate *v5; // rdi
  int v7; // edx
  int v8; // r15d
  VirtualDesktopGestureContext *v9; // r10
  int *v10; // rcx
  int *v11; // r8
  int *v12; // rax
  int *v13; // r9
  int v14; // r9d
  int v15; // r11d
  int v16; // ebx
  double v17; // xmm1_8
  double v18; // xmm2_8
  double v19; // xmm3_8
  int v20; // eax
  unsigned int v21; // r12d
  bool v22; // zf
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rdi
  int (__fastcall *v28)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, __int64 *); // rbx
  __int64 (__fastcall **v29)(_QWORD, GUID *, __int64 *); // rax
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 (__fastcall **v34)(__int64, GUID *, _QWORD); // rax
  int v35; // eax
  __int64 (__fastcall **v36)(_QWORD, GUID *, __int64 *); // rax
  int v37; // eax
  __int64 v38; // rdx
  VirtualDesktopGestureWindow **v39; // rbx
  VirtualDesktopGestureWindow **v40; // r12
  int v41; // eax
  unsigned int v42; // edi
  __int64 v44; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  __int64 v46; // [rsp+40h] [rbp-40h] BYREF
  __int64 (__fastcall ***v47)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-38h] BYREF
  __int64 v48; // [rsp+50h] [rbp-30h] BYREF
  __int64 v49[3]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v51; // [rsp+B0h] [rbp+30h] BYREF
  struct IVirtualDesktopGestureHandlerPrivate *v52; // [rsp+B8h] [rbp+38h]

  v52 = a2;
  v5 = a2;
  v7 = -a3;
  if ( !*((_BYTE *)this + 66) )
    v7 = a3;
  VirtualDesktopGestureContext::AddVelocityToHistory(this, v7);
  v8 = 0;
  v9 = (VirtualDesktopGestureContext *)((char *)this + 164);
  v10 = (int *)((char *)this + 104);
  v11 = (int *)((char *)this + 104);
  if ( (char *)this + 104 != (char *)this + 164 )
  {
    v12 = (int *)((char *)this + 108);
    if ( (VirtualDesktopGestureContext *)((char *)this + 108) != v9 )
    {
      v13 = (int *)((char *)this + 108);
      do
      {
        if ( v12 + 1 == (int *)v9 )
        {
          if ( *v12 >= *v10 )
          {
            if ( *v12 >= *v11 )
              v11 = v12;
          }
          else
          {
            v10 = v13;
          }
        }
        else
        {
          v14 = v12[1];
          v15 = *v12;
          v16 = *v10;
          if ( v14 >= *v12 )
          {
            if ( v15 < v16 )
              v10 = v12;
            if ( v14 >= *v11 )
              v11 = v12 + 1;
          }
          else
          {
            if ( v14 < v16 )
              v10 = v12 + 1;
            if ( v15 >= *v11 )
              v11 = v12;
          }
          ++v12;
        }
        v13 = ++v12;
      }
      while ( v12 != (int *)v9 );
    }
  }
  v17 = (double)*((int *)this + 12);
  v18 = (double)(int)abs32(*v10) * 1000.0 / v17;
  v19 = (double)(int)abs32(*v11) * 1000.0 / v17;
  v20 = *((_DWORD *)this + 14);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v20 / (float)*((int *)this + 12)) & _xmm) <= 0.25 )
  {
    if ( v18 >= 0.2 && *v10 < 0 && v20 < 0 )
      goto LABEL_30;
    if ( v19 < 0.2 || *v11 <= 0 || v20 <= 0 )
      goto LABEL_53;
  }
  if ( v20 < 0 )
  {
LABEL_30:
    v21 = 4;
    v22 = *((_BYTE *)this + 63) == 0;
    goto LABEL_32;
  }
  v21 = 3;
  v22 = *((_BYTE *)this + 62) == 0;
LABEL_32:
  if ( !v22 )
  {
    v45 = 0LL;
    v23 = *(_QWORD *)this;
    v24 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)this
                                                                                                  + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v45);
    v25 = v24(v23, &v45);
    v26 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B7,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v25);
LABEL_62:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v45);
      return v26;
    }
    v44 = 0LL;
    v27 = *(_QWORD *)this;
    v28 = *(int (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, __int64 *))(**(_QWORD **)this + 64LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v44);
    if ( v28(v27, v45, v21, &v44) >= 0 )
    {
      v48 = 0LL;
      v29 = *v45;
      v48 = 0LL;
      v30 = (*v29)(v45, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v48);
      v26 = v30;
      if ( v30 < 0 )
      {
        v31 = 1469LL;
LABEL_60:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v31,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v30);
        goto LABEL_61;
      }
      LODWORD(v51) = 0;
      v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v48 + 56LL))(v48, &v51);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5BF,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v32);
      v33 = *(_QWORD *)this;
      if ( (_DWORD)v51 )
      {
        v47 = 0LL;
        v34 = *(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v33;
        v47 = 0LL;
        v35 = (*v34)(v33, &GUID_53f5ca0b_158f_4124_900c_057158060b27, &v47);
        v26 = v35;
        if ( v35 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5C4,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v35);
LABEL_48:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v47);
LABEL_61:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
          Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v44);
          goto LABEL_62;
        }
        v46 = 0LL;
        v36 = *v47;
        v46 = 0LL;
        v37 = (*v36)(v47, &GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d, &v46);
        v26 = v37;
        if ( v37 < 0 )
        {
          v38 = 1478LL;
LABEL_47:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v38,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v37);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
          goto LABEL_48;
        }
        v37 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v46 + 328LL))(v46, v44, 2LL);
        v26 = v37;
        if ( v37 < 0 )
        {
          v38 = 1479LL;
          goto LABEL_47;
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v47);
      }
      else
      {
        v30 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 72LL))(v33, v44);
        v26 = v30;
        if ( v30 < 0 )
        {
          v31 = 1483LL;
          goto LABEL_60;
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v48);
      v8 = -1;
      if ( v21 != 4 )
        v8 = 1;
    }
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v44);
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v45);
    v5 = v52;
  }
LABEL_53:
  v51 = *((_QWORD *)this + 1);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v51);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v49, &v51, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v51);
  v39 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v40 = &v39[*((_QWORD *)this + 10)];
  if ( v39 == v40 )
  {
LABEL_56:
    v42 = 0;
  }
  else
  {
    while ( 1 )
    {
      v41 = VirtualDesktopGestureWindow::Commit(*v39, v5, *((_DWORD *)this + 45), (float)v8, a4);
      v42 = v41;
      if ( v41 < 0 )
        break;
      ++v39;
      v5 = v52;
      if ( v39 == v40 )
        goto LABEL_56;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E2,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v41);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v49);
  return v42;
}
