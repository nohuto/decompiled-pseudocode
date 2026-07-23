/*
 * XREFs of sub_14090A8B8 @ 0x14090A8B8
 * Callers:
 *     sub_14090A6D0 @ 0x14090A6D0 (sub_14090A6D0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14090A8B8(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int v5; // r11d
  unsigned int v6; // ebx

  if ( a2 >= 2 )
  {
    v2 = 0;
    v3 = a2 - 1;
    do
    {
      v4 = v2 + 1;
      v5 = *(_DWORD *)(a1 + 4 * v4);
      v6 = *(_DWORD *)(a1 + 4LL * v2);
      if ( v5 < v6 )
      {
        *(_DWORD *)(a1 + 4 * v4) = v6;
        LODWORD(v4) = v2 - 1;
        *(_DWORD *)(a1 + 4LL * v2) = v5;
        if ( !v2 )
          LODWORD(v4) = 0;
      }
      v2 = v4;
    }
    while ( (unsigned int)v4 < v3 );
  }
}
