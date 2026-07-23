/*
 * XREFs of sub_140916720 @ 0x140916720
 * Callers:
 *     sub_1409174A4 @ 0x1409174A4 (sub_1409174A4.c)
 * Callees:
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 */

void __fastcall sub_140916720(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // edi
  ULONG_PTR *v5; // rbx
  ULONG_PTR v6; // rcx

  if ( a2 )
  {
    v3 = a2 - 1;
    v4 = 0;
    v5 = (ULONG_PTR *)(a1 + 24);
    do
    {
      v6 = *(v5 - 1);
      if ( v6 )
        sub_14071BF40(v6);
      if ( v4 == v3 )
      {
        if ( *v5 )
          sub_14071BF40(*v5);
      }
      ++v4;
      v5 += 6;
    }
    while ( v4 < a2 );
  }
}
