/*
 * XREFs of ?UpdateWindowContextVisibility@UwpWindowWrapperBase@@UEAAXW4AppModelVisibility@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180418800
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::UpdateWindowContextVisibility(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _BOOL8 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 256) + 232LL))(*(_QWORD *)(a1 + 256));
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
  {
    v6 = 1LL;
    if ( *(_DWORD *)(a1 + 460) != 4 )
      v6 = a2 != 0;
    result = (*(__int64 (__fastcall **)(__int64, _BOOL8))(*(_QWORD *)v5 + 112LL))(v5, v6);
    if ( (int)result < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x750,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)result,
        v7);
  }
  return result;
}
