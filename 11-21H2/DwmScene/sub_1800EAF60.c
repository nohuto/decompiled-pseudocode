/*
 * XREFs of sub_1800EAF60 @ 0x1800EAF60
 * Callers:
 *     sub_1800E9F10 @ 0x1800E9F10 (sub_1800E9F10.c)
 *     sub_1800EA090 @ 0x1800EA090 (sub_1800EA090.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E6A0C @ 0x1800E6A0C (sub_1800E6A0C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800EAF60(__int64 a1, __int64 a2, const void *a3, unsigned int a4)
{
  size_t v4; // r15
  ULONG_PTR v8; // rdi
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v15; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v4 = a4;
  v8 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(**(_QWORD **)(a1 + 144) + 112LL))(
         *(_QWORD *)(a1 + 144),
         a2,
         0LL,
         4LL,
         0,
         &v15);
  v13 = 0LL;
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
        v13 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_1800E6A0C(v14, &v13);
  sub_180010910((__int64)&v13);
  sub_1800DD668(v14[0], v8);
  if ( (v8 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v8;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18001060C(v15, v4, a3, v4);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 120LL))(*(_QWORD *)(a1 + 144), a2, 0LL);
  return sub_180010910((__int64)v14);
}
