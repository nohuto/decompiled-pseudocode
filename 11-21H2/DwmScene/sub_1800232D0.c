/*
 * XREFs of sub_1800232D0 @ 0x1800232D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001410 @ 0x180001410 (sub_180001410.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

ULONG __fastcall sub_1800232D0(__int64 a1, void *a2)
{
  ULONG result; // eax
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  volatile signed __int64 *v8; // rcx
  int v9; // [rsp+50h] [rbp-B0h] BYREF
  void *v10; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+68h] [rbp-98h] BYREF
  char *v13; // [rsp+70h] [rbp-90h] BYREF
  char v14; // [rsp+80h] [rbp-80h] BYREF

  result = sub_180024958(*(void **)(a1 + 112));
  if ( (unsigned int)dword_1801EA1C0 > 5 && (qword_1801EA1D0 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
    {
      v10 = a2;
      v11 = sub_1800230EC(a1 + 24);
      v5 = sub_1800230EC(a1 + 8);
      v8 = *(volatile signed __int64 **)(a1 + 112);
      v12 = v5;
      v9 = 1;
      if ( v8 )
      {
        _InterlockedExchangeAdd64(v8 + 18, 0LL);
        sub_180025C4C((void *)v8);
      }
      else
      {
        v14 = 0;
      }
      v13 = &v14;
      return sub_180001410((__int64)v8, byte_1801CD078, v6, v7, (void **)&v13, (__int64)&v9, &v12, &v11, &v10);
    }
  }
  return result;
}
