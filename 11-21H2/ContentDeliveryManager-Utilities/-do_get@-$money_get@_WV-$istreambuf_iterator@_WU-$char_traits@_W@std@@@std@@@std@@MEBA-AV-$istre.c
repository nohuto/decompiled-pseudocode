/*
 * XREFs of ?do_get@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x180017970
 * Callers:
 *     <none>
 * Callees:
 *     _Stoldx @ 0x180005BD0 (_Stoldx.c)
 *     ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@PEA_W@Z @ 0x180012CDC (-_Getmfld@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$bas.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180022171 (--3@YAXPEAX@Z_0.c)
 *     ?_Peek@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@AEBA_WXZ @ 0x180069540 (-_Peek@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@AEBA_WXZ.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        unsigned __int64 *a8)
{
  void **v11; // rbx
  unsigned __int64 v12; // xmm0_8
  int v14; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-41h] BYREF
  void *v16[3]; // [rsp+60h] [rbp-31h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp-19h]
  __int16 v18[12]; // [rsp+80h] [rbp-11h] BYREF

  v15[1] = -2LL;
  std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getmfld(a1, v16, a3, a4, a5, a6, v18);
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<wchar_t>::_Peek(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( *(_QWORD *)a4 )
LABEL_9:
    *a7 |= 1u;
LABEL_10:
  if ( !v16[2] )
    goto LABEL_16;
  v11 = v16;
  if ( v17 >= 0x10 )
    v11 = (void **)v16[0];
  v14 = 0;
  v12 = Stoldx((__int64)v11, (int)v15, 0LL, &v14).m128_u64[0];
  if ( (void **)v15[0] == v11 || v14 )
LABEL_16:
    *a7 |= 2u;
  else
    *a8 = v12;
  *a2 = *(_OWORD *)a3;
  if ( v17 >= 0x10 )
    operator delete(v16[0]);
  return a2;
}
