/*
 * XREFs of sub_140268998 @ 0x140268998
 * Callers:
 *     sub_1402655A0 @ 0x1402655A0 (sub_1402655A0.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_1402680C0 @ 0x1402680C0 (sub_1402680C0.c)
 *     sub_14026873C @ 0x14026873C (sub_14026873C.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402EB8BC @ 0x1402EB8BC (sub_1402EB8BC.c)
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_140589CEC @ 0x140589CEC (sub_140589CEC.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1405B0B24 @ 0x1405B0B24 (sub_1405B0B24.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140268A48 @ 0x140268A48 (sub_140268A48.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

void __fastcall sub_140268998(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // r14
  _QWORD *i; // rsi
  __int64 v5; // rdi
  BOOL v6; // ebp

  if ( (unsigned int)sub_140268A48(0LL) )
  {
    v2 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C51DC0);
    v3 = (_QWORD *)(v2 + 16208);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( i[6] == a1 )
      {
        v5 = i[7];
        if ( (*(_BYTE *)v5 & 1) != 0 )
        {
          v6 = 0;
          if ( (unsigned int)sub_140317A80(i[7]) )
            v6 = sub_140229550() != 0;
          *(_QWORD *)v5 = 0LL;
          if ( v6 )
            sub_1402294F0(v5, 0LL);
          std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(v5 << 25 >> 16, 0LL, 1LL);
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C51DC0);
  }
}
