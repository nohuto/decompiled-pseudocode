/*
 * XREFs of sub_140832AB0 @ 0x140832AB0
 * Callers:
 *     sub_140832A7C @ 0x140832A7C (sub_140832A7C.c)
 * Callees:
 *     sub_140832A7C @ 0x140832A7C (sub_140832A7C.c)
 */

__int64 __fastcall sub_140832AB0(volatile signed __int32 *a1, unsigned int a2, __int64 a3)
{
  int v5; // edi
  __int64 *v6; // rsi
  unsigned int v7; // ecx
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h]

  HIDWORD(v10) = 0;
  v5 = (a2 >> 4) & 1;
  if ( v5 )
  {
    v6 = *(__int64 **)(a3 + 24);
    if ( v6 )
    {
      do
      {
        v9 = *v6;
        if ( !*v6 )
          break;
        if ( *(_BYTE *)(v9 + 22) || *(_BYTE *)(v9 + 21) )
        {
          if ( !*(_BYTE *)(v9 + 23) )
          {
            v5 = 0;
            break;
          }
        }
        else if ( (sub_140832A7C(*(unsigned int **)v9, *v6) & 8) == 0 )
        {
          v5 = 0;
          goto LABEL_10;
        }
        v5 = 1;
LABEL_10:
        ++v6;
      }
      while ( v5 );
    }
  }
  v7 = 128;
  if ( ((a2 >> 3) & 1) != v5 )
    v7 = 136;
  _InterlockedXor(a1, v7);
  LODWORD(v10) = a2 ^ v7;
  return v10;
}
