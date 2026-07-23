/*
 * XREFs of sub_14039DB1C @ 0x14039DB1C
 * Callers:
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F3C40 @ 0x1402F3C40 (sub_1402F3C40.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403AD304 @ 0x1403AD304 (sub_1403AD304.c)
 *     sub_1403AD40C @ 0x1403AD40C (sub_1403AD40C.c)
 * Callees:
 *     sub_14039DB6C @ 0x14039DB6C (sub_14039DB6C.c)
 *     sub_14039DECC @ 0x14039DECC (sub_14039DECC.c)
 *     sub_14054CD1C @ 0x14054CD1C (sub_14054CD1C.c)
 */

char __fastcall sub_14039DB1C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6, __int64 a7)
{
  int v7; // r10d
  char v8; // bl

  v7 = a1;
  if ( a2 && (unsigned __int8)sub_14039DECC(a1, a2, a3, a4) )
  {
    v8 = a5;
    sub_14054CD1C(v7, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v8 = a5;
    sub_14039DB6C(v7, a2, a3, a4, a5, a6, a7);
  }
  return v8;
}
