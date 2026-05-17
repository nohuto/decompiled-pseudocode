/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x180058070
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x180056224 (RtlpHpVaMgrRangeCreate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1800564C0 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegSegmentFree @ 0x180057A70 (RtlpHpSegSegmentFree.c)
 *     RtlpHpVaMgrRangeCleanup @ 0x180057FAC (RtlpHpVaMgrRangeCleanup.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x180058338 (RtlpCSparseBitmapPageDecommit.c)
 */

void __fastcall RtlCSparseBitmapBitsClear(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r8
  signed __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  volatile signed __int32 *v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 *v14; // r9
  __int64 *v15; // r10
  __int64 v16; // rdx
  __int64 *i; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  while ( a3 )
  {
    v6 = a2 & 0x7FFF;
    v7 = a3;
    v8 = v6 + a3;
    if ( a3 < 0 )
    {
      v7 = ~v6;
      if ( v8 >= 0 )
        v7 = a3;
    }
    else if ( v8 > 0x8000 )
    {
      v7 = 0x8000 - v6;
    }
    v9 = a2 >> 15;
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    {
      if ( !_bittest64(*(const signed __int64 **)a1, v9) )
        goto LABEL_33;
      v24 = *(_QWORD *)(a1 + 8) + (v9 << 12);
      v10 = v7;
      v11 = (volatile signed __int32 *)(v24 + 4 * (v6 >> 5));
      v12 = a2 & 0x1F;
      if ( (unsigned __int64)(v12 + v7) <= 0x20 )
      {
        if ( v7 == 32 )
        {
          *v11 = 0;
          goto LABEL_13;
        }
        v21 = ~(((1 << v7) - 1) << v12);
      }
      else
      {
        if ( (a2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v11, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v12));
          v10 = v7 - (32 - (unsigned int)(a2 & 0x1F));
          ++v11;
        }
        while ( v10 >= 0x20 )
        {
          *v11++ = 0;
          v10 -= 32LL;
        }
        if ( !v10 )
        {
LABEL_13:
          if ( v7 >= 512 )
          {
            v19 = 1;
          }
          else
          {
            v13 = a2 & 0x7E00;
            if ( 0x8000 - v13 < 0x200 )
              goto LABEL_21;
            v14 = (__int64 *)(v24 + 8 * (v13 >> 6));
            v15 = (__int64 *)(v24 + 8 * ((v13 + 511) >> 6));
            v16 = *v14;
            if ( v14 == v15 )
            {
              v20 = v16 == 0;
              goto LABEL_23;
            }
            if ( v16 )
            {
LABEL_21:
              v19 = 0;
            }
            else
            {
              for ( i = v14 + 1; ; ++i )
              {
                v18 = *i;
                if ( i == v15 )
                  break;
                if ( v18 )
                  goto LABEL_21;
              }
              v20 = v18 == 0;
LABEL_23:
              v19 = v20;
            }
          }
          if ( v19 )
            RtlpCSparseBitmapPageDecommit(a1, a2 >> 15, v7 == 0x8000);
          goto LABEL_33;
        }
        v21 = -1 << v10;
      }
      _InterlockedAnd(v11, v21);
      goto LABEL_13;
    }
    v22 = a2 & 0x3FFFFFFF;
    v7 = a3;
    v23 = v22 + a3;
    if ( a3 >= 0 )
    {
      if ( v23 > 0x40000000 )
        v7 = 0x40000000 - v22;
    }
    else
    {
      v7 = ~(unsigned __int64)(unsigned int)v22;
      if ( v23 >= 0 )
        v7 = a3;
    }
LABEL_33:
    a2 += v7;
    a3 -= v7;
  }
}
