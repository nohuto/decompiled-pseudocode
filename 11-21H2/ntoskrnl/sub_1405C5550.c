/*
 * XREFs of sub_1405C5550 @ 0x1405C5550
 * Callers:
 *     sub_140983B10 @ 0x140983B10 (sub_140983B10.c)
 * Callees:
 *     sub_14027738C @ 0x14027738C (sub_14027738C.c)
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 *     sub_1405A54BC @ 0x1405A54BC (sub_1405A54BC.c)
 *     sub_1405C4E28 @ 0x1405C4E28 (sub_1405C4E28.c)
 *     sub_1405C4F88 @ 0x1405C4F88 (sub_1405C4F88.c)
 *     sub_1405C573C @ 0x1405C573C (sub_1405C573C.c)
 *     sub_14097E8C8 @ 0x14097E8C8 (sub_14097E8C8.c)
 */

void __fastcall sub_1405C5550(__int64 a1)
{
  __int64 v1; // r8
  _SLIST_HEADER *v3; // r13
  __int64 v4; // rbp
  unsigned int *v5; // rcx
  unsigned int i; // r15d
  unsigned __int64 v7; // r12
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  char v11; // bl
  int v12; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 8);
  v12 = 0;
  v3 = *(_SLIST_HEADER **)(*(_QWORD *)a1 + 48LL);
  v4 = *(_QWORD *)(a1 + 216) + 16 * (**(unsigned int **)(a1 + 216) + 1LL);
  sub_14097E8C8(a1, v3, v1);
  v5 = *(unsigned int **)(a1 + 216);
  for ( i = 0; i < *v5; ++i )
  {
    if ( *(_DWORD *)(v4 + 8LL * i) == *(_DWORD *)(a1 + 8) )
    {
      v7 = *(_QWORD *)&v5[4 * i + 4];
      v8 = v7 + *(_QWORD *)&v5[4 * i + 6] - 1LL;
      v9 = 48 * v8 - 0x220000000000LL;
      while ( v8 >= v7 && v7 )
      {
        if ( sub_1405C4F88(a1) )
          return;
        v12 = 0;
        v10 = sub_140278460((__int64)v3, v9, 1LL, 117440512, &v12);
        if ( v10 )
        {
          if ( v10 >= v8 - v7 + 1 )
            break;
          v9 += 48 - 48 * v10;
          v8 += 1 - v10;
        }
        else
        {
          if ( v12 )
            sub_1405A54BC(v3, 0);
          if ( !sub_14027738C(
                  (__int64)v3,
                  v8,
                  1LL,
                  qword_140C50840,
                  a1 + 176,
                  117440512,
                  -1,
                  0LL,
                  *(unsigned __int8 *)(v9 + 34) >> 6,
                  0LL) )
          {
            v11 = 2;
            if ( (int)sub_1405C573C(a1, v9, 0LL, 0LL) < 0 )
              v11 = 3;
            sub_1405C4E28(v8, v11);
          }
        }
        --v8;
        v9 -= 48LL;
      }
    }
    v5 = *(unsigned int **)(a1 + 216);
  }
}
