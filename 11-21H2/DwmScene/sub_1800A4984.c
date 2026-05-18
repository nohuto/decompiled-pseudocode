/*
 * XREFs of sub_1800A4984 @ 0x1800A4984
 * Callers:
 *     sub_1800A4170 @ 0x1800A4170 (sub_1800A4170.c)
 *     sub_1800A4260 @ 0x1800A4260 (sub_1800A4260.c)
 * Callees:
 *     sub_1800A4C1C @ 0x1800A4C1C (sub_1800A4C1C.c)
 *     sub_1800A4C3C @ 0x1800A4C3C (sub_1800A4C3C.c)
 *     sub_1800A5708 @ 0x1800A5708 (sub_1800A5708.c)
 */

char *__fastcall sub_1800A4984(char *Src, char *a2, char *a3, __int64 a4, __int64 a5, void *Srca, __int64 a7)
{
  char *v7; // r10
  char *v8; // rsi
  void *v10; // r11
  __int64 v11; // rbx
  char *v12; // rax
  __int128 v13; // xmm1
  char *v14; // rcx
  char *v15; // rax
  __int128 v16; // xmm1
  __int128 *v17; // rcx
  char *v18; // rax
  __int128 v19; // xmm1

  v7 = a3;
  v8 = Src;
  if ( a4 )
  {
    if ( !a5 )
      return Src;
    if ( a4 <= a5 && a4 <= a7 )
    {
      sub_1800A5708(Src, a2, Srca);
      v11 = sub_1800A4C3C(v10);
      sub_1800A4C3C(Srca);
      return (char *)v11;
    }
    if ( a5 <= a7 )
    {
      sub_1800A5708(a2, a3, Srca);
      sub_1800A4C1C(v8);
      return (char *)sub_1800A4C3C(Srca);
    }
    if ( Src != a2 )
    {
      if ( a2 == a3 )
      {
        return Src;
      }
      else
      {
        v12 = a2;
        do
        {
          v12 -= 16;
          if ( Src == v12 )
            break;
          v13 = *(_OWORD *)Src;
          *(_OWORD *)Src = *(_OWORD *)v12;
          Src += 16;
          *(_OWORD *)v12 = v13;
        }
        while ( Src != v12 );
        v14 = a2;
        v15 = a3;
        do
        {
          v15 -= 16;
          if ( v14 == v15 )
            break;
          v16 = *(_OWORD *)v14;
          *(_OWORD *)v14 = *(_OWORD *)v15;
          v14 += 16;
          *(_OWORD *)v15 = v16;
        }
        while ( v14 != v15 );
        v17 = (__int128 *)v8;
        v18 = a3;
        if ( v8 != a3 )
        {
          do
          {
            v18 -= 16;
            if ( v17 == (__int128 *)v18 )
              break;
            v19 = *v17;
            *v17++ = *(_OWORD *)v18;
            *(_OWORD *)v18 = v19;
          }
          while ( v17 != (__int128 *)v18 );
        }
        return &v8[(a3 - a2) & 0xFFFFFFFFFFFFFFF0uLL];
      }
    }
  }
  return v7;
}
