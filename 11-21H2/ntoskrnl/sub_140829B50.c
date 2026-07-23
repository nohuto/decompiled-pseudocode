/*
 * XREFs of sub_140829B50 @ 0x140829B50
 * Callers:
 *     sub_140829ACC @ 0x140829ACC (sub_140829ACC.c)
 *     sub_140B04910 @ 0x140B04910 (sub_140B04910.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_1402182F8 @ 0x1402182F8 (sub_1402182F8.c)
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

void __fastcall sub_140829B50(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r12
  ULONG_PTR *v5; // rsi
  BOOL v6; // r14d
  int v7; // ebx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v2 = (__int64)(a1 << 25) >> 16;
    v8 = sub_140317A10(a1);
    v3 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v8) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v4 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v5 = (ULONG_PTR *)sub_1402182F8((*(_QWORD *)(v3 + 40) >> 43) & 0x3FF);
    v6 = 0;
    if ( sub_140317A80(a1) )
      v6 = sub_140229550() != 0;
    *(_QWORD *)a1 = 0LL;
    if ( v6 )
      sub_1402294F0(a1, 0LL);
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v2, 0, 1u);
    v7 = sub_140228660(v3, 1);
    sub_140228660(v4, 0);
    sub_140216E18((__int64)v5, 1uLL);
    if ( v7 != 3 )
      sub_14028CE10((__int64)v5, 1LL);
    if ( v5 == &StartContext )
    {
      if ( (unsigned int)sub_14027B080(v2) == 14 )
        _InterlockedExchangeAdd64(&qword_140C53548, 0xFFFFFFFFFFFFFFFFuLL);
      else
        --qword_140C53528;
    }
  }
}
