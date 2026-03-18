/*
 * XREFs of ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x18002B65C
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x180016E3C (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002AC70 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18002BBBC (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CDesktopTree::CleanTreeAndLockForRead(CDesktopTree *this)
{
  RTL_SRWLOCK *i; // rcx
  void *v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v8; // rdi
  __int64 v9; // rcx
  DWORD v10; // eax
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (RTL_SRWLOCK *)*((_QWORD *)this + 2); ; i = (RTL_SRWLOCK *)*((_QWORD *)this + 2) )
  {
    AcquireSRWLockShared(i + 84);
    v5 = *((_QWORD *)this + 8);
    v6 = 0;
    if ( !v5 || !*(_BYTE *)(v5 + 96) )
      break;
    v8 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(v8 + 1277) )
    {
      v6 = -2147467260;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147467260, 0x88u, 0LL);
      ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 672LL));
      return v6;
    }
    wil::details::ResetEvent(*(wil::details **)(v8 + 1264), v3);
    v9 = *(_QWORD *)(v8 + 656);
    *(_BYTE *)(v8 + 1279) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 120LL))(v9, 0LL, 0x100000LL);
    ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 672LL));
    v10 = WaitForSingleObjectEx(*(HANDLE *)(*((_QWORD *)this + 2) + 1264LL), 0xFFFFFFFF, 0);
    if ( v10 != 258 && v10 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA0C,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v11);
  }
  return v6;
}
