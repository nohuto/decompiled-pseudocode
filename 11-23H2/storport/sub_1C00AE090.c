/*
 * XREFs of sub_1C00AE090 @ 0x1C00AE090
 * Callers:
 *     sub_1C003A494 @ 0x1C003A494 (sub_1C003A494.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C00767F8 @ 0x1C00767F8 (sub_1C00767F8.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AE090(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  unsigned __int16 v4; // bx
  _WORD *v5; // rdi
  unsigned __int16 *v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int16 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // esi
  unsigned int v13; // r12d
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // r8
  unsigned __int64 Size; // [rsp+68h] [rbp-31h]
  _DWORD Dst[15]; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+ACh] [rbp+13h]
  char v25; // [rsp+100h] [rbp+67h]
  int v26; // [rsp+108h] [rbp+6Fh] BYREF
  _QWORD *v27; // [rsp+110h] [rbp+77h]
  int v28; // [rsp+118h] [rbp+7Fh]

  v27 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  LOBYTE(v4) = 0;
  v5 = *(_WORD **)(a2 + 24);
  v7 = 0LL;
  v8 = *(unsigned int *)(v3 + 8);
  Size = v8;
  memset_0(Dst, 0, 0x40uLL);
  v9 = 0;
  v28 = 0;
  v25 = 0;
  *v27 = 0LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 5964) == 1 )
    {
      if ( *(_DWORD *)(v3 + 16) >= 0x18u )
      {
        v7 = v5 + 4;
        if ( v5[4] == 1 && *((_DWORD *)v5 + 3) >= 0x10u && (unsigned __int16)(v5[8] - 1) <= 0xFFFDu )
        {
          if ( !v5 || v8 < 8 )
          {
            v26 = -1073741584;
            goto LABEL_36;
          }
          if ( *(_DWORD *)(a1 + 5960) != 1 )
          {
            v26 = sub_1C0078140(a1, 1);
            if ( v26 < 0 )
              goto LABEL_36;
            v25 = 1;
          }
          v10 = sub_1C0007CF4(64LL, 4096LL, 1179476306LL, *(_QWORD *)(a1 + 8));
          v11 = v10;
          if ( !v10 )
          {
            v9 = v28;
            v26 = -1073741670;
            goto LABEL_36;
          }
          LOBYTE(v24) = 12;
          Dst[0] = Dst[0] & 0xFFFFFF00 | 0xD2;
          Dst[10] = 1024;
          v24 = v24 & 0xFF0000FF | ((unsigned __int16)v5[8] << 8);
          v9 = 0;
          v12 = sub_1C00AEFFC(a1, v10, 0, 4096, (__int64)Dst);
          v26 = v12;
          v28 = 0;
          if ( v12 >= 0 )
          {
            v13 = 24 * (*(unsigned __int16 *)(v11 + 4) + *(unsigned __int16 *)(v11 + 6)) + 44;
            memset_0(v5, 0, Size);
            *v5 = 1;
            if ( Size >= v13 )
            {
              v14 = *(unsigned __int16 *)(v11 + 4);
              *v7 = v14;
              v15 = *(unsigned __int16 *)(v11 + 6);
              v5[5] = v15;
              *(_QWORD *)(v5 + 6) = *(_QWORD *)(v11 + 8);
              *(_QWORD *)(v5 + 10) = *(_QWORD *)(v11 + 16);
              v5[14] = *(_WORD *)(v11 + 24);
              v5[15] = *(_WORD *)(v11 + 26);
              v5[16] = *(_WORD *)(v11 + 28);
              v5[17] = *(_WORD *)(v11 + 30);
              if ( (*(_BYTE *)(v11 + 32) & 1) != 0 )
                *((_BYTE *)v5 + 36) |= 1u;
              if ( (*(_BYTE *)(v11 + 32) & 2) != 0 )
                *((_BYTE *)v5 + 36) |= 2u;
              if ( (*(_BYTE *)(v11 + 32) & 4) != 0 )
                *((_BYTE *)v5 + 36) |= 4u;
              if ( (*(_BYTE *)(v11 + 32) & 8) != 0 )
                *((_BYTE *)v5 + 36) |= 8u;
              v16 = 0;
              if ( v15 + v14 )
              {
                do
                {
                  v17 = v16;
                  v18 = 3LL * v16;
                  v5[4 * v18 + 22] = 1;
                  *(_DWORD *)&v5[12 * v16 + 24] = 24;
                  v19 = -(v16++ < *v7);
                  LOBYTE(v5[4 * v18 + 26]) = v19 + 2;
                  *(_QWORD *)&v5[4 * v18 + 30] = *(_QWORD *)(v11 + 8 * v17 + 40);
                }
                while ( v16 < *v7 + (unsigned int)(unsigned __int16)v5[5] );
              }
              *v27 = v13;
            }
            else
            {
              v12 = -2147483643;
              v26 = -2147483643;
              *v27 = 8LL;
            }
            *((_DWORD *)v5 + 1) = v13;
            v9 = v28;
          }
          ExFreePoolWithTag((PVOID)v11, 0x464D6152u);
        }
        else
        {
          v12 = -1073741811;
          v26 = -1073741811;
        }
        if ( v12 >= 0 )
          goto LABEL_37;
        goto LABEL_36;
      }
      v26 = -1073741585;
    }
    else
    {
      v26 = -1073741436;
    }
  }
  else
  {
    v26 = -1073741637;
  }
LABEL_36:
  sub_1C003EC88(v9, &v26);
  v12 = v26;
LABEL_37:
  if ( v25 )
    sub_1C0078140(a1, 0);
  v20 = 0LL;
  if ( v12 >= 0 )
    v20 = (__int64)v5;
  if ( v7 )
    v4 = v7[4];
  sub_1C00767F8(a1, v4, v20, v9, v12);
  return (unsigned int)v12;
}
