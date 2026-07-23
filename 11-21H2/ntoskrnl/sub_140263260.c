/*
 * XREFs of sub_140263260 @ 0x140263260
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x140263790 (KeQueryLogicalProcessorRelationship.c)
 *     sub_1406D0CB0 @ 0x1406D0CB0 (sub_1406D0CB0.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 * Callees:
 *     sub_14026428C @ 0x14026428C (sub_14026428C.c)
 *     sub_140354698 @ 0x140354698 (sub_140354698.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140263260(unsigned __int16 a1, unsigned __int16 *a2, _WORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+28h] [rbp-18h]
  int v9; // [rsp+2Ch] [rbp-14h]
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF
  __int16 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v3 = a1;
  v12 = 0LL;
  v11 = 0;
  v10 = 0LL;
  if ( a2 )
  {
    memset(a2 + 4, 0, 8LL * *a2);
    *a2 = 1;
  }
  if ( a3 )
    *a3 = 0;
  if ( (unsigned __int16)v3 < (unsigned __int16)word_140D05000 )
  {
    _mm_lfence();
    v9 = 0;
    v7 = qword_140D31700[v3];
    v8 = *(_DWORD *)(v7 + 16);
    while ( 1 )
    {
      if ( (unsigned int)sub_140354698(&v7, &v12) )
        return;
      sub_14026428C(v12, &v10, &v11);
      if ( a2 )
      {
        v6 = WORD4(v10);
        if ( *a2 <= WORD4(v10) )
        {
          if ( a2[1] <= WORD4(v10) )
            goto LABEL_12;
          *a2 = WORD4(v10) + 1;
        }
        *(_QWORD *)&a2[4 * v6 + 4] |= v10;
      }
LABEL_12:
      if ( a3 )
        *a3 += v11;
    }
  }
}
