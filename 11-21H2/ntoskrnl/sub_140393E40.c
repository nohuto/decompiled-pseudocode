/*
 * XREFs of sub_140393E40 @ 0x140393E40
 * Callers:
 *     IoFlushAdapterBuffers @ 0x140393E00 (IoFlushAdapterBuffers.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140458C22 @ 0x140458C22 (sub_140458C22.c)
 *     sub_140458D38 @ 0x140458D38 (sub_140458D38.c)
 *     sub_140513310 @ 0x140513310 (sub_140513310.c)
 */

char __fastcall sub_140393E40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  if ( a5 )
  {
    if ( a1 && !*(_BYTE *)(a1 + 433) )
      sub_14042A5E0(*(_QWORD *)(a1 + 424), a2);
    if ( a3 )
    {
      if ( a1 && *(_BYTE *)(a1 + 434) )
        sub_140458D38(a1, a2, a3, a4, a5, a6);
      else
        sub_140458C22(a1, a2, a3, a4, a5, a6);
    }
    else if ( !a6 && !*(_BYTE *)(a1 + 437) )
    {
      sub_140513310(a1, a2, a4, a5, 0, 0);
    }
  }
  return 1;
}
