/*
 * XREFs of sub_1800DA800 @ 0x1800DA800
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DADE0 @ 0x1800DADE0 (sub_1800DADE0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DA800(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 result; // rax
  int v7; // r8d
  unsigned int v8; // ebx
  int v9; // r8d
  int v10; // r8d
  _QWORD *v11; // rax
  ULONG_PTR v12; // r14
  __int64 v13; // rcx
  unsigned int v14; // [rsp+30h] [rbp-89h] BYREF
  __int64 v15; // [rsp+38h] [rbp-81h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-79h] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]

  result = sub_1800DADE0();
  *a2 = 1;
  *a3 = 0;
  v7 = *(_DWORD *)(a1 + 420);
  if ( v7 != 1 )
  {
    v8 = 2;
    v9 = v7 - 2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v8 = 8;
        else
          v8 = 1;
      }
      else
      {
        v8 = 4;
      }
    }
    while ( 1 )
    {
      v14 = 0;
      v11 = (_QWORD *)sub_1800DA968(a1, &v15);
      v12 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)*v11 + 240LL))(
              *v11,
              10LL,
              v8,
              &v14);
      v13 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( (v12 & 0x80000000) != 0LL )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v12;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      result = v14;
      if ( v14 )
        break;
      if ( !--v8 )
        return result;
    }
    *a2 = v8;
    result = (unsigned int)(result - 1);
    *a3 = result;
  }
  return result;
}
