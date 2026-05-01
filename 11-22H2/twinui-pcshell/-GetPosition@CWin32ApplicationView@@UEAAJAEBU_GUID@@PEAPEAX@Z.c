/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E0330
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f1aebe5463bcf7efcbfa9532c210b711___ @ 0x1800E08F0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f1aebe5463bcf7efcbfa9532c210b711___.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::GetPosition(CWin32ApplicationView *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r14
  int v9; // edi
  __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-60h]
  CWin32ApplicationView *v13; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+38h] [rbp-50h]
  void **v15; // [rsp+48h] [rbp-40h]

  v4 = 0;
  *a3 = 0LL;
  v13 = this;
  v14 = (__int128)*a2;
  v15 = a3;
  v5 = 0LL;
  v12 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v11);
  v6 = v11;
  if ( v11 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 736LL);
    v7 = v5;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(*(_QWORD *)(v11 + 48) + 736LL));
    v12 = v5;
    v8 = v5;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
  }
  if ( v6 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v6);
    v7 = v8;
  }
  v9 = ShellPositionerHelpers::PerformCallbackOnView__lambda_f1aebe5463bcf7efcbfa9532c210b711___(v5, this, &v13);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v4;
}
