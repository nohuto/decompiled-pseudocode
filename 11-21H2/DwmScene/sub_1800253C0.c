/*
 * XREFs of sub_1800253C0 @ 0x1800253C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001410 @ 0x180001410 (sub_180001410.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_1800230F8 @ 0x1800230F8 (sub_1800230F8.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

__int64 __fastcall sub_1800253C0(__int64 a1, __int64 a2, void *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  volatile signed __int64 *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+58h] [rbp-B0h] BYREF
  void *v12; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+70h] [rbp-98h] BYREF
  char *v15; // [rsp+78h] [rbp-90h] BYREF
  char v16; // [rsp+88h] [rbp-80h] BYREF

  sub_180024958(*(volatile signed __int64 **)(a1 + 112));
  if ( (unsigned int)dword_1801EA1C0 > 5
    && (qword_1801EA1D0 & 0x400000000000LL) != 0
    && (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
  {
    v12 = a3;
    v13 = sub_1800230F8(a2);
    v14 = sub_1800230EC(a1 + 8);
    LODWORD(v11) = 1;
    v8 = *(volatile signed __int64 **)(a1 + 112);
    if ( v8 )
    {
      _InterlockedExchangeAdd64(v8 + 18, 0LL);
      sub_180025C4C((void *)v8);
    }
    else
    {
      v16 = 0;
    }
    v15 = &v16;
    sub_180001410((__int64)v8, byte_1801CCF40, v6, v7, (void **)&v15, (__int64)&v11, &v14, &v13, &v12);
  }
  result = sub_18002596C((char *)(a1 + 120));
  v10 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v10 )
    return o__aligned_free();
  return result;
}
