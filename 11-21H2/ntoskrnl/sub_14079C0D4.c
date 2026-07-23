/*
 * XREFs of sub_14079C0D4 @ 0x14079C0D4
 * Callers:
 *     sub_140761188 @ 0x140761188 (sub_140761188.c)
 * Callees:
 *     sub_1402983F0 @ 0x1402983F0 (sub_1402983F0.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_1402E5760 @ 0x1402E5760 (sub_1402E5760.c)
 */

__int64 __fastcall sub_14079C0D4(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // r12
  unsigned int v9; // esi
  unsigned int v10; // r13d
  unsigned int *v11; // r15
  unsigned int v12; // eax
  unsigned int *i; // rbx
  int v14; // r12d
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rbx
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // ecx
  __int64 v20; // rax
  char v21; // cl
  unsigned int *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // [rsp+60h] [rbp+8h]

  v6 = a1 + a2;
  if ( a3 >= a1 )
  {
    v8 = a4 + a3;
    v25 = v8;
    if ( v8 <= v6 )
    {
      v9 = a4 / 0xC;
      if ( a4 == 12 * (a4 / 0xCuLL) )
      {
        RtlSetBits(BitMapHeader, (a3 - a1) >> 12, ((a3 - a1 + a4 + 4095LL) >> 12) - ((a3 - a1) >> 12));
        v10 = 0;
        if ( !v9 )
          return 0LL;
        v11 = (unsigned int *)a3;
LABEL_6:
        v12 = v11[2];
        for ( i = v11; (v12 & 1) != 0; v12 = i[2] )
        {
          v24 = sub_1402983F0((__int64)i, a1);
          i = (unsigned int *)v24;
          if ( v24 >= a3 && v24 + 12 <= v8 )
            break;
          if ( v24 < a1 || v24 > v6 - 12 )
            return 3221225727LL;
          RtlSetBits(
            BitMapHeader,
            (v24 - a1) >> 12,
            ((unsigned __int64)(((_WORD)v24 - (_WORD)a1) & 0xFFF) + 12 > 0x1000) + 1);
        }
        v14 = 0;
        while ( 1 )
        {
          v15 = i[2];
          v16 = (_BYTE *)(v15 + a1);
          if ( v15 + a1 < a1 || (unsigned __int64)(v16 + 6) > v6 )
            break;
          v17 = (unsigned __int8)v16[2];
          v18 = (v17 & 1) == 0;
          v19 = 2 * v17 + 6;
          v20 = (unsigned int)(2 * v17 + 8);
          if ( v18 )
            v20 = v19;
          v21 = *v16 >> 3;
          if ( (v21 & 4) != 0 )
          {
            v20 = (unsigned int)(v20 + 12);
          }
          else if ( (v21 & 3) != 0 )
          {
            v20 = (unsigned int)(v20 + 8);
          }
          if ( (unsigned __int64)&v16[v20] > v6 )
            break;
          RtlSetBits(BitMapHeader, v15 >> 12, ((v15 + (unsigned int)v20 + 4095LL) >> 12) - (v15 >> 12));
          if ( (*v16 & 0x20) != 0 )
          {
            if ( (unsigned int)++v14 > 0x20 )
              return 3221225727LL;
            i = (unsigned int *)&v16[2 * (((unsigned __int8)v16[2] + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) + 4];
            v23 = sub_1402E5760(a3, v9, a1 + *i, a1);
            if ( !v23 || v23[2] != i[2] )
              continue;
          }
          v8 = v25;
          ++v10;
          v11 += 3;
          if ( v10 < v9 )
            goto LABEL_6;
          return 0LL;
        }
      }
    }
  }
  return 3221225727LL;
}
