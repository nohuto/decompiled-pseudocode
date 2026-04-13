/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x180063390
 * Callers:
 *     <none>
 * Callees:
 *     _Stofx @ 0x180005028 (_Stofx.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180060A48 (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180063F44 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 */

_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        int a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        float *a7)
{
  unsigned int v10; // eax
  float v11; // xmm0_4
  float v12; // xmm6_4
  _OWORD *result; // rax
  int v14; // [rsp+38h] [rbp-61h] BYREF
  int v15; // [rsp+3Ch] [rbp-5Dh] BYREF
  char *v16; // [rsp+40h] [rbp-59h] BYREF
  char v17[64]; // [rsp+48h] [rbp-51h] BYREF

  v15 = 0;
  v14 = 0;
  v10 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffld(
          a1,
          v17,
          (__int64)a3,
          a4,
          a5,
          (__int64)&v14);
  LODWORD(v11) = Stofx((__int64)v17, (int)&v16, v10, &v15).m128_u32[0];
  v12 = v11;
  if ( v14 )
    v12 = ldexp(v11, 4 * v14);
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v16 == v17 || v15 )
    *a6 |= 2u;
  else
    *a7 = v12;
  result = a2;
  *a2 = *a3;
  return result;
}
