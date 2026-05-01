/*
 * XREFs of _lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator() @ 0x1807417A0
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1807421B4 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_0a485157c2c67738ecfb2b6d756fa5a5_::operator()(
        __int64 **a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 v9; // r14
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, __int64 *, _QWORD, _QWORD); // rsi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v16 = 0LL;
  v9 = *v4;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)*v4 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
  v11 = v10(v9, *a1[1], a2, 64LL, &v16, 0LL, 0LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 40LL))(v16, a3);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, a4);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v12 = 0;
        goto LABEL_9;
      }
      v13 = 520LL;
    }
    else
    {
      v13 = 519LL;
    }
  }
  else
  {
    v13 = 518LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v11);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v16);
  return v12;
}
