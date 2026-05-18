/*
 * XREFs of sub_1800E00E0 @ 0x1800E00E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002E000 @ 0x18002E000 (sub_18002E000.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800E00E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v9; // eax
  ULONG_PTR v10; // rbx
  void (__fastcall *v11)(_QWORD, __int64); // rbx
  __int64 v12; // rax
  _QWORD v14[2]; // [rsp+30h] [rbp-108h] BYREF
  __int128 v15; // [rsp+40h] [rbp-F8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-D8h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  sub_1800E0390(a1, v14);
  if ( v14[0] )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 192LL))(
           a2,
           a3,
           a4,
           0LL,
           a5);
    v10 = v9;
    if ( v9 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v10;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v11 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)sub_18002E000(a1, &v15) + 2);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
      v11(*a5, v12);
    }
  }
  return sub_180010910((__int64)v14);
}
