/*
 * XREFs of sub_140A64F30 @ 0x140A64F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140517F6C @ 0x140517F6C (sub_140517F6C.c)
 */

void __fastcall sub_140A64F30(void *a1, __int64 a2, __int64 ***a3)
{
  __int64 **i; // rbx
  unsigned int v5; // ebp
  void **v6; // rsi

  if ( a1 )
  {
    sub_140517F6C(a1, (void *)(a2 + 152), 8u);
  }
  else
  {
    for ( i = *a3; i != (__int64 **)a3; i = (__int64 **)*i )
    {
      sub_140517F6C(0LL, i[5], 0x2000u);
      v5 = 0;
      v6 = (void **)(i[5] + 512);
      do
      {
        if ( (*(_BYTE *)(v6 - 512) & 1) == 0 )
          break;
        sub_140517F6C(0LL, *v6, 0x1000u);
        ++v5;
        ++v6;
      }
      while ( v5 < 0x200 );
    }
  }
}
