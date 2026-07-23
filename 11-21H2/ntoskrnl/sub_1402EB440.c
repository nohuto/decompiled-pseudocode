/*
 * XREFs of sub_1402EB440 @ 0x1402EB440
 * Callers:
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     sub_1402EB1A0 @ 0x1402EB1A0 (sub_1402EB1A0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_140339520 @ 0x140339520 (sub_140339520.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14033E280 @ 0x14033E280 (sub_14033E280.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_14058A110 @ 0x14058A110 (sub_14058A110.c)
 *     sub_1405A6E74 @ 0x1405A6E74 (sub_1405A6E74.c)
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 *     sub_1407BCB30 @ 0x1407BCB30 (sub_1407BCB30.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 * Callees:
 *     sub_1402EB59C @ 0x1402EB59C (sub_1402EB59C.c)
 *     sub_1405B1974 @ 0x1405B1974 (sub_1405B1974.c)
 *     sub_1405B19C8 @ 0x1405B19C8 (sub_1405B19C8.c)
 */

__int64 __fastcall sub_1402EB440(__int64 a1, signed int a2, unsigned int a3, char a4, _QWORD *a5, unsigned int a6)
{
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned int *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  unsigned int *v15; // [rsp+20h] [rbp-38h]

  v7 = a2;
  if ( (unsigned __int64)a5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    *a5 = 0LL;
  if ( (unsigned int)a2 > 3 && *(_BYTE *)(a2 + a1 + 15976) )
    return -1LL;
  v10 = a3 >> byte_140C506CC;
  while ( 1 )
  {
    v11 = (unsigned int *)(qword_140C506D8 + 4LL * v10 * (unsigned __int16)word_140D05000);
    v12 = (a4 & 1) != 0 ? 4LL : 4LL * (unsigned __int16)word_140D05000;
    v15 = (unsigned int *)((char *)v11 + v12);
    if ( v11 < (unsigned int *)((char *)v11 + v12) )
      break;
LABEL_16:
    if ( (a4 & 2) == 0 )
    {
      result = -1LL;
      if ( (unsigned int)v7 > 3 && (a4 & 1) == 0 )
        *(_BYTE *)(v7 + a1 + 15976) = 1;
      return result;
    }
    a4 &= ~2u;
  }
  v13 = 168 * v7;
  while ( 1 )
  {
    v14 = *(_QWORD *)(a1 + 16) + 24512LL * *v11 + v13 + 23168;
    result = sub_1402EB59C(v14);
    if ( result != -1 )
      return result;
    if ( (a4 & 2) == 0
      && *(_DWORD *)(v14 + 48) <= 3u
      && !(unsigned int)sub_1405B19C8(v14)
      && (unsigned int)sub_1405B1974(v14, a1, 1LL, a6) )
    {
      --v11;
    }
    v13 = 168 * v7;
    if ( ++v11 >= v15 )
      goto LABEL_16;
  }
}
