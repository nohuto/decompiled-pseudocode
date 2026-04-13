/*
 * XREFs of ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAJ@Z @ 0x1800B8FA0
 * Callers:
 *     <none>
 * Callees:
 *     _Stolx @ 0x180004D58 (_Stolx.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18005372C (--1locale@std@@QEAA@XZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180063EF4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800648C4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x1800B8558 (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 */

_OWORD *__fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  std::locale *v11; // rax
  unsigned int v12; // eax
  int v13; // ebx
  int v15; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-70h] BYREF
  char *v17; // [rsp+40h] [rbp-68h] BYREF
  char v18[32]; // [rsp+48h] [rbp-60h] BYREF

  v15 = 0;
  v11 = std::ios_base::getloc(a5, (std::locale *)v16);
  v12 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getifld(
          a1,
          v18,
          (__int64)a3,
          a4,
          *(_DWORD *)(a5 + 24),
          v11);
  v13 = Stolx((unsigned __int8 *)v18, (unsigned __int8 **)&v17, v12, &v15);
  std::locale::~locale((std::locale *)v16);
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
    *a6 |= 1u;
  if ( v17 == v18 || v15 )
    *a6 |= 2u;
  else
    *a7 = v13;
  *a2 = *a3;
  return a2;
}
