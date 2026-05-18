/*
 * XREFs of sub_180023630 @ 0x180023630
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001314 @ 0x180001314 (sub_180001314.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

ULONG __fastcall sub_180023630(__int64 a1, int a2, void *a3)
{
  ULONG result; // eax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int64 *v10; // rcx
  int v11; // [rsp+58h] [rbp-B0h] BYREF
  int v12; // [rsp+5Ch] [rbp-ACh] BYREF
  void *v13; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  char *v15; // [rsp+70h] [rbp-98h] BYREF
  char v16; // [rsp+78h] [rbp-90h] BYREF

  result = sub_180024958(*(void **)(a1 + 112));
  if ( (unsigned int)dword_1801EA1C0 > 5 && (qword_1801EA1D0 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
    {
      v13 = a3;
      v11 = a2;
      v7 = sub_1800230EC(a1 + 8);
      v10 = *(volatile signed __int64 **)(a1 + 112);
      v14 = v7;
      v12 = 1;
      if ( v10 )
      {
        _InterlockedExchangeAdd64(v10 + 18, 0LL);
        sub_180025C4C((void *)v10);
      }
      else
      {
        v16 = 0;
      }
      v15 = &v16;
      return sub_180001314(
               (__int64)v10,
               byte_1801CD597,
               v8,
               v9,
               (void **)&v15,
               (__int64)&v12,
               &v14,
               (__int64)&v11,
               &v13);
    }
  }
  return result;
}
