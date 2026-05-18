/*
 * XREFs of sub_1800F1278 @ 0x1800F1278
 * Callers:
 *     sub_1800EB240 @ 0x1800EB240 (sub_1800EB240.c)
 *     sub_1800F1050 @ 0x1800F1050 (sub_1800F1050.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18000BFAA (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 *     sub_180058850 @ 0x180058850 (sub_180058850.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DA9A8 @ 0x1800DA9A8 (sub_1800DA9A8.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800F05B4 @ 0x1800F05B4 (sub_1800F05B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall sub_1800F1278(_QWORD *a1, __int64 *a2, _QWORD *a3, unsigned int a4)
{
  size_t v4; // r14
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // eax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  ULONG_PTR v13; // rbx
  __int64 v14; // rcx
  void *v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  void *lpMem; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  int v28; // [rsp+120h] [rbp+20h] BYREF
  __int64 v29; // [rsp+124h] [rbp+24h]
  int v30; // [rsp+12Ch] [rbp+2Ch]
  __int64 v31; // [rsp+130h] [rbp+30h]
  void *retaddr; // [rsp+188h] [rbp+88h]

  v4 = a4;
  lpMem = a1;
  v25[1] = a3;
  v7 = sub_1800F05B4(*a2);
  sub_1800DA968(v7, v25);
  v31 = 0LL;
  v28 = v4;
  v29 = 3LL;
  v30 = 0x20000;
  v23 = 0LL;
  v8 = v25[0];
  v9 = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD, __int64 *))(*(_QWORD *)v25[0] + 24LL))(v25[0], &v28, 0LL, &v23);
  sub_1800DD668(v7, v9);
  v10 = sub_1800DA9A8(v7, &v22);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v10 + 376LL))(*v10, v23, *a3);
  v11 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = sub_1800DA9A8(v7, &v22);
  v13 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)*v12 + 112LL))(
          *v12,
          v23,
          0LL,
          1LL,
          0,
          &Src);
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_180058850(&lpMem, v4);
  v15 = lpMem;
  if ( v4 )
  {
    if ( lpMem )
    {
      if ( Src )
      {
        memcpy(lpMem, Src, v4);
        goto LABEL_13;
      }
      memset(lpMem, 0, v4);
    }
    *(_DWORD *)o__errno() = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_13:
  v16 = sub_1800DA9A8(v7, &v22);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v16 + 120LL))(*v16, v23, 0LL);
  v17 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v15 )
  {
    v18 = sub_18001D684();
    if ( v18 )
    {
      *(_DWORD *)(v18 + 8) = 1;
      *(_DWORD *)(v18 + 12) = 1;
      *(_QWORD *)v18 = &std::_Ref_count_resource<unsigned char *,std::default_delete<unsigned char [0]>>::`vftable';
      *(_QWORD *)(v18 + 16) = v15;
    }
    else
    {
      v18 = 0LL;
    }
    *a1 = v15;
    a1[1] = v18;
  }
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v20 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return a1;
}
