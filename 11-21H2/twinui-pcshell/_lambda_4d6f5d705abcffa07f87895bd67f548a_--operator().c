/*
 * XREFs of _lambda_4d6f5d705abcffa07f87895bd67f548a_::operator() @ 0x18003D2F0
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_4d6f5d705abcffa07f87895bd67f548a___::RunTask @ 0x18003D2E0 (CMultitaskingViewTaskCallback__lambda_4d6f5d705abcffa07f87895bd67f548a___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4d6f5d705abcffa07f87895bd67f548a_::operator()(__int64 a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, __int64, GUID *, __int64 *); // rbx
  int v5; // ebx
  __int64 (__fastcall *v7)(__int64, __int64, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v4 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  if ( v4(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v11) < 0 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v8 = v7(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v11);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
        (const char *)(unsigned int)v8,
        v9);
      goto LABEL_4;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v11 + 48LL))(
           v11,
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 8),
           *(unsigned int *)(a1 + 16));
    if ( v5 < 0 )
      goto LABEL_4;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
  }
  v5 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return (unsigned int)v5;
}
