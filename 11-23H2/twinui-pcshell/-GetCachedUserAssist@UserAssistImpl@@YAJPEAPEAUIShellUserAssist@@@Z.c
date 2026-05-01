/*
 * XREFs of ?GetCachedUserAssist@UserAssistImpl@@YAJPEAPEAUIShellUserAssist@@@Z @ 0x18005D264
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18005D1D0 (-Run@-$CTaskWrapper@V_lambda_23c98c0562f226dcd27081461ca7c8fb_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UserAssistImpl::GetCachedUserAssist(UserAssistImpl *this, struct IShellUserAssist **a2)
{
  struct IShellUserAssist *v2; // rbx
  unsigned int v3; // edi
  signed __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  struct IShellUserAssist *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = UserAssistImpl::g_cachedUserAssist;
  v3 = 0;
  if ( !UserAssistImpl::g_cachedUserAssist )
  {
    if ( CoCreateInstance(
           &GUID_dd313e04_feff_11d1_8ecd_0000f87a470c,
           0LL,
           0x403u,
           &GUID_49b36d57_5fd2_45a7_981b_06028d577a47,
           (LPVOID *)&v9) < 0 )
    {
      v5 = -1LL;
      v9 = -1LL;
    }
    else
    {
      SHPinDllOfCLSID(&GUID_dd313e04_feff_11d1_8ecd_0000f87a470c);
      v5 = v9;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&UserAssistImpl::g_cachedUserAssist, v5, 0LL)
      && v9 != -1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v2 = UserAssistImpl::g_cachedUserAssist;
  }
  if ( v2 == (struct IShellUserAssist *)-1LL )
    v2 = 0LL;
  v10 = v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    *(_QWORD *)this = v2;
  }
  else
  {
    v3 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\uem.h",
      (const char *)0x80004005LL,
      v7);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return v3;
}
