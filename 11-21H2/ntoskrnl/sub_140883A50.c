/*
 * XREFs of sub_140883A50 @ 0x140883A50
 * Callers:
 *     sub_140635A00 @ 0x140635A00 (sub_140635A00.c)
 *     sub_140636520 @ 0x140636520 (sub_140636520.c)
 * Callees:
 *     sub_140460BA4 @ 0x140460BA4 (sub_140460BA4.c)
 *     sub_140460BDC @ 0x140460BDC (sub_140460BDC.c)
 *     sub_140883ABA @ 0x140883ABA (sub_140883ABA.c)
 *     sub_1409EE8FC @ 0x1409EE8FC (sub_1409EE8FC.c)
 */

__int64 __fastcall sub_140883A50(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi

  v4 = sub_140460BDC(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    sub_140460BA4(v4, a2);
    sub_140883ABA();
    sub_1409EE8FC(a1, v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
