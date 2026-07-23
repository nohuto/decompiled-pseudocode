/*
 * XREFs of sub_1403E5930 @ 0x1403E5930
 * Callers:
 *     _raise_exc @ 0x1403E5900 (_raise_exc.c)
 *     _raise_excf @ 0x1403E5BC0 (_raise_excf.c)
 * Callees:
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     _clrfp @ 0x1403E5BF4 (_clrfp.c)
 *     _statfp @ 0x1403E5CC4 (_statfp.c)
 */

__int64 __fastcall sub_1403E5930(
        unsigned int *a1,
        unsigned __int64 *a2,
        char a3,
        int a4,
        unsigned int *a5,
        unsigned int *a6,
        int a7)
{
  DWORD v7; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  char v14; // al
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int *v18; // rsi
  unsigned int *v19; // rcx
  unsigned int v20; // eax
  unsigned __int64 v21; // rax
  __int64 result; // rax
  unsigned int *v23; // [rsp+30h] [rbp+8h] BYREF

  v23 = a1;
  v7 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  if ( (a3 & 0x10) != 0 )
  {
    a1[1] |= 1u;
    v7 = -1073741681;
  }
  if ( (a3 & 2) != 0 )
  {
    a1[1] |= 2u;
    v7 = -1073741677;
  }
  if ( (a3 & 1) != 0 )
  {
    a1[1] |= 4u;
    v7 = -1073741679;
  }
  if ( (a3 & 4) != 0 )
  {
    a1[1] |= 8u;
    v7 = -1073741682;
  }
  if ( (a3 & 8) != 0 )
  {
    a1[1] |= 0x10u;
    v7 = -1073741680;
  }
  a1[2] ^= (a1[2] ^ ~(16 * (*a2 >> 7))) & 0x10;
  v11 = a1[2] ^ ((unsigned __int8)a1[2] ^ (unsigned __int8)~(8 * (*a2 >> 9))) & 8;
  a1[2] = v11;
  v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)~(4 * (*a2 >> 10))) & 4;
  a1[2] = v12;
  v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)~(2 * (*a2 >> 11))) & 2;
  a1[2] = v13;
  a1[2] = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)~(unsigned __int8)((unsigned __int64)*(unsigned int *)a2 >> 12)) & 1;
  v14 = statfp();
  if ( (v14 & 1) != 0 )
    a1[3] |= 0x10u;
  if ( (v14 & 4) != 0 )
    a1[3] |= 8u;
  if ( (v14 & 8) != 0 )
    a1[3] |= 4u;
  if ( (v14 & 0x10) != 0 )
    a1[3] |= 2u;
  if ( (v14 & 0x20) != 0 )
    a1[3] |= 1u;
  v15 = *(_DWORD *)a2 & 0x6000LL;
  switch ( v15 )
  {
    case 0LL:
      *a1 &= 0xFFFFFFFC;
      break;
    case 8192LL:
      v16 = *a1 & 0xFFFFFFFC | 1;
      goto LABEL_27;
    case 16384LL:
      v16 = *a1 & 0xFFFFFFFC | 2;
LABEL_27:
      *a1 = v16;
      break;
    case 24576LL:
      *a1 |= 3u;
      break;
  }
  *a1 ^= (*a1 ^ (32 * a4)) & 0x1FFE0;
  v17 = a1[8];
  v18 = a6;
  if ( a7 )
  {
    a1[8] = v17 & 0xFFFFFFE0 | 1;
    a1[4] = *a5;
    a1[24] = a1[24] & 0xFFFFFFE0 | 1;
    a1[20] = *v18;
  }
  else
  {
    a1[8] = v17 & 0xFFFFFFE0 | 3;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a5;
    a1[24] = a1[24] & 0xFFFFFFE0 | 3;
    *((_QWORD *)a1 + 10) = *(_QWORD *)v18;
  }
  clrfp();
  sub_1403E5840(v7, 0, 1u, &v23);
  v19 = v23;
  v20 = v23[2];
  if ( (v20 & 0x10) != 0 )
  {
    *a2 &= ~0x80uLL;
    v20 = v19[2];
  }
  if ( (v20 & 8) != 0 )
  {
    *a2 &= ~0x200uLL;
    v20 = v19[2];
  }
  if ( (v20 & 4) != 0 )
  {
    *a2 &= ~0x400uLL;
    v20 = v19[2];
  }
  if ( (v20 & 2) != 0 )
  {
    *a2 &= ~0x800uLL;
    v20 = v19[2];
  }
  if ( (v20 & 1) != 0 )
    *a2 &= ~0x1000uLL;
  switch ( *v19 & 3 )
  {
    case 0u:
      *a2 &= 0xFFFFFFFFFFFF9FFFuLL;
      break;
    case 1u:
      v21 = *a2 & 0xFFFFFFFFFFFF9FFFuLL | 0x2000;
      goto LABEL_49;
    case 2u:
      v21 = *a2 & 0xFFFFFFFFFFFF9FFFuLL | 0x4000;
LABEL_49:
      *a2 = v21;
      break;
    case 3u:
      *a2 |= 0x6000uLL;
      break;
  }
  if ( a7 )
  {
    result = v19[20];
    *v18 = result;
  }
  else
  {
    result = *((_QWORD *)v19 + 10);
    *(_QWORD *)v18 = result;
  }
  return result;
}
