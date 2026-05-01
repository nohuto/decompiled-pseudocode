/*
 * XREFs of ?GetScaleFactor@CWinRTApplicationView@@UEAAJPEAI@Z @ 0x1803144B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetScaleFactor(CWinRTApplicationView *this, unsigned int *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int ScaleFactorForWindow; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 100;
  v11 = 0LL;
  v3 = *((_QWORD *)this + 26);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  ScaleFactorForWindow = v4(v3, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v11);
  v6 = ScaleFactorForWindow;
  if ( ScaleFactorForWindow >= 0 )
  {
    ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, &v12);
    v6 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow >= 0 )
    {
      ScaleFactorForWindow = GetScaleFactorForWindow(v12, &v10);
      v6 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow >= 0 )
      {
        *a2 = v10;
        v6 = 0;
        goto LABEL_9;
      }
      v7 = 368LL;
    }
    else
    {
      v7 = 365LL;
    }
  }
  else
  {
    v7 = 362LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return v6;
}
