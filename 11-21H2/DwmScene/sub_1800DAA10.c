/*
 * XREFs of sub_1800DAA10 @ 0x1800DAA10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800DAA10(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  ULONG_PTR v5; // rbx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-79h] BYREF
  int v9; // [rsp+28h] [rbp-71h] BYREF
  __int64 v10; // [rsp+30h] [rbp-69h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-59h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v9 = -1;
  v8 = 0LL;
  v1 = sub_1800DA968(a1, &v10);
  (**(void (__fastcall ***)(_QWORD, void *, __int64 *))*v1)(*v1, &unk_1801BB810, &v8);
  v2 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = v8;
  if ( v8 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 104LL))(v8, &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v5;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v3 = v8;
  }
  v6 = v9;
  if ( v3 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v6;
}
