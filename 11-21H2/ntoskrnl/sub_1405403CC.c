/*
 * XREFs of sub_1405403CC @ 0x1405403CC
 * Callers:
 *     sub_14092B55C @ 0x14092B55C (sub_14092B55C.c)
 * Callees:
 *     sub_140298A3C @ 0x140298A3C (sub_140298A3C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405403CC(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  _QWORD v12[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v13[154]; // [rsp+A0h] [rbp-60h] BYREF

  if ( a5 )
  {
    v9 = a5[19];
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 88);
    if ( a4 )
    {
      memset(v13, 0, sizeof(v13));
      v13[19] = v9;
      v13[20] = v9;
    }
  }
  sub_140298A3C(a2);
  if ( a4 )
  {
    v10 = v13;
    if ( a5 )
      v10 = a5;
    memset(v12, 0, sizeof(v12));
    v12[7] = v10[31];
    v12[6] = v10[20];
    sub_14042A5E0(a1 + 0x4000, v12);
    *(_QWORD *)(a3 + 88) = v9 - 64;
    *(_BYTE *)(a3 + 388) = -1;
  }
  return 0LL;
}
