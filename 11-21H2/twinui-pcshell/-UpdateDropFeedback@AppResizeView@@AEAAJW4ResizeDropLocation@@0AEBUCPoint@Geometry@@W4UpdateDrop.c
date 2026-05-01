/*
 * XREFs of ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x18051FDE0
 * Callers:
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18051E7C4 (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x18051FBDC (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIObjectArray@@@?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@@Details@12@@Z @ 0x180517944 (--$As@UIObjectArray@@@-$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x18051EBEC (-MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z.c)
 *     ?MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction@@@Z @ 0x18051EC50 (-MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18051F03C (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 *     ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x180520204 (-UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18052D784 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppResizeView::UpdateDropFeedback(__int64 a1, int a2, int a3, int *a4, char a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  const struct _GUID *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  char v14; // r15
  unsigned int v15; // esi
  int v16; // r15d
  __int64 v17; // rbx
  int (__fastcall *v18)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 v19; // rbx
  int (__fastcall *v20)(__int64, GUID *, __int64 *); // rdi
  unsigned int v21; // edi
  int v22; // ebx
  bool v23; // zf
  __int64 v24; // rax
  int v25; // eax
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v27)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // rcx
  __int64 *v31; // [rsp+30h] [rbp-50h] BYREF
  void *v32; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-38h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v37; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  LODWORD(v31) = a2;
  v33 = 0LL;
  v8 = AppResizeView::QueryResizeApps(a1, a3, (__int64)a4, &v33);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_39;
  }
  v36 = 0LL;
  v10 = Microsoft::WRL::ComPtr<IAppLayoutOperation>::As<IObjectArray>(&v33, &v36);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
    v12 = CDropFeedbackList_CreateInstance(v11, &v32);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v14 = a5;
      if ( (a5 & 1) != 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 24LL))(v36, &v34);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 398LL;
          goto LABEL_32;
        }
        v15 = 0;
        if ( v34 )
        {
          v16 = (int)v31;
          do
          {
            v31 = 0LL;
            v17 = v36;
            v18 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v36 + 32LL);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v31);
            if ( v18(v17, v15, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, (__int64 *)&v31) >= 0 )
            {
              v35 = 0LL;
              v19 = (__int64)v31;
              v20 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*v31 + 32);
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v35);
              if ( v20(v19, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v35) >= 0 )
              {
                v21 = v35;
                v37 = 0LL;
                v22 = 16;
                if ( a3 == v16 )
                  v22 = 256;
                v23 = (*(unsigned int (__fastcall **)(__int64 *))(*v31 + 88))(v31) == 0;
                v24 = *v31;
                if ( v23 )
                {
                  (*(void (__fastcall **)(__int64 *, _QWORD, struct tagRECT *))(v24 + 56))(v31, 0LL, &v37);
                  v25 = v37.left - v37.right;
                  if ( a3 )
                    v25 = v37.right - v37.left;
                  v37.left += v25;
                  v37.right += v25;
                  v22 |= 0x200u;
                }
                else
                {
                  (*(void (__fastcall **)(__int64 *, _QWORD, struct tagRECT *))(v24 + 72))(v31, 0LL, &v37);
                }
                (*(void (__fastcall **)(void *, _QWORD, _QWORD, struct tagRECT *, int))(*(_QWORD *)v32 + 88LL))(
                  v32,
                  v21,
                  0LL,
                  &v37,
                  v22);
              }
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v35);
            }
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v31);
            ++v15;
          }
          while ( v15 < v34 );
          v14 = a5;
        }
      }
      if ( (v14 & 2) != 0
        && (v37 = 0LL,
            AppResizeView::MakeDragGutterRect((AppResizeView *)a1, *a4, &v37),
            v12 = (*(__int64 (__fastcall **)(void *, __int64, __int64, struct tagRECT *, _DWORD))(*(_QWORD *)v32 + 88LL))(
                    v32,
                    100LL,
                    2LL,
                    &v37,
                    0),
            v9 = v12,
            v12 < 0) )
      {
        v13 = 453LL;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 56) + 32LL))(
                *(_QWORD *)(a1 + 56),
                v32,
                0LL);
        v9 = v12;
        if ( v12 >= 0 )
        {
          v26 = v33;
          v27 = (*v33)[6];
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 72));
          v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))v27)(
                  v26,
                  a1 + 72);
          v9 = v12;
          if ( v12 >= 0 )
          {
            if ( (v14 & 4) != 0 && (int)AppResizeView::MapResizeDropLocationToResizeAction(v28, a3, &v31) >= 0 )
              AppResizeView::UpdateUIADropEffect(a1, v33, (unsigned int)v31);
            v9 = 0;
            goto LABEL_37;
          }
          v13 = 457LL;
        }
        else
        {
          v13 = 456LL;
        }
      }
    }
    else
    {
      v13 = 392LL;
    }
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v12);
LABEL_37:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v32);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x185,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)v10);
LABEL_38:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
LABEL_39:
  v29 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v29)[2])(v29);
  }
  return v9;
}
