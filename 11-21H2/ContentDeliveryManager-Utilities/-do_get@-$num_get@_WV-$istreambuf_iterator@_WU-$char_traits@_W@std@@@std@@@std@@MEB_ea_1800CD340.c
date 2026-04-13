/*
 * XREFs of ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x1800CD340
 * Callers:
 *     <none>
 * Callees:
 *     _Stodx @ 0x180005594 (_Stodx.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 *     ?_Getffld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800CADE8 (-_Getffld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 */

_OWORD *__fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        double *a7)
{
  unsigned int v10; // eax
  double v11; // xmm0_8
  double v12; // xmm6_8
  _OWORD *result; // rax
  int v14; // [rsp+38h] [rbp-61h] BYREF
  int v15; // [rsp+3Ch] [rbp-5Dh] BYREF
  char *v16; // [rsp+40h] [rbp-59h] BYREF
  char v17[64]; // [rsp+48h] [rbp-51h] BYREF

  v15 = 0;
  v14 = 0;
  v10 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld(a1, v17, a3, a4, a5, (__int64)&v14);
  *(_QWORD *)&v11 = Stodx((__int64)v17, (int)&v16, v10, &v15).m128_u64[0];
  v12 = v11;
  if ( v14 )
    v12 = ldexp(v11, 4 * v14);
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek((__int64 *)a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( *(_QWORD *)a4 )
LABEL_11:
    *a6 |= 1u;
LABEL_12:
  if ( v16 == v17 || v15 )
    *a6 |= 2u;
  else
    *a7 = v12;
  result = a2;
  *a2 = *(_OWORD *)a3;
  return result;
}
