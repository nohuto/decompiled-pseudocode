/*
 * XREFs of _lambda_e8838413ede5bd20b829d342239a0037_::operator() @ 0x18003C128
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e8838413ede5bd20b829d342239a0037___::Run @ 0x18003C100 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e8838413ede5bd20b829d342239a0037___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e8838413ede5bd20b829d342239a0037_::operator()(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 296LL) + 56LL))(*(_QWORD *)(*(_QWORD *)a1 + 296LL));
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
