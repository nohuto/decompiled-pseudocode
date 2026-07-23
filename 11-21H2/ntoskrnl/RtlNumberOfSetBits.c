/*
 * XREFs of RtlNumberOfSetBits @ 0x140209960
 * Callers:
 *     RtlNumberOfClearBits @ 0x140209930 (RtlNumberOfClearBits.c)
 *     sub_14020A620 @ 0x14020A620 (sub_14020A620.c)
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_140262650 @ 0x140262650 (sub_140262650.c)
 *     sub_1403865C4 @ 0x1403865C4 (sub_1403865C4.c)
 *     sub_1405038DC @ 0x1405038DC (sub_1405038DC.c)
 *     sub_1405189C4 @ 0x1405189C4 (sub_1405189C4.c)
 *     sub_140672348 @ 0x140672348 (sub_140672348.c)
 *     sub_14068578C @ 0x14068578C (sub_14068578C.c)
 *     sub_140688318 @ 0x140688318 (sub_140688318.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_140689900 @ 0x140689900 (sub_140689900.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14068F1F8 @ 0x14068F1F8 (sub_14068F1F8.c)
 *     sub_140696750 @ 0x140696750 (sub_140696750.c)
 *     sub_14076200C @ 0x14076200C (sub_14076200C.c)
 *     sub_1407EF514 @ 0x1407EF514 (sub_1407EF514.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 *     sub_14091D4B0 @ 0x14091D4B0 (sub_14091D4B0.c)
 *     sub_140924E08 @ 0x140924E08 (sub_140924E08.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // r9d
  PULONG Buffer; // rax
  ULONG v3; // r10d
  ULONG SizeOfBitMap; // r14d
  ULONG v5; // ebp
  int v6; // r11d
  ULONG v7; // edi
  ULONG v8; // r8d
  int v9; // r10d
  int v10; // esi
  ULONG v11; // r11d
  int i; // ebx
  char v13; // dl
  unsigned int v14; // ecx
  __int64 v15; // r10
  unsigned __int64 v16; // r8
  char v18; // dl

  v1 = 0;
  Buffer = BitMapHeader->Buffer;
  v3 = BitMapHeader->SizeOfBitMap >> 3;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = BitMapHeader->SizeOfBitMap & 7;
  v6 = (unsigned __int8)Buffer & 7;
  v7 = v3 + (v5 != 0);
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) > (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v8 = v3 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v10 = 0;
    v11 = 0;
  }
  else
  {
    v8 = 8 - v6;
    v9 = ((_BYTE)v3 - (8 - (_BYTE)v6)) & 7;
    v10 = v9 + 1;
    if ( !v5 )
      v10 = v9;
    v11 = v7 - v10 - v8;
  }
  for ( i = 0; v8; --v8 )
  {
    v13 = *(_BYTE *)Buffer;
    Buffer = (PULONG)((char *)Buffer + 1);
    if ( i == v7 - 1 && v5 )
      v13 &= byte_140018DF0[SizeOfBitMap & 7];
    ++i;
    v1 += *((unsigned __int8 *)qword_14001BA70 + (unsigned __int8)~v13);
  }
  if ( v11 )
  {
    v14 = ((v11 - 1) >> 3) + 1;
    v15 = v14;
    i += 8 * v14;
    do
    {
      v16 = *(_QWORD *)Buffer;
      Buffer += 2;
      v1 += (unsigned int)((0x101010101010101LL
                          * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v15;
    }
    while ( v15 );
  }
  for ( ; v10; --v10 )
  {
    v18 = *(_BYTE *)Buffer;
    Buffer = (PULONG)((char *)Buffer + 1);
    if ( i == v7 - 1 && v5 )
      v18 &= byte_140018DF0[SizeOfBitMap & 7];
    ++i;
    v1 += *((unsigned __int8 *)qword_14001BA70 + (unsigned __int8)~v18);
  }
  return v1;
}
