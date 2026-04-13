/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x180063820
 * Callers:
 *     <none>
 * Callees:
 *     _Stoullx @ 0x180005A20 (_Stoullx.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18005372C (--1locale@std@@QEAA@XZ.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x1800615DC (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180063EF4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800648C4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 */

_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        unsigned __int64 *a7)
{
  std::locale *v11; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // rbx
  int v15; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-70h] BYREF
  char *v17; // [rsp+40h] [rbp-68h] BYREF
  char v18[32]; // [rsp+48h] [rbp-60h] BYREF

  v15 = 0;
  v11 = (std::locale *)std::ios_base::getloc(a5, v16);
  v12 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
          a1,
          v18,
          (__int64)a3,
          a4,
          *(_DWORD *)(a5 + 24),
          v11);
  v13 = Stoullx(v18, &v17, v12, &v15);
  std::locale::~locale((std::locale *)v16);
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v17 == v18 || v15 )
    *a6 |= 2u;
  else
    *a7 = v13;
  *a2 = *a3;
  return a2;
}
