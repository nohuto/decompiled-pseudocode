/*
 * XREFs of ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18051E8D0
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x18051F400 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18030318C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x18051EBEC (-MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18052D784 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18052E7BC (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppResizeView::InitDropFeedback(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  char v6; // si
  const struct _GUID *v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  IUnknown **p_punk; // [rsp+20h] [rbp-69h]
  IUnknown *punk; // [rsp+30h] [rbp-59h] BYREF
  void *v16; // [rsp+38h] [rbp-51h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-49h] BYREF
  char v18; // [rsp+50h] [rbp-39h]
  _BYTE v19[16]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v20; // [rsp+70h] [rbp-19h]
  _BYTE v21[40]; // [rsp+78h] [rbp-11h] BYREF
  struct tagRECT v22; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), (char *)this + 100);
  *((_DWORD *)this + 37) = 10 * *((_DWORD *)this + 29) / 100;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
  p_punk = &punk;
  Instance = CDropFeedback_CreateInstance(*((_QWORD *)this + 2), (char *)this + 100, 0LL);
  v5 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_20;
  }
  v17[1] = (__int64)&punk;
  v6 = 1;
  v18 = 1;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  v8 = CDropFeedbackList_CreateInstance(v7, &v16);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v17[0] = 0LL;
  v9 = *((_QWORD *)this + 9);
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 128LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v17);
  v11 = v10(v9, v17);
  v5 = v11;
  if ( v11 >= 0 )
  {
    while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v17[0] + 24LL))(v17[0], 1LL, v19) >= 0 )
    {
      LODWORD(p_punk) = 0;
      (*(void (__fastcall **)(void *, _QWORD, __int64, _BYTE *, IUnknown **))(*(_QWORD *)v16 + 64LL))(
        v16,
        (unsigned int)v20,
        v20,
        v21,
        p_punk);
    }
    v22 = 0LL;
    AppResizeView::MakeDragGutterRect(this, *(_DWORD *)a2, &v22);
    v11 = (*(__int64 (__fastcall **)(void *, __int64, __int64, struct tagRECT *, IUnknown **))(*(_QWORD *)v16 + 72LL))(
            v16,
            100LL,
            2LL,
            &v22,
            p_punk);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v11 = ((__int64 (__fastcall *)(IUnknown *, void *, _QWORD))punk->lpVtbl[1].AddRef)(punk, v16, 0LL);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v11 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[1].QueryInterface)(punk);
        v5 = v11;
        if ( v11 >= 0 )
        {
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 7, (__int64 *)&punk);
          v6 = 0;
          v5 = 0;
          goto LABEL_17;
        }
        v12 = 368LL;
      }
      else
      {
        v12 = 367LL;
      }
    }
    else
    {
      v12 = 364LL;
    }
  }
  else
  {
    v12 = 351LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)v11);
LABEL_17:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v17);
LABEL_18:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  if ( v6 )
    IUnknown_SetSite(punk, 0LL);
LABEL_20:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
  return v5;
}
