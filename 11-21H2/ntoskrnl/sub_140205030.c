/*
 * XREFs of sub_140205030 @ 0x140205030
 * Callers:
 *     sub_140204954 @ 0x140204954 (sub_140204954.c)
 *     sub_14064A300 @ 0x14064A300 (sub_14064A300.c)
 *     sub_1406961F8 @ 0x1406961F8 (sub_1406961F8.c)
 * Callees:
 *     sub_1402053BC @ 0x1402053BC (sub_1402053BC.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

__int64 __fastcall sub_140205030(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  char v3; // bl
  __int64 *v4; // r12
  __int64 *v5; // rsi
  unsigned __int64 v7; // r15
  _QWORD *v10; // rsi
  bool v12; // zf
  __int128 *v13; // rdx
  __int128 *v14; // rdx
  bool v15; // zf
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF

  v3 = 0;
  v4 = (__int64 *)(a1 + 72);
  v5 = *(__int64 **)(a1 + 72);
  v7 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  while ( v5 != v4 )
  {
    v7 = (unsigned __int64)v5;
    if ( !a3 )
      goto LABEL_19;
    if ( a3 <= 2u )
      goto LABEL_25;
    if ( a3 == 3 )
    {
      v13 = (__int128 *)(v5 + 5);
      LOWORD(v18) = *(_WORD *)a2;
      WORD1(v18) = v18;
      *((_QWORD *)&v18 + 1) = *(_QWORD *)(a2 + 8);
      goto LABEL_17;
    }
    if ( a3 != 4 )
    {
      switch ( a3 )
      {
        case 5u:
          goto LABEL_32;
        case 6u:
LABEL_25:
          v15 = a2 == v5[5];
          break;
        case 0x10u:
LABEL_32:
          v16 = *(_DWORD *)(a2 + 8);
          if ( v16 != *((_DWORD *)v5 + 12) )
            goto LABEL_19;
          v15 = memcmp(*(const void **)a2, (const void *)v5[5], v16) == 0;
          break;
        default:
          goto LABEL_19;
      }
      if ( v15 )
      {
        v3 = 1;
        break;
      }
      goto LABEL_19;
    }
    LOWORD(v18) = *(_WORD *)(a2 + 8);
    WORD1(v18) = v18;
    *((_QWORD *)&v18 + 1) = *(_QWORD *)(a2 + 16);
    LOWORD(v19) = *((_WORD *)v5 + 24);
    WORD1(v19) = v19;
    *((_QWORD *)&v19 + 1) = v5[7];
    if ( *(_QWORD *)a2 == v5[5] )
    {
      v13 = &v19;
LABEL_17:
      if ( (unsigned __int8)sub_1402053BC(&v18, v13) )
        v3 = 1;
    }
LABEL_19:
    v5 = (__int64 *)*v5;
    if ( v3 )
      break;
  }
  v10 = *(_QWORD **)(a1 + 96);
  while ( 2 )
  {
    if ( !v3 && v10 != (_QWORD *)(a1 + 96) )
    {
      v7 = (unsigned __int64)(v10 - 2);
      if ( (v10[2] & 1) == 0 && a3 )
      {
        if ( a3 <= 2u )
        {
LABEL_10:
          v12 = a2 == *(_QWORD *)(v7 + 40);
          goto LABEL_11;
        }
        switch ( a3 )
        {
          case 3u:
            v14 = (__int128 *)(v7 + 40);
            LOWORD(v18) = *(_WORD *)a2;
            WORD1(v18) = v18;
            *((_QWORD *)&v18 + 1) = *(_QWORD *)(a2 + 8);
            goto LABEL_23;
          case 4u:
            LOWORD(v18) = *(_WORD *)(a2 + 8);
            WORD1(v18) = v18;
            *((_QWORD *)&v18 + 1) = *(_QWORD *)(a2 + 16);
            LOWORD(v19) = *(_WORD *)(v7 + 48);
            WORD1(v19) = v19;
            *((_QWORD *)&v19 + 1) = *(_QWORD *)(v7 + 56);
            if ( *(_QWORD *)a2 == *(_QWORD *)(v7 + 40) )
            {
              v14 = &v19;
LABEL_23:
              if ( (unsigned __int8)sub_1402053BC(&v18, v14) )
                v3 = 1;
            }
            break;
          case 5u:
            goto LABEL_40;
          case 6u:
            goto LABEL_10;
          case 0x10u:
LABEL_40:
            v17 = *(_DWORD *)(a2 + 8);
            if ( v17 == *(_DWORD *)(v7 + 48) )
            {
              v12 = memcmp(*(const void **)a2, *(const void **)(v7 + 40), v17) == 0;
LABEL_11:
              if ( v12 )
              {
                v3 = 1;
                return v7 & -(__int64)(v3 != 0);
              }
            }
            break;
        }
      }
      v10 = (_QWORD *)*v10;
      continue;
    }
    return v7 & -(__int64)(v3 != 0);
  }
}
