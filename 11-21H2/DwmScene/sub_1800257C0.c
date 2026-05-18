/*
 * XREFs of sub_1800257C0 @ 0x1800257C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001410 @ 0x180001410 (sub_180001410.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800230EC @ 0x1800230EC (sub_1800230EC.c)
 *     sub_1800230F8 @ 0x1800230F8 (sub_1800230F8.c)
 *     sub_180024068 @ 0x180024068 (sub_180024068.c)
 *     sub_180024958 @ 0x180024958 (sub_180024958.c)
 *     sub_18002596C @ 0x18002596C (sub_18002596C.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

ULONG __fastcall sub_1800257C0(__int64 a1, __int64 a2, void *a3)
{
  __int64 v6; // rsi
  volatile signed __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  volatile signed __int64 *v10; // rax
  __int64 v11; // rcx
  ULONG result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int64 *v15; // rcx
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  void *v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  char *v20; // [rsp+78h] [rbp-90h] BYREF
  char v21; // [rsp+88h] [rbp-80h] BYREF

  v6 = a1 + 120;
  v7 = (volatile signed __int64 *)sub_18002596C((char *)(a1 + 120));
  v8 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v7;
  if ( v8 )
  {
    o__aligned_free();
    v7 = *(volatile signed __int64 **)(a1 + 112);
  }
  sub_180024958(v7);
  v10 = sub_180024068(v6, v9);
  v11 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v10;
  if ( v11 )
  {
    o__aligned_free();
    v10 = *(volatile signed __int64 **)(a1 + 112);
  }
  _InterlockedExchangeAdd64(v10 + 18, 0LL);
  result = sub_180025C4C((void *)v10);
  if ( (unsigned int)dword_1801EA1C0 > 5 && (qword_1801EA1D0 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1801EA1D8 & 0x400000000000LL) == qword_1801EA1D8 )
    {
      v17 = a3;
      v18 = sub_1800230F8(a2);
      v19 = sub_1800230EC(a1 + 8);
      LODWORD(v16) = 1;
      v15 = *(volatile signed __int64 **)(a1 + 112);
      if ( v15 )
      {
        _InterlockedExchangeAdd64(v15 + 18, 0LL);
        sub_180025C4C((void *)v15);
      }
      else
      {
        v21 = 0;
      }
      v20 = &v21;
      return sub_180001410((__int64)v15, byte_1801CD399, v13, v14, (void **)&v20, (__int64)&v16, &v19, &v18, &v17);
    }
  }
  return result;
}
