/*
 * XREFs of RaUnitAtaPassThroughMarshalResults @ 0x1C00257C6
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C002531A (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0017418 (GetSrbScsiData.c)
 */

__int64 __fastcall RaUnitAtaPassThroughMarshalResults(__int64 a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  bool v5; // zf
  _BYTE *v9; // r8
  unsigned __int8 v10; // r10
  int v11; // r9d
  char v12; // r9
  char v13; // r11
  _BYTE *v14; // rcx
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // al
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // al
  char *v19; // rax
  int v20; // r8d
  unsigned __int8 v21; // r8
  __int64 v22; // rcx
  __int64 result; // rax
  _BYTE *v24; // [rsp+50h] [rbp+8h] BYREF
  char v25; // [rsp+60h] [rbp+18h] BYREF

  v24 = 0LL;
  v5 = *(_BYTE *)(a1 + 2) == 40;
  v25 = 0;
  if ( v5 )
  {
    GetSrbScsiData(a1, 0LL, 0LL, 0LL, &v24, &v25);
    v9 = v24;
    v10 = v25;
    v11 = *(_DWORD *)(a1 + 60);
  }
  else
  {
    v9 = *(_BYTE **)(a1 + 32);
    v10 = *(_BYTE *)(a1 + 11);
    v11 = *(_DWORD *)(a1 + 16);
  }
  *((_DWORD *)a2 + 2) = v11;
  if ( *(char *)(a1 + 3) >= 0 || !v9 )
    goto LABEL_34;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v12 = *v9 & 0x7F;
  if ( (unsigned __int8)(v12 - 114) > 1u )
  {
    if ( (unsigned __int8)(v12 - 112) > 1u || v10 < 0xCu )
      goto LABEL_34;
    *((_BYTE *)a2 + 40) = v9[3];
    *((_BYTE *)a2 + 41) = v9[6];
    *((_BYTE *)a2 + 42) = v9[11];
    *((_BYTE *)a2 + 43) = v9[10];
    *((_BYTE *)a2 + 44) = v9[9];
    *((_BYTE *)a2 + 45) = v9[5];
    *((_BYTE *)a2 + 46) = v9[4];
    goto LABEL_32;
  }
  v13 = 0;
  if ( v10 )
  {
    v14 = 0LL;
    v15 = 0;
    if ( (unsigned __int8)(v12 - 114) <= 1u )
    {
      if ( v9 + 8 <= &v9[v10] )
      {
        v16 = v9[7];
        if ( v16 <= 0xF7u )
        {
          v17 = v10;
          v18 = v16 + 8;
          if ( v18 <= v10 )
            v17 = v18;
          v15 = v17 - 8;
          if ( v15 )
          {
            v14 = v9 + 8;
            v13 = 1;
          }
        }
      }
      if ( v13 )
      {
        v25 = 9;
        if ( v14 )
        {
          if ( v15 )
          {
LABEL_27:
            if ( v15 < 2u )
              goto LABEL_34;
            v19 = &v25;
            v20 = 0;
            while ( *v14 != *v19 )
            {
              ++v20;
              ++v19;
              if ( v20 )
              {
                v21 = v14[1] + 2;
                if ( v15 <= v21 )
                  goto LABEL_34;
                v14 += v21;
                v15 -= v21;
                goto LABEL_27;
              }
            }
            if ( v15 < 0xEu )
              goto LABEL_34;
            *((_BYTE *)a2 + 40) = v14[3];
            *((_BYTE *)a2 + 41) = v14[5];
            *((_BYTE *)a2 + 42) = v14[7];
            *((_BYTE *)a2 + 43) = v14[9];
            *((_BYTE *)a2 + 44) = v14[11];
            *((_BYTE *)a2 + 45) = v14[12];
            *((_BYTE *)a2 + 46) = v14[13];
            if ( (v14[2] & 1) != 0 )
            {
              *((_BYTE *)a2 + 33) = v14[4];
              *((_BYTE *)a2 + 34) = v14[6];
              *((_BYTE *)a2 + 35) = v14[8];
              *((_BYTE *)a2 + 36) = v14[10];
            }
LABEL_32:
            if ( (*(_BYTE *)(a1 + 3) & 0x3F) == 0xE )
            {
              *((_BYTE *)a2 + 46) = 65;
              *((_BYTE *)a2 + 40) = 1;
            }
          }
        }
      }
    }
  }
LABEL_34:
  if ( a3 != 1 && (a2[1] & 2) != 0 && (v22 = *((_QWORD *)a2 + 3)) != 0 )
    result = v22 + *((unsigned int *)a2 + 2);
  else
    result = *a2;
  *(_QWORD *)(a4 + 8) = result;
  *(_DWORD *)a4 = 0;
  return result;
}
