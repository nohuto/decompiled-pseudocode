/*
 * XREFs of RtlNumberOfSetBits @ 0x18007FD00
 * Callers:
 *     RtlNumberOfClearBits @ 0x18008C460 (RtlNumberOfClearBits.c)
 *     TpSetPoolThreadCpuSets @ 0x180125810 (TpSetPoolThreadCpuSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNumberOfSetBits(unsigned int *a1)
{
  char *v1; // r10
  unsigned int v2; // edx
  int v3; // r14d
  int v4; // esi
  unsigned int v5; // edi
  int v6; // r8d
  unsigned int v7; // r11d
  int v8; // ebx
  unsigned int v9; // r9d
  unsigned int v10; // edx
  int i; // r8d
  char v12; // cl
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // r11d
  char v20; // cl

  v1 = (char *)*((_QWORD *)a1 + 1);
  v2 = *a1 >> 3;
  v3 = *a1;
  v4 = *a1 & 7;
  v5 = 0;
  v6 = (unsigned __int8)v1 & 7;
  v7 = v2 + (v4 != 0);
  if ( 8 - (unsigned __int64)(a1[2] & 7) <= (unsigned __int64)*a1 >> 3 )
  {
    v9 = 8 - v6;
    v18 = ((_BYTE)v2 - (8 - (_BYTE)v6)) & 7;
    v8 = v18 + 1;
    if ( !v4 )
      v8 = v18;
    v10 = v7 - v8 - v9;
  }
  else
  {
    v8 = 0;
    v9 = v2 + ((*a1 & 7) != 0);
    v10 = 0;
  }
  for ( i = 0; v9; --v9 )
  {
    v12 = *v1++;
    if ( i == v7 - 1 && v4 )
      v12 &= byte_1801430C0[v3 & 7];
    ++i;
    v5 += RtlpBitsClearTotal[(unsigned __int8)~v12];
  }
  if ( v10 )
  {
    v14 = ((v10 - 1) >> 3) + 1;
    v15 = v14;
    i += 8 * v14;
    do
    {
      v16 = *(_QWORD *)v1;
      v17 = *(_QWORD *)v1;
      v1 += 8;
      v5 += (unsigned int)((0x101010101010101LL
                          * ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v15;
    }
    while ( v15 );
  }
  if ( v8 )
  {
    v19 = v7 - 1;
    do
    {
      v20 = *v1++;
      if ( i == v19 && v4 )
        v20 &= byte_1801430C0[v3 & 7];
      ++i;
      v5 += RtlpBitsClearTotal[(unsigned __int8)~v20];
      --v8;
    }
    while ( v8 );
  }
  return v5;
}
