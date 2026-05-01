/*
 * XREFs of CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x180497F44
 * Callers:
 *     ?LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z @ 0x180498CE0 (-LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x18049800C (CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___--CIconLoadingNotifi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIconLoadingNotificationCallback_CreateInstance__lambda_6825ce5d1ace0209a4941c0102e86eff_(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  void *v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v7 = 0LL;
    goto LABEL_6;
  }
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___(
                                                             v5,
                                                             a1);
  v7 = v6;
  if ( !v6 )
  {
LABEL_6:
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 85LL;
    goto LABEL_7;
  }
  v8 = (**v6)(v6, &GUID_09bd08f6_5805_4a9c_b795_a08c46164aea, a3);
  v9 = v8;
  if ( v8 >= 0 )
    goto LABEL_8;
  v10 = (unsigned int)v8;
  v11 = 86LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
    (const char *)v10);
LABEL_8:
  if ( v7 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v7)[2])(v7);
  return v9;
}
