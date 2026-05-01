/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180030710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z @ 0x1800307A4 (-GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_23c98c0562f226dcd27081461ca7c8fb_>::Run(
        __int64 a1)
{
  __int64 v2; // rdi
  struct IShellUserAssist **v3; // rdx
  int CachedUserAssist; // eax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  CachedUserAssist = UserAssistImpl::GetCachedUserAssist((UserAssistImpl *)&v8, v3);
  if ( CachedUserAssist < 0 )
  {
    v5 = 137LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\uem.h",
      (const char *)(unsigned int)CachedUserAssist,
      v6);
    goto LABEL_3;
  }
  v6 = 0;
  CachedUserAssist = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, __int64))(*(_QWORD *)v8 + 24LL))(
                       v8,
                       &GUID_cebff5cd_ace2_4f4f_9178_9926f41749ea,
                       0LL,
                       v2);
  if ( CachedUserAssist < 0 )
  {
    v5 = 138LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
