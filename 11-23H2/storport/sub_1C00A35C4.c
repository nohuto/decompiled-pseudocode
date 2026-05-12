/*
 * XREFs of sub_1C00A35C4 @ 0x1C00A35C4
 * Callers:
 *     sub_1C002069C @ 0x1C002069C (sub_1C002069C.c)
 *     sub_1C00206E4 @ 0x1C00206E4 (sub_1C00206E4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00A35C4(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v5; // dl
  unsigned int v6; // eax
  _BYTE *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // al

  if ( a2 > a4 )
  {
    v5 = 0;
    *(_BYTE *)(a4 + a1) = 0;
    v6 = a4 - 1;
    if ( a4 != 0LL )
    {
      v7 = (_BYTE *)((int)v6 + a1);
      v8 = a3 - a1;
      v9 = (int)v6 + 1LL;
      do
      {
        v10 = v7[v8];
        if ( v10 == 32 )
          v10 = v5 != 0 ? 0x20 : 0;
        else
          v5 = 1;
        *v7-- = v10;
        --v9;
      }
      while ( v9 );
    }
  }
}
