/*
 * XREFs of sub_14038A2A8 @ 0x14038A2A8
 * Callers:
 *     sub_14038A168 @ 0x14038A168 (sub_14038A168.c)
 *     sub_14038A214 @ 0x14038A214 (sub_14038A214.c)
 *     sub_14038A250 @ 0x14038A250 (sub_14038A250.c)
 *     sub_14038A288 @ 0x14038A288 (sub_14038A288.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14038A2A8(__int64 a1, __int64 a2)
{
  ULONG v2; // ebx
  ULONG v4; // r9d
  ULONG v5; // edx
  int v6; // r10d
  char *v7; // r11
  unsigned int v8; // esi
  ULONG v9; // ecx
  __int64 result; // rax
  char *v11; // rdx
  __int64 i; // r8
  unsigned int v13; // edx
  __int64 v14; // rcx
  ULONG SizeOfBitMap; // edx

  v2 = 0;
  while ( 2 )
  {
    v4 = v2 < qword_140C51F28->SizeOfBitMap ? v2 : 0;
    v5 = qword_140C51F28->SizeOfBitMap - 1;
    v6 = ((__int64)qword_140C51F28->Buffer & 4) != 0LL ? 0x20 : 0;
    v7 = (char *)qword_140C51F28->Buffer - (((__int64)qword_140C51F28->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v8 = v6 + v5;
      v9 = v6 + v4;
      result = v5 - v4 + 1;
      if ( v5 - v4 != -1 )
      {
        v11 = &v7[8 * ((unsigned __int64)v9 >> 6)];
        result = ~*(_QWORD *)v11;
        for ( i = result | ((1LL << (v9 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v11 )
        {
          v11 += 8;
          if ( v11 > &v7[8 * ((unsigned __int64)v8 >> 6)] )
            goto LABEL_16;
        }
        _BitScanForward64((unsigned __int64 *)&result, ~i);
        v13 = result + ((unsigned int)((v11 - v7) >> 3) << 6);
        if ( v13 <= v8 )
          break;
      }
LABEL_16:
      v13 = -1;
LABEL_17:
      if ( !v4 )
        goto LABEL_11;
      SizeOfBitMap = v2 + 1;
      if ( v2 + 1 > qword_140C51F28->SizeOfBitMap )
        SizeOfBitMap = qword_140C51F28->SizeOfBitMap;
      v5 = SizeOfBitMap - 1;
      v4 = 0;
    }
    if ( v13 == -1 )
      goto LABEL_17;
    v13 -= v6;
LABEL_11:
    if ( v13 >= v2 && v13 != -1 )
    {
      v2 = v13 + 1;
      v14 = *(_QWORD *)(qword_140C51F48 + 8LL * v13);
      if ( (*(_DWORD *)(v14 + 4) & 2) != 0 )
        sub_14042A5E0(v14, a2);
      continue;
    }
    return result;
  }
}
