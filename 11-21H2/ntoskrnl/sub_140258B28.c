/*
 * XREFs of sub_140258B28 @ 0x140258B28
 * Callers:
 *     sub_140258A60 @ 0x140258A60 (sub_140258A60.c)
 * Callees:
 *     sub_14052A9D0 @ 0x14052A9D0 (sub_14052A9D0.c)
 */

__int64 __fastcall sub_140258B28(_DWORD *a1, int *a2, int *a3)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // ebx
  unsigned int v9; // r11d
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // r9d
  int v17; // edx
  __int64 result; // rax
  int v19; // ecx
  int v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = 0;
  v3 = 0;
  v4 = a1[3];
  v5 = 0;
  v9 = -1073741637;
  if ( (v4 & 1) == 0 )
  {
    v5 = 65791;
    v9 = 0;
    goto LABEL_22;
  }
  v10 = a1[12];
  if ( (v10 & 0xFFFFFF00) == 0 )
  {
    v5 = (unsigned __int8)v10;
    if ( a1[4] == -1 )
    {
      v11 = a1[6];
      if ( v11 == 7 )
      {
        v19 = a1[8];
        if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 1 )
        {
          v5 = a1[8] & 0x1FF;
        }
        else
        {
          v3 = (v19 << 17) | 0x10000;
          if ( (v19 & 0x8000) == 0 )
            goto LABEL_18;
        }
      }
      else
      {
        if ( v11 == 8 )
        {
          v5 = a1[8];
          v3 = a1[9];
          goto LABEL_18;
        }
        switch ( a1[5] )
        {
          case 1:
            if ( v11 != 4 && (v4 & 2) != 0 )
              v5 = (unsigned __int8)v10 | 0x100;
            break;
          case 2:
            v5 = 1024;
            break;
          case 3:
            v5 = (unsigned __int8)v10 | 0x200;
            break;
          case 4:
            v5 = (unsigned __int8)v10 | 0x700;
            break;
          case 7:
            v5 = (unsigned __int8)v10 | 0x500;
            break;
          default:
            goto LABEL_22;
        }
        if ( byte_140D011A1 )
        {
          v5 &= ~0x100u;
          goto LABEL_18;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          v3 = byte_140D011A2 != 0 ? -1 : -16777216;
          goto LABEL_18;
        }
        v13 = v12 - 2;
        if ( !v13 )
        {
LABEL_18:
          v17 = v5 | 0x8000;
          if ( a1[2] )
            v17 = v5;
          v9 = 0;
          v5 = v17 | 0x2000;
          if ( *a1 != 2 )
            v5 = v17;
          goto LABEL_22;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          if ( byte_140D011A2 )
          {
            v3 = a1[8] << 24;
            if ( *((_BYTE *)KeGetCurrentPrcb() + 141) != 1 )
              v3 = a1[8];
            goto LABEL_18;
          }
          goto LABEL_16;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          v5 |= 0x800u;
LABEL_16:
          v16 = a1[8];
LABEL_17:
          v3 = v16 << 24;
          goto LABEL_18;
        }
        if ( v15 != 1 )
        {
          v5 |= 0x800u;
          goto LABEL_22;
        }
        if ( byte_140D011A2 )
        {
          if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 1 )
          {
            sub_14052A9D0(0LL, &v20);
            v16 = v20;
            goto LABEL_17;
          }
          v3 = a1[9] | (a1[8] << 16);
        }
        else
        {
          v3 = (*((unsigned __int16 *)a1 + 18) | (unsigned __int16)(16 * *((_WORD *)a1 + 16))) << 24;
        }
      }
      v5 |= 0x800u;
      goto LABEL_18;
    }
  }
LABEL_22:
  result = v9;
  *a2 = v5;
  *a3 = v3;
  return result;
}
