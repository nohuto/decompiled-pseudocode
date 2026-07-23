/*
 * XREFs of sub_140AF5940 @ 0x140AF5940
 * Callers:
 *     sub_140AF522C @ 0x140AF522C (sub_140AF522C.c)
 * Callees:
 *     sub_140228660 @ 0x140228660 (sub_140228660.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_1403B790C @ 0x1403B790C (sub_1403B790C.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 *     sub_140AF5478 @ 0x140AF5478 (sub_140AF5478.c)
 *     sub_140B5273C @ 0x140B5273C (sub_140B5273C.c)
 */

char __fastcall sub_140AF5940(__int64 a1, const __m128i *a2, const __m128i *a3)
{
  ULONG_PTR v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  int v8; // r12d
  __m128i *i; // rsi
  ULONG_PTR v10; // rdx
  __int64 *v11; // rcx
  ULONG_PTR v12; // rax
  unsigned __int64 v13; // r14
  const __m128i *v14; // r8
  unsigned int v15; // eax
  _QWORD *v16; // r14
  BOOL v17; // r15d
  unsigned __int64 v18; // rax
  __int128 v20; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+50h] [rbp-48h]
  __int128 v22; // [rsp+60h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 40);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
    goto LABEL_2;
  if ( --v3 )
  {
    v5 = 1LL;
LABEL_2:
    v6 = 48 * v5;
    v7 = *(_DWORD *)(a1 + 24) & 0x1FFFFFFF;
    v8 = *(_DWORD *)(a1 + 24) & 0x20000000;
    LOBYTE(v5) = 0;
    for ( i = (__m128i *)(v6 - 0x220000000000LL); ; i += 3 )
    {
      while ( 1 )
      {
        if ( !v3 )
          return v5;
        if ( v8 )
        {
          v10 = 0LL;
          v11 = &i->m128i_i64[1];
          do
          {
            if ( (*((_BYTE *)v11 + 26) & 7) != 0 )
              break;
            if ( *v11 )
              break;
            ++v10;
            v11 += 6;
          }
          while ( v10 < v3 );
        }
        else
        {
          v10 = v3;
        }
        if ( !v10 )
          break;
        v12 = sub_1403B7A10(0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4), v10);
        v13 = v12;
        if ( ((v7 - 9) & 0xFFFFFFDD) != 0 || v7 == 43 )
        {
          if ( ((v7 - 33) & 0xFFFFFFFD) != 0 )
          {
            if ( v7 == 29 || v7 == 36 )
            {
              v15 = 256;
              v14 = a3;
            }
            else
            {
              v14 = a2;
              v15 = 128;
            }
            sub_1403B790C(i, v13, v14, 0, v15, 0LL, 0LL);
          }
          else
          {
            sub_140B5273C(0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4), v12, v7);
          }
        }
        else
        {
          DWORD2(v21) = 2;
          *(_QWORD *)&v22 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)i[0x22000000000LL].m128i_i64 >> 4);
          *((_QWORD *)&v22 + 1) = v12;
          sub_140AF5478((__int64)&v20);
        }
        v3 -= v13;
        LOBYTE(v5) = 48 * v13;
        i += 3 * v13;
      }
      if ( v7 == 29 || v7 == 36 )
      {
        v16 = (_QWORD *)i->m128i_i64[1];
        if ( !v16 )
          goto LABEL_36;
        if ( v7 == 29 )
        {
          v17 = 0;
          if ( sub_140317A80(i->m128i_u64[1]) )
            v17 = sub_140229550() != 0;
          *v16 = 0LL;
          if ( v17 )
            sub_1402294F0((__int64)v16, 0LL);
          v18 = sub_14033AC10((unsigned __int64)v16);
          sub_140228660(48 * v18 - 0x220000000000LL, 0);
LABEL_36:
          LOBYTE(v5) = sub_1403B790C(i, 1uLL, a3, 0, 0x100u, 0LL, 0LL);
          goto LABEL_7;
        }
        LOBYTE(v5) = sub_14026C644((ULONG_PTR)i, 0);
      }
LABEL_7:
      --v3;
    }
  }
  return v5;
}
