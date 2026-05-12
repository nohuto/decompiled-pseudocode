/*
 * XREFs of sub_1C00AE43C @ 0x1C00AE43C
 * Callers:
 *     sub_1C003A494 @ 0x1C003A494 (sub_1C003A494.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     NaptrDnsRecordConvert @ 0x1C0076ECC (NaptrDnsRecordConvert.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AE43C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  _DWORD *v5; // rbx
  size_t v7; // r12
  __int64 v8; // rsi
  unsigned __int16 v9; // r15
  __int64 v10; // rax
  unsigned __int8 *v11; // rdi
  int v12; // ecx
  int v13; // r14d
  unsigned __int8 v14; // cl
  int v15; // eax
  __int128 v16; // xmm0
  _DWORD Dst[15]; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v19; // [rsp+9Ch] [rbp+23h]
  int v20; // [rsp+E0h] [rbp+67h] BYREF
  int v21; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v22; // [rsp+F0h] [rbp+77h]

  v22 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD **)(a2 + 24);
  v7 = *(unsigned int *)(v3 + 8);
  memset_0(Dst, 0, 0x40uLL);
  v8 = 0LL;
  v9 = 0;
  v21 = 0;
  *a3 = 0LL;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v20 = -1073741637;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(a1 + 5964) != 1 )
  {
    v20 = -1073741436;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(v3 + 16) < 0x18u )
  {
    v20 = -1073741585;
    goto LABEL_32;
  }
  if ( *((_WORD *)v5 + 4) == 1 && v5[3] >= 0x10u && (unsigned __int16)(*((_WORD *)v5 + 8) - 1) <= 0xFFFDu )
  {
    if ( !v5 || v7 < 0x70 )
    {
      v20 = -1073741789;
      goto LABEL_32;
    }
    v10 = sub_1C0007CF4(64LL, 264LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v11 = (unsigned __int8 *)v10;
    if ( !v10 )
    {
      v20 = -1073741670;
      goto LABEL_32;
    }
    v12 = *((unsigned __int16 *)v5 + 8);
    LOBYTE(v19) = 2;
    Dst[0] = Dst[0] & 0xFFFFFF00 | 0xD2;
    Dst[10] = 66;
    v19 = v19 & 0xFF0000FF | (v12 << 8);
    v20 = sub_1C00AEFFC(a1, v10, 0, 264, (__int64)Dst);
    v13 = v20;
    if ( v20 >= 0 )
    {
      memset_0(v5, 0, v7);
      if ( *(_WORD *)v11 )
      {
        *v5 = 7340033;
        if ( (v11[36] & 1) != 0 )
        {
          *((_WORD *)v5 + 2) |= 1u;
          *((_WORD *)v5 + 3) = *((_WORD *)v11 + 19);
          *((_WORD *)v5 + 4) = *((_WORD *)v11 + 20);
          *((_WORD *)v5 + 5) = v11[42];
          v5[4] = *((_DWORD *)v11 + 12);
          v5[5] = *((_DWORD *)v11 + 14);
          v5[6] = *((_DWORD *)v11 + 16);
          v5[7] = *((_DWORD *)v11 + 18);
        }
        if ( (v11[36] & 2) != 0 )
        {
          *((_WORD *)v5 + 2) |= 2u;
          v5[8] = 3670017;
          v14 = v11[136];
          if ( v14 )
          {
            if ( v14 == 1 )
            {
              v5[9] = 2;
            }
            else
            {
              v15 = 0;
              if ( v14 == 2 )
                v15 = 3;
              v5[9] = v15;
            }
          }
          else
          {
            v5[9] = 1;
          }
          *((_BYTE *)v5 + 40) = v11[137];
          *((_BYTE *)v5 + 41) = v11[138];
          v5[11] = *((_DWORD *)v11 + 35);
          v5[12] = *((_DWORD *)v11 + 36);
          v5[13] = *((_DWORD *)v11 + 37);
          v5[14] = *((_DWORD *)v11 + 38);
          v5[15] = *((_DWORD *)v11 + 39);
          v5[16] = *((_DWORD *)v11 + 40);
          v5[17] = *((_DWORD *)v11 + 41);
          v5[18] = *((_DWORD *)v11 + 42);
        }
        v16 = *(_OWORD *)(v11 + 120);
        *v22 = 112LL;
        *(_OWORD *)(v5 + 22) = v16;
      }
    }
    ExFreePoolWithTag(v11, 0x464D6152u);
    v9 = v21;
  }
  else
  {
    v13 = -1073741811;
    v20 = -1073741811;
  }
  if ( v13 >= 0 )
  {
LABEL_33:
    v8 = (__int64)v5;
    goto LABEL_34;
  }
LABEL_32:
  sub_1C003EC88(v9, &v20);
  v13 = v20;
  if ( v20 >= 0 )
    goto LABEL_33;
LABEL_34:
  NaptrDnsRecordConvert(a1, v8, v9, v13);
  return (unsigned int)v13;
}
