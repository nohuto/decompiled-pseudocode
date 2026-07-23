/*
 * XREFs of sub_1409B7678 @ 0x1409B7678
 * Callers:
 *     PfxFindPrefix @ 0x1409B7900 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1409B7A00 (PfxInsertPrefix.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

__int64 __fastcall sub_1409B7678(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v3; // edi
  bool v4; // r13
  __int64 v5; // r12
  _QWORD *v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebp
  unsigned int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  __int64 v13; // r15
  unsigned __int8 v14; // r10
  unsigned __int8 v15; // r11
  char v16; // bl
  char v17; // r9
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // al
  unsigned int i; // r9d
  signed __int32 v22[18]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( !sub_1407CDA20() )
  {
    _InterlockedOr(v22, 0);
    v7 = sub_140347DB0();
    v5 = v7[151];
    v4 = *((_WORD *)v7 + 538) != 0;
  }
  v8 = *a1;
  v9 = *a2;
  if ( (_WORD)v8 == 1 && **((_BYTE **)a1 + 1) == 92 && (unsigned __int16)v9 > 1u && **((_BYTE **)a2 + 1) == 92 )
    return 1LL;
  v10 = *a1;
  if ( (unsigned __int16)v8 >= (unsigned __int16)v9 )
    v10 = *a2;
  v11 = v10;
  v12 = RtlCompareMemory(*((const void **)a1 + 1), *((const void **)a2 + 1), v10);
  if ( v12 < v11 )
  {
    v13 = *((_QWORD *)a1 + 1);
    v14 = 0;
    v15 = 0;
    v23 = *((_QWORD *)a2 + 1);
    v16 = *(_BYTE *)(v12 + v23);
    v17 = *(_BYTE *)(v12 + v13);
    if ( v17 != 92 )
      v14 = *(_BYTE *)(v12 + v13);
    v18 = v14;
    if ( v16 != 92 )
      v15 = *(_BYTE *)(v12 + v23);
    v19 = v15;
    if ( v4 )
    {
      if ( v17 == 92 )
      {
        for ( i = 0; i < v12; i += (*(_WORD *)(v5 + 2LL * *(unsigned __int8 *)(i + v13)) != 0) + 1 )
          ;
        v18 = v14;
        if ( i != v12 )
          v18 = 92;
      }
      v19 = v15;
      if ( v16 == 92 )
      {
        if ( v12 )
        {
          do
            v3 += (*(_WORD *)(v5 + 2LL * *(unsigned __int8 *)(v3 + v23)) != 0) + 1;
          while ( v3 < v12 );
        }
        v19 = v15;
        if ( v3 != v12 )
          v19 = 92;
      }
    }
    if ( v18 < v19 )
      return 0LL;
    if ( v18 > v19 )
      return 3LL;
  }
  if ( (unsigned int)v8 < v9 )
    return *(_BYTE *)(v8 + *((_QWORD *)a2 + 1)) == 92;
  if ( (unsigned int)v8 <= v9 )
    return 2LL;
  else
    return 3LL;
}
