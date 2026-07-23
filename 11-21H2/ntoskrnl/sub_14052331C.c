/*
 * XREFs of sub_14052331C @ 0x14052331C
 * Callers:
 *     sub_140523610 @ 0x140523610 (sub_140523610.c)
 *     sub_140523640 @ 0x140523640 (sub_140523640.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14052331C(unsigned int a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebp
  __int64 v11; // r14
  unsigned int v12; // r12d
  unsigned int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v5 = a3;
  if ( a2 )
    return 0LL;
  v8 = 9;
  v9 = 0;
  v10 = 0;
  LODWORD(v11) = 0;
  v12 = a3 + a5;
  do
  {
    if ( v5 <= v8 )
    {
      v13 = v8 - v5 + 1;
      v14 = a5 - v9;
      if ( a5 - v9 >= v13 )
        v14 = v13;
      if ( a1 < 2 )
      {
        v15 = sub_14042A5E0(v5, a4 + v10);
        a4 = v16;
      }
      else
      {
        v15 = 0;
      }
      v9 += v15;
      v5 += v14;
      v10 += v14;
    }
    if ( v5 >= v12 )
      break;
    v11 = (unsigned int)(v11 + 1);
    v8 = *(_DWORD *)&byte_140009B60[24 * v11 + 4];
  }
  while ( v8 );
  return v9;
}
