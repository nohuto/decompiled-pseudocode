/*
 * XREFs of ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180019650
 * Callers:
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800129CC (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1801064AC (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x1800195B8 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x18001A254 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18001A784 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x18001A7C8 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18001B944 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x18001BA88 (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003749C (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___::_lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___ @ 0x180106438 (wil--details--lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___--_lambda_call__lambda_4014.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CWindowBorder::CreateBorderStructure(CWindowBorder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  LONG v4; // ecx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HANDLE, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, struct Windows::UI::Composition::ISpriteVisual **); // rdi
  struct Windows::UI::Composition::ISpriteVisual *v14; // rbx
  __int64 (__fastcall *v15)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rdi
  int v16; // eax
  struct Windows::UI::Composition::ISpriteVisual *v17; // rbx
  __int64 (__fastcall *v18)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rdi
  int v19; // eax
  struct Windows::UI::Composition::ISpriteVisual *v20; // rbx
  __int64 (__fastcall *v21)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rdi
  int v22; // eax
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v24)(_QWORD, GUID *, __int64 *); // rdi
  int v25; // eax
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  int inserted; // eax
  CVisual *v30; // rcx
  __int64 (__fastcall ***v31)(_QWORD, _QWORD, _QWORD); // rcx
  struct Windows::UI::Composition::ISpriteVisual *v32; // rcx
  struct CBaseGeometryProxy *v33; // rcx
  __int64 v35; // rdx
  HANDLE v36; // rcx
  bool v37; // cc
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // [rsp+20h] [rbp-59h]
  __int64 v47; // [rsp+30h] [rbp-49h] BYREF
  struct CBaseGeometryProxy *v48; // [rsp+38h] [rbp-41h] BYREF
  __int64 v49; // [rsp+40h] [rbp-39h] BYREF
  __int64 v50; // [rsp+48h] [rbp-31h] BYREF
  __int64 v51; // [rsp+50h] [rbp-29h] BYREF
  struct Windows::UI::Composition::ISpriteVisual *v52; // [rsp+58h] [rbp-21h] BYREF
  CVisual *v53; // [rsp+60h] [rbp-19h] BYREF
  __int64 (__fastcall ***v54)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-11h] BYREF
  struct tagPOINT v55[2]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v56; // [rsp+80h] [rbp+7h] BYREF
  char v57; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  HANDLE hObject; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v60; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v61; // [rsp+F8h] [rbp+7Fh] BYREF

  v53 = 0LL;
  v54 = 0LL;
  v52 = 0LL;
  hObject = 0LL;
  v2 = DCompositionCreateSharedVisualHandle(&hObject);
  v3 = v2;
  if ( v2 < 0 )
  {
    v35 = 77LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v2,
      v46);
    v36 = hObject;
    v37 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
    goto LABEL_31;
  }
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v53);
  v2 = CVisual::CreateFromSharedHandle(hObject, &v53);
  v3 = v2;
  if ( v2 < 0 )
  {
    v35 = 80LL;
    goto LABEL_27;
  }
  *((_BYTE *)v53 + 92) |= 8u;
  v4 = *((_DWORD *)this + 77);
  v55[0].x = *((_DWORD *)this + 76);
  v55[0].y = v4;
  CVisual::SetOffset(v53, v55);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v53 + 2) + 16LL) + 16LL) + 304LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v53 + 2) + 16LL) + 16LL),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v53 + 2) + 16LL) + 24LL));
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL);
  v60 = 0LL;
  v6 = **v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
  v7 = v6(v5, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, &v60);
  v3 = v7;
  if ( v7 < 0 )
  {
    v38 = 90LL;
  }
  else
  {
    v8 = v60;
    v9 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v60 + 232LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
    v7 = v9(
           v8,
           hObject,
           &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
           (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v54);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v61 = 0LL;
      v10 = **v5;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v61);
      v11 = v10(v5, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, &v61);
      v3 = v11;
      if ( v11 < 0 )
      {
        v39 = 95LL;
      }
      else
      {
        v12 = v61;
        v13 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ISpriteVisual **))(*(_QWORD *)v61 + 176LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
        v11 = v13(v12, &v52);
        v3 = v11;
        if ( v11 >= 0 )
        {
          v47 = 0LL;
          v14 = v52;
          v15 = **(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))v52;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
          v16 = v15(v14, &GUID_3052b611_56c3_4c3e_8bf3_f6e1ad473f06, &v47);
          v3 = v16;
          if ( v16 < 0 )
          {
            v40 = 100LL;
          }
          else
          {
            v16 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v47 + 88LL))(
                    v47,
                    _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0]);
            v3 = v16;
            if ( v16 >= 0 )
            {
              v49 = 0LL;
              v17 = v52;
              v18 = **(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))v52;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
              v19 = v18(v17, &GUID_30be580d_f4b6_4ab7_80dd_3738cbac9f2c, &v49);
              v3 = v19;
              if ( v19 < 0 )
              {
                v41 = 105LL;
              }
              else
              {
                v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v49 + 56LL))(v49, 0LL);
                v3 = v19;
                if ( v19 >= 0 )
                {
                  v50 = 0LL;
                  v20 = v52;
                  v21 = **(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))v52;
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                  v22 = v21(v20, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, &v50);
                  v3 = v22;
                  if ( v22 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x6E,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                      (const char *)(unsigned int)v22,
                      v46);
LABEL_46:
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                    goto LABEL_47;
                  }
                  v51 = 0LL;
                  v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v54;
                  v24 = **v54;
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                  v25 = v24(v23, &GUID_a1bea8ba_d726_4663_8129_6b5e7927ffa6, &v51);
                  v3 = v25;
                  if ( v25 < 0 )
                  {
                    v42 = 113LL;
                  }
                  else
                  {
                    v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 56LL))(v51, v50);
                    v3 = v25;
                    if ( v25 >= 0 )
                    {
                      v48 = 0LL;
                      v26 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
                      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v48);
                      v27 = CCompositor::CreateProxy<CRectangleGeometryProxy>(v26, &v48);
                      v3 = v27;
                      if ( v27 < 0 )
                      {
                        v43 = 118LL;
                      }
                      else
                      {
                        CWindowBorder::SetClipRectangle(this, v48, (const struct tagRECT *)this + 19);
                        v27 = CWindowBorder::CreateAndAttachBorderBrush(this, v52);
                        v3 = v27;
                        if ( v27 >= 0 )
                        {
                          v55[0] = (struct tagPOINT)&v48;
                          v55[1] = (struct tagPOINT)this;
                          v56 = *(_OWORD *)&v55[0].x;
                          v57 = 1;
                          v28 = *((_QWORD *)this + 32);
                          if ( v28 )
                          {
                            inserted = CVisualProxy::SetClip(*(CVisualProxy **)(v28 + 16), v48);
                            v3 = inserted;
                            if ( inserted < 0 )
                            {
                              v44 = 139LL;
                            }
                            else
                            {
                              inserted = CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 32), 1);
                              v3 = inserted;
                              if ( inserted >= 0 )
                                goto LABEL_19;
                              v44 = 140LL;
                            }
LABEL_58:
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)v44,
                              (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                              (const char *)(unsigned int)inserted,
                              v46);
                            wil::details::lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___::_lambda_call__lambda_401445e683f102b3b9b979d738c66a4a___(&v56);
                            goto LABEL_53;
                          }
LABEL_19:
                          inserted = VisualCollection::InsertRelative(
                                       (CWindowBorder *)((char *)this + 32),
                                       v53,
                                       0LL,
                                       1,
                                       v46);
                          v3 = inserted;
                          if ( inserted >= 0 )
                          {
                            v30 = v53;
                            v53 = 0LL;
                            v55[0] = *(struct tagPOINT *)((char *)this + 248);
                            *((_QWORD *)this + 31) = v30;
                            Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v55);
                            v31 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v54;
                            v54 = 0LL;
                            v55[0] = *(struct tagPOINT *)((char *)this + 272);
                            *((_QWORD *)this + 34) = v31;
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v55);
                            v32 = v52;
                            v52 = 0LL;
                            v55[0] = *(struct tagPOINT *)((char *)this + 280);
                            *((_QWORD *)this + 35) = v32;
                            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v55);
                            v33 = v48;
                            v48 = 0LL;
                            v55[0] = *(struct tagPOINT *)((char *)this + 264);
                            *((_QWORD *)this + 33) = v33;
                            Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v55);
                            CWindowBorder::SetBorderModeForContentClip(this);
                            if ( v48 )
                            {
                              v45 = *((_QWORD *)this + 32);
                              if ( v45 )
                              {
                                CVisualProxy::SetClip(*(CVisualProxy **)(v45 + 16), 0LL);
                                CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 32), 0);
                              }
                            }
                            Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v48);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v50);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v61);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
                            if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                              CloseHandle(hObject);
                            v3 = 0;
                            goto LABEL_24;
                          }
                          v44 = 144LL;
                          goto LABEL_58;
                        }
                        v43 = 122LL;
                      }
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v43,
                        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                        (const char *)(unsigned int)v27,
                        v46);
LABEL_53:
                      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v48);
                      goto LABEL_54;
                    }
                    v42 = 114LL;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v42,
                    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                    (const char *)(unsigned int)v25,
                    v46);
LABEL_54:
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v51);
                  goto LABEL_46;
                }
                v41 = 106LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v41,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
                (const char *)(unsigned int)v19,
                v46);
LABEL_47:
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
              goto LABEL_39;
            }
            v40 = 101LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v40,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
            (const char *)(unsigned int)v16,
            v46);
LABEL_39:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v47);
          goto LABEL_40;
        }
        v39 = 96LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v39,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
        (const char *)(unsigned int)v11,
        v46);
LABEL_40:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v61);
      goto LABEL_30;
    }
    v38 = 91LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v38,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v7,
    v46);
LABEL_30:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v60);
  v36 = hObject;
  v37 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_31:
  if ( v37 )
    CloseHandle(v36);
LABEL_24:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v52);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v54);
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v53);
  return v3;
}
