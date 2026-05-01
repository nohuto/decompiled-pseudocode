/*
 * XREFs of _lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator() @ 0x18002DF08
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___::Run @ 0x18002DE80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___--Run.c)
 * Callees:
 *     ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x18002DFC0 (--$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator()(_DWORD *a1)
{
  __int64 v1; // rdi
  BOOL result; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 632LL) + 160LL))(*(_QWORD *)(*(_QWORD *)a1 + 632LL));
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 608LL);
  IamTraceLogging::DropForeground<unsigned short const *,unsigned long,HWND__ * &,enum DropForegroundOptions const &>(
    &v5,
    &v4,
    v1 + 128,
    a1 + 2);
  result = ShowWindowAsync(*(HWND *)(*(_QWORD *)a1 + 128LL), 0);
  if ( !a1[2] )
    return ShowWindowAsync(*(HWND *)(*(_QWORD *)a1 + 128LL), 4);
  return result;
}
