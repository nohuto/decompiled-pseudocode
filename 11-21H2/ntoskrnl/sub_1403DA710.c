/*
 * XREFs of sub_1403DA710 @ 0x1403DA710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DA710(__int64 a1, _DWORD *a2, unsigned __int64 *a3, _QWORD *a4)
{
  int v4; // ebx
  unsigned int v5; // r11d
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // r9
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // edx
  char v16; // cl
  int v17; // eax
  int v18; // eax

  v5 = 0;
  v9 = a2[6];
  v4 = v9;
  switch ( v9 )
  {
    case 1:
      v9 = 4;
      v10 = 255;
      goto LABEL_5;
    case 4:
    case 5:
      v10 = a2[8];
LABEL_5:
      v11 = ((unsigned __int8)v10 | 0xFEE00LL) << 12;
      if ( byte_140D011A2 )
        v11 |= (unsigned __int64)(v10 & 0xFFFFFF00) << 24;
      if ( v9 != 4 )
      {
        v11 |= 4uLL;
        if ( (a2[3] & 2) != 0 )
          v11 |= 8uLL;
      }
      v12 = a2[12] | 0x4000;
      if ( a2[2] != 1 )
        v12 = a2[12];
      v13 = v12 | 0x800;
      if ( v4 == 4 )
        v13 = v12;
      v14 = v13 | 0x100;
      if ( (a2[3] & 2) == 0 )
        v14 = v13;
      goto LABEL_16;
    case 6:
      v17 = a2[8];
      if ( byte_140D011A2 )
        v18 = v17 << 16;
      else
        v18 = 16 * v17;
      v10 = v18 | a2[9];
      goto LABEL_5;
  }
  if ( v9 != 7 )
    return (unsigned int)-1073741822;
  v16 = *((_BYTE *)KeGetCurrentPrcb() + 141);
  if ( v16 == 2 )
  {
    v14 = 0;
    v11 = (32 * (a2[8] & 0x7FFFu)) | (unsigned __int64)((a2[8] >> 13) & 4) | 0xFEE00018;
  }
  else
  {
    if ( v16 != 1 )
      return (unsigned int)-1073741637;
    v11 = 4276092932LL;
    v14 = a2[8] & 0x1FF;
  }
LABEL_16:
  *a3 = v11;
  *a4 = v14;
  return v5;
}
