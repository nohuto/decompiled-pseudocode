/*
 * XREFs of sub_1C005B7F4 @ 0x1C005B7F4
 * Callers:
 *     sub_1C00524E0 @ 0x1C00524E0 (sub_1C00524E0.c)
 *     sub_1C005458C @ 0x1C005458C (sub_1C005458C.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C005A04C @ 0x1C005A04C (sub_1C005A04C.c)
 *     sub_1C0079C54 @ 0x1C0079C54 (sub_1C0079C54.c)
 *     sub_1C007A484 @ 0x1C007A484 (sub_1C007A484.c)
 *     sub_1C007ACDC @ 0x1C007ACDC (sub_1C007ACDC.c)
 */

__int64 __fastcall sub_1C005B7F4(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        const void *a6,
        _BYTE *a7)
{
  int v11; // eax
  __int64 v12; // rdi
  int v13; // ebx
  _OWORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h]
  _OWORD v17[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+78h] [rbp-88h]
  _BYTE Dst[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-48h]
  int v21; // [rsp+C8h] [rbp-38h]
  _OWORD v22[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+100h] [rbp+0h]

  v18 = 0;
  memset(v17, 0, sizeof(v17));
  memset_0(Dst, 0, 0x50uLL);
  v16 = 0;
  v23 = 0LL;
  v11 = *(_DWORD *)a1;
  memset(v15, 0, sizeof(v15));
  memset(v22, 0, sizeof(v22));
  if ( v11 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 || (v12 = *(_QWORD *)(a1 + 3496)) == 0 || !*(_QWORD *)(a1 + 3504) )
      return (unsigned int)-1073741637;
  }
  else
  {
    if ( v11 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v12 = *(_QWORD *)(a1 + 6008);
    if ( !v12 || !*(_QWORD *)(a1 + 6016) )
      return (unsigned int)-1073741637;
  }
  v13 = sub_1C005A04C((int *)a1, a2, (__int64)Dst, a7);
  if ( v13 >= 0 )
  {
    if ( v20 || v21 )
    {
      v13 = sub_1C00596F4(v12, 0, a3, a4, (unsigned int *)v17, a7);
      if ( v13 >= 0 )
      {
        v13 = sub_1C00596F4(v12, 0, a5, a6, (unsigned int *)v15, a7);
        if ( v13 >= 0 )
        {
          v13 = sub_1C007A484(v12, 2LL, v22);
          if ( v13 >= 0 )
          {
            v13 = sub_1C007ACDC(v12, (unsigned int)v22, a2, (unsigned int)v17, (__int64)v15);
            if ( v13 < 0 )
              sub_1C0042880(a7, 32LL, (__int64)"TcglibSetBandPin");
            sub_1C0079C54(v12, v22);
          }
          else
          {
            sub_1C0042880(a7, 32LL, (__int64)"TcglibOpenSession");
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v13;
}
