/*
 * XREFs of ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1805D7280
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x1805D7DE0 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x1805D75B8 (-MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805E84D4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1805E94FC (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AppResizeView::InitDropFeedback(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  char v6; // r14
  const struct _GUID *v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  IUnknown *v13; // rbx
  IUnknown **p_punk; // [rsp+20h] [rbp-69h]
  IUnknown *punk; // [rsp+30h] [rbp-59h] BYREF
  void *v17; // [rsp+38h] [rbp-51h] BYREF
  __int64 v18; // [rsp+40h] [rbp-49h] BYREF
  void *v19; // [rsp+48h] [rbp-41h] BYREF
  char v20; // [rsp+50h] [rbp-39h]
  _BYTE v21[16]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v22; // [rsp+70h] [rbp-19h]
  _BYTE v23[40]; // [rsp+78h] [rbp-11h] BYREF
  struct tagRECT v24; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), (char *)this + 100);
  *((_DWORD *)this + 37) = 10 * *((_DWORD *)this + 29) / 100;
  punk = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  p_punk = &punk;
  Instance = CDropFeedback_CreateInstance(*((_QWORD *)this + 2), (char *)this + 100);
  v5 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_22;
  }
  v19 = &punk;
  v6 = 1;
  v20 = 1;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  v8 = CDropFeedbackList_CreateInstance(v7, &v17);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x164,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_20;
  }
  v18 = 0LL;
  v9 = *((_QWORD *)this + 9);
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 128LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
  v11 = v10(v9, &v18);
  v5 = v11;
  if ( v11 >= 0 )
  {
    while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v18 + 24LL))(v18, 1LL, v21) >= 0 )
    {
      LODWORD(p_punk) = 0;
      (*(void (__fastcall **)(void *, _QWORD, __int64, _BYTE *, IUnknown **))(*(_QWORD *)v17 + 64LL))(
        v17,
        (unsigned int)v22,
        v22,
        v23,
        p_punk);
    }
    v24 = 0LL;
    AppResizeView::MakeDragGutterRect(this, *(_DWORD *)a2, &v24);
    v11 = (*(__int64 (__fastcall **)(void *, __int64, __int64, struct tagRECT *, IUnknown **))(*(_QWORD *)v17 + 72LL))(
            v17,
            100LL,
            2LL,
            &v24,
            p_punk);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v11 = ((__int64 (__fastcall *)(IUnknown *, void *, _QWORD))punk->lpVtbl[1].AddRef)(punk, v17, 0LL);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v11 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[1].QueryInterface)(punk);
        v5 = v11;
        if ( v11 >= 0 )
        {
          v13 = punk;
          if ( *((IUnknown **)this + 7) != punk )
          {
            v19 = punk;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
            v19 = (void *)*((_QWORD *)this + 7);
            *((_QWORD *)this + 7) = v13;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
          }
          v6 = 0;
          v5 = 0;
          goto LABEL_19;
        }
        v12 = 376LL;
      }
      else
      {
        v12 = 375LL;
      }
    }
    else
    {
      v12 = 372LL;
    }
  }
  else
  {
    v12 = 359LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)v11);
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v18);
LABEL_20:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  if ( v6 )
    IUnknown_SetSite(punk, 0LL);
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&punk);
  return v5;
}
