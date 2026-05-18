/*
 * XREFs of sub_1800E4DA0 @ 0x1800E4DA0
 * Callers:
 *     sub_1800E4630 @ 0x1800E4630 (sub_1800E4630.c)
 *     sub_1800E502C @ 0x1800E502C (sub_1800E502C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_180020FCC @ 0x180020FCC (sub_180020FCC.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800E4DA0(__int64 a1, __int64 *a2, __int64 a3, char a4, int a5)
{
  int v8; // eax
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 *v12; // rbx
  int v13; // eax
  ULONG_PTR v14; // r15
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h]
  __int64 v23[3]; // [rsp+68h] [rbp-98h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  char *v25; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v26; // [rsp+138h] [rbp+38h]
  char v27[16]; // [rsp+140h] [rbp+40h] BYREF
  int v28; // [rsp+150h] [rbp+50h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v19 = a2;
  if ( (a4 & 1) != 0 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 80LL))(a3, v27);
    v8 = v28;
    if ( v28 == 44 )
    {
      v21[0] = 46;
    }
    else
    {
      if ( v28 == 39 )
        v8 = 41;
      v21[0] = v8;
    }
    v21[1] = 8;
    v21[3] = a5;
    v21[2] = 0;
    v18 = 0LL;
    v20 = 0LL;
    v9 = *(_QWORD *)(a1 + 80);
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      while ( v10 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
        if ( v11 == v10 )
        {
          v20 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    sub_180020FCC(v23, (__int64 *)&v20);
    sub_180010910((__int64)&v20);
    sub_1800DA968(v23[0], &v19);
    v12 = v19;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, _DWORD *, __int64 *))(*v19 + 56))(v19, a3, v21, &v18);
    v14 = v13;
    sub_1800DD668(v23[0], v13);
    if ( (v14 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v14;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v15 = sub_18002B9EC(a1, (__int64 *)&v25);
    if ( (unsigned __int64)v15[3] >= 0x10 )
      v15 = (__int64 *)*v15;
    sub_180011AC0(v18, (const char *)v15);
    if ( v26 >= 0x10 )
      sub_180010884(v25, v26 + 1);
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
    sub_180010910((__int64)v23);
    *a2 = 0LL;
    if ( a2 == &v18 )
    {
      v16 = v18;
    }
    else
    {
      *a2 = v18;
      v16 = 0LL;
    }
    if ( v16 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
