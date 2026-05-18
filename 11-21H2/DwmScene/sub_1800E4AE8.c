/*
 * XREFs of sub_1800E4AE8 @ 0x1800E4AE8
 * Callers:
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
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
__int64 *__fastcall sub_1800E4AE8(__int64 a1, __int64 *a2, __int64 a3, __int16 a4, int a5)
{
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 *v15; // rbx
  int v16; // eax
  ULONG_PTR v17; // r15
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h]
  int v24; // [rsp+40h] [rbp-C0h]
  int v25; // [rsp+44h] [rbp-BCh]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 *v27; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29[3]; // [rsp+68h] [rbp-98h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  char *v31; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v32; // [rsp+138h] [rbp+38h]
  char v33[16]; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v34; // [rsp+150h] [rbp+50h]
  unsigned int v35; // [rsp+154h] [rbp+54h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v27 = a2;
  if ( (a4 & 1) != 0 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 80LL))(a3, v33);
    v9 = v34;
    if ( v34 == 44 )
    {
      v9 = (a4 & 0x400 | 0xB800u) >> 10;
    }
    else if ( v34 == 39 )
    {
      v9 = 41;
    }
    v22 = v9;
    v10 = 4;
    if ( v35 > 1 )
      v10 = 6;
    v24 = 0;
    v23 = 9;
    if ( (a4 & 0x10) == 0 )
      v23 = v10;
    v11 = -1;
    if ( a5 )
      v11 = a5;
    v25 = v11;
    v21 = 0LL;
    v28 = 0LL;
    v12 = *(_QWORD *)(a1 + 80);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 8);
      while ( v13 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
        if ( v14 == v13 )
        {
          v28 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    sub_180020FCC(v29, (__int64 *)&v28);
    sub_180010910((__int64)&v28);
    sub_1800DA968(v29[0], &v27);
    v15 = v27;
    v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned int *, __int64 *))(*v27 + 56))(v27, a3, &v22, &v21);
    v17 = v16;
    sub_1800DD668(v29[0], v16);
    if ( (v17 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v17;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v18 = sub_18002B9EC(a1, (__int64 *)&v31);
    if ( (unsigned __int64)v18[3] >= 0x10 )
      v18 = (__int64 *)*v18;
    sub_180011AC0(v21, (const char *)v18);
    if ( v32 >= 0x10 )
      sub_180010884(v31, v32 + 1);
    (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
    sub_180010910((__int64)v29);
    *a2 = 0LL;
    if ( a2 == &v21 )
    {
      v19 = v21;
    }
    else
    {
      *a2 = v21;
      v19 = 0LL;
    }
    if ( v19 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
