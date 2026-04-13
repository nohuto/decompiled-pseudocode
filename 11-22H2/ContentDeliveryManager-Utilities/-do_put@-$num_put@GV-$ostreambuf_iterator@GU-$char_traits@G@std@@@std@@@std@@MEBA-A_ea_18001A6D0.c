/*
 * XREFs of ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GN@Z @ 0x18001A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Ffmt@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADDH@Z @ 0x180006FC0 (-_Ffmt@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADDH@Z.c)
 *     ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x180010710 (-_Fput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     sprintf_s_0 @ 0x180022AE8 (sprintf_s_0.c)
 */

_OWORD *__fastcall std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::do_put(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        unsigned __int16 a5,
        double a6)
{
  __int64 v6; // rbx
  int v8; // r9d
  double v12; // xmm6_8
  int v13; // ebp
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  const char *v17; // rax
  int v18; // eax
  int v20[4]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-E8h] BYREF
  char Buffer[112]; // [rsp+70h] [rbp-D8h] BYREF

  v6 = *(_QWORD *)(a4 + 32);
  v8 = *(_DWORD *)(a4 + 24);
  if ( v6 <= 0 && (v8 & 0x2000) == 0 )
    v6 = 6LL;
  v12 = a6;
  v13 = v6;
  if ( v6 > 36 )
    v13 = 36;
  v14 = 0LL;
  v15 = 0LL;
  v16 = v6 - v13;
  if ( (v8 & 0x3000) == 0x2000 && a6 * 0.5 != a6 )
  {
    if ( a6 < 0.0 )
      *(_QWORD *)&v12 = *(_QWORD *)&a6 ^ _xmm;
    while ( v12 >= 1.0e35 && v14 < 0x1388 )
    {
      v12 = v12 / 1.0e10;
      v14 += 10LL;
    }
    if ( v12 > 0.0 && v16 >= 10 )
    {
      do
      {
        if ( v12 > 1.0e-35 )
          break;
        if ( v15 >= 0x1388 )
          break;
        v16 -= 10LL;
        v12 = v12 * 1.0e10;
        v15 += 10LL;
      }
      while ( v16 >= 10 );
    }
    if ( a6 < 0.0 )
      *(_QWORD *)&v12 ^= _xmm;
  }
  v17 = std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Ffmt(a1, v21, 0, v8);
  v18 = sprintf_s_0(Buffer, 0x6CuLL, v17, (unsigned int)v13, v12);
  *(_OWORD *)v20 = *a3;
  std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Fput(
    a1,
    a2,
    (__int128 *)v20,
    a4,
    a5,
    Buffer,
    v14,
    v15,
    v16,
    v18);
  return a2;
}
