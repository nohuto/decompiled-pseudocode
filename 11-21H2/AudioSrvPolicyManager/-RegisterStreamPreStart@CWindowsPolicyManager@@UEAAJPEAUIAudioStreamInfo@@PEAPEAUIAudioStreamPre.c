/*
 * XREFs of ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x18000BA40
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002B0C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000A580 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002A418 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::RegisterStreamPreStart(
        CWindowsPolicyManager *this,
        struct IAudioStreamInfo *a2,
        struct IAudioStreamPreStartContext **a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  int v7; // edi
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  CWindowsPolicyManager::Lock((__int64)this, &lpCriticalSection);
  *a3 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BF,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v7);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)v7;
  }
  v5[3] = 1;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioStreamPreStartContext>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v6 = &CAastPreStartContext::`vftable';
  *((_BYTE *)v6 + 16) = 0;
  v6[5] = 0;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 6) = 7LL;
  *((_WORD *)v6 + 12) = 0;
  v7 = CAastPreStartContext::RuntimeClassInitialize((CAastPreStartContext *)v6, a2);
  v8 = *(_QWORD *)v6;
  if ( v7 < 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(v8 + 16))(v6);
    goto LABEL_8;
  }
  v7 = (*(__int64 (__fastcall **)(_DWORD *, GUID *, struct IAudioStreamPreStartContext **))v8)(
         v6,
         &GUID_52004e04_018e_41fc_a946_f5027192635b,
         a3);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 < 0 )
    goto LABEL_8;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
