/*
 * XREFs of sub_1800DFC90 @ 0x1800DFC90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180017748 @ 0x180017748 (sub_180017748.c)
 *     sub_18002E000 @ 0x18002E000 (sub_18002E000.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800DFC90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, void *, __int64 *); // rbx
  __int64 *v11; // rax
  int v12; // eax
  ULONG_PTR v13; // rbx
  int v14; // eax
  ULONG_PTR v15; // rbx
  int v16; // eax
  ULONG_PTR v17; // rbx
  void (__fastcall *v18)(_QWORD, __int64); // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  EXCEPTION_RECORD v28; // [rsp+120h] [rbp+20h] BYREF
  EXCEPTION_RECORD v29; // [rsp+1C0h] [rbp+C0h] BYREF
  void *retaddr; // [rsp+2B8h] [rbp+1B8h]

  sub_1800E0390(a1, v25);
  if ( v25[0] )
  {
    *(_DWORD *)(a4 + 36) = 3;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
    v24 = 0LL;
    v10 = *(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v9 + 24LL);
    v11 = sub_180017748((__int64 *)&v24);
    v12 = v10(v9, &unk_1801BBAB0, v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v13;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v23 = 0LL;
    v14 = (**v24)(v24, &unk_180128580, &v23);
    v15 = v14;
    if ( v14 < 0 )
    {
      memset(&v28, 0, sizeof(v28));
      v28.ExceptionCode = -532265403;
      v28.ExceptionAddress = retaddr;
      v28.NumberParameters = 1;
      v28.ExceptionInformation[0] = v15;
      RaiseFailFastException(&v28, 0LL, 0);
    }
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)a2 + 128LL))(
            a2,
            a3,
            v23,
            a4,
            0LL,
            a5);
    v17 = v16;
    if ( v16 < 0 )
    {
      memset(&v29, 0, sizeof(v29));
      v29.ExceptionCode = -532265403;
      v29.ExceptionAddress = retaddr;
      v29.NumberParameters = 1;
      v29.ExceptionInformation[0] = v17;
      RaiseFailFastException(&v29, 0LL, 0);
    }
    v18 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)sub_18002E000(a1, &v26) + 2);
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 368LL))(a1);
      v18(*a5, v19);
    }
    v20 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = (__int64)v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  return sub_180010910((__int64)v25);
}
