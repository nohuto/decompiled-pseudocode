/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x180063670
 * Callers:
 *     <none>
 * Callees:
 *     _Stoullx @ 0x180005A20 (_Stoullx.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18005377C (--1locale@std@@QEAA@XZ.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x18006162C (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180063F44 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x180064914 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 */

// Hidden C++ exception states: #wind=1
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
  unsigned __int64 v12; // rbx
  int v14; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v15[8]; // [rsp+38h] [rbp-70h] BYREF
  char *v16; // [rsp+40h] [rbp-68h] BYREF
  char v17[32]; // [rsp+48h] [rbp-60h] BYREF

  v14 = 0;
  v11 = (std::locale *)std::ios_base::getloc(a5, v15);
  LODWORD(a1) = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
                  a1,
                  v17,
                  (__int64)a3,
                  a4,
                  2048,
                  v11);
  std::locale::~locale((std::locale *)v15);
  v12 = Stoullx(v17, &v16, a1, &v14);
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v16 == v17 || v14 )
    *a6 |= 2u;
  else
    *a7 = v12;
  *a2 = *a3;
  return a2;
}
