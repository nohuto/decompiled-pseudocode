/*
 * XREFs of sub_1403606EC @ 0x1403606EC
 * Callers:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     sub_14023EB0C @ 0x14023EB0C (sub_14023EB0C.c)
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 *     sub_140268BEC @ 0x140268BEC (sub_140268BEC.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_140360AC0 @ 0x140360AC0 (sub_140360AC0.c)
 *     sub_140397C78 @ 0x140397C78 (sub_140397C78.c)
 *     sub_14058DED4 @ 0x14058DED4 (sub_14058DED4.c)
 *     sub_140596A58 @ 0x140596A58 (sub_140596A58.c)
 *     sub_1406EC1C4 @ 0x1406EC1C4 (sub_1406EC1C4.c)
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 *     sub_14096E3D8 @ 0x14096E3D8 (sub_14096E3D8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1403606EC(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned __int64 i; // rdx
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 24));
  v1 = *(_QWORD *)(a1 + 24);
  for ( i = v1 + 1; i > 1; i = v1 + 1 )
  {
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), i, v1);
    if ( v3 == v1 )
      return 1;
  }
  if ( i != 1 )
    __fastfail(0xEu);
  return 0;
}
