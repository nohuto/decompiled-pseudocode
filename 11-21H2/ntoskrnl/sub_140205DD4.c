/*
 * XREFs of sub_140205DD4 @ 0x140205DD4
 * Callers:
 *     sub_14067259C @ 0x14067259C (sub_14067259C.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     sub_1409AD99C @ 0x1409AD99C (sub_1409AD99C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140205DD4(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 *v3; // rax

  if ( _bittest64(&qword_140D068D8, 0x37u) )
  {
    v1 = a1[170];
    if ( v1 )
    {
      v2 = 0LL;
      v3 = (__int64 *)a1[176];
      if ( v3 )
        v2 = *v3;
      *(_QWORD *)(v1 + 1992) = a1[129];
      if ( v2 )
        *(_QWORD *)(v2 + 1152) = a1[129];
    }
  }
}
