/*
 * XREFs of ?InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z @ 0x18051A350
 * Callers:
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x18051A63C (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18052D784 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18052E7BC (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::InitDropFeedback(WindowArrangementView *this, struct IUnknown *a2)
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
  IUnknown **p_punk; // [rsp+20h] [rbp-79h]
  IUnknown *punk; // [rsp+30h] [rbp-69h] BYREF
  void *v16[2]; // [rsp+38h] [rbp-61h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  __int128 v18; // [rsp+50h] [rbp-49h]
  char v19; // [rsp+60h] [rbp-39h]
  __int64 v20; // [rsp+70h] [rbp-29h] BYREF
  struct IUnknown *v21; // [rsp+80h] [rbp-19h]
  _BYTE v22[40]; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v23[40]; // [rsp+B0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15), v23);
  punk = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
  p_punk = &punk;
  Instance = CDropFeedback_CreateInstance(a2, v23, 0LL);
  v5 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FF,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_19;
  }
  v16[0] = &punk;
  v16[1] = this;
  v18 = *(_OWORD *)v16;
  v6 = 1;
  v19 = 1;
  v16[0] = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
  v8 = CDropFeedbackList_CreateInstance(v7, v16);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x408,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  v17 = 0LL;
  v9 = *((_QWORD *)this + 15);
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 128LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
  v11 = v10(v9, &v17);
  v5 = v11;
  if ( v11 >= 0 )
  {
    while ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, 5LL, &v20) >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20) == 4 )
      {
        (*(void (__fastcall **)(void *, __int64, __int64, _BYTE *))(*(_QWORD *)v16[0] + 72LL))(v16[0], 100LL, 1LL, v22);
      }
      else if ( !(unsigned int)SHIsSameObject(*((struct IUnknown **)this + 11), v21) )
      {
        LODWORD(p_punk) = 0;
        (*(void (__fastcall **)(void *, _QWORD, struct IUnknown *, _BYTE *, IUnknown **))(*(_QWORD *)v16[0] + 64LL))(
          v16[0],
          (unsigned int)v21,
          v21,
          v22,
          p_punk);
      }
    }
    v11 = ((__int64 (__fastcall *)(IUnknown *, void *, _QWORD))punk->lpVtbl[1].AddRef)(punk, v16[0], 0LL);
    v5 = v11;
    if ( v11 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 9);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&punk);
      *((_QWORD *)this + 9) = punk;
      v6 = 0;
      v5 = 0;
      goto LABEL_16;
    }
    v12 = 1060LL;
  }
  else
  {
    v12 = 1035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v11);
LABEL_16:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
LABEL_17:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
  if ( v6 )
  {
    IUnknown_SetSite(punk, 0LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 9);
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&punk);
  return v5;
}
