/*
 * XREFs of sub_1C00AFE68 @ 0x1C00AFE68
 * Callers:
 *     sub_1C003A65C @ 0x1C003A65C (sub_1C003A65C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C0076740 @ 0x1C0076740 (sub_1C0076740.c)
 *     sub_1C0077BD8 @ 0x1C0077BD8 (sub_1C0077BD8.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AFE68(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdi
  char v7; // r13
  __int64 v8; // rsi
  unsigned __int16 v9; // r12
  __int16 v10; // ax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r9
  int v14; // eax
  int v15; // ebx
  char v17; // [rsp+28h] [rbp-51h]
  int v18; // [rsp+40h] [rbp-39h]
  __int64 v19; // [rsp+48h] [rbp-31h]
  _OWORD Dst[7]; // [rsp+60h] [rbp-19h] BYREF
  int v21; // [rsp+E0h] [rbp+67h] BYREF
  int v22; // [rsp+E8h] [rbp+6Fh] BYREF

  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  memset_0(Dst, 0, 0x40uLL);
  *a3 = 0LL;
  v9 = 0;
  v22 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v21 = -1073741637;
LABEL_38:
    sub_1C003EC88(v9, &v21);
    v15 = v21;
    goto LABEL_39;
  }
  if ( *(_DWORD *)(a1 + 5964) != 1 )
  {
    v21 = -1073741436;
    goto LABEL_38;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x88u )
  {
    v21 = -1073741585;
    goto LABEL_38;
  }
  v6 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v6 == 1
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x80u
    && (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) <= 0xFFFDu
    && *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) == 1
    && *(_WORD *)(*(_QWORD *)(a2 + 24) + 26LL) >= 0x70u
    && (v10 = *(_WORD *)(*(_QWORD *)(a2 + 24) + 28LL), (v10 & 3) != 0) )
  {
    if ( (v10 & 2) != 0 && (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 24) + 60LL) - 1) > 2 )
    {
      v21 = -1073741811;
      goto LABEL_38;
    }
    if ( *(_DWORD *)(a1 + 5960) != 1 )
    {
      v21 = sub_1C0078140(a1, 1);
      if ( v21 < 0 )
        goto LABEL_38;
      v7 = 1;
    }
    v11 = sub_1C0007CF4(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
    v8 = v11;
    if ( !v11 )
    {
      v21 = -1073741670;
      goto LABEL_38;
    }
    if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
    {
      *(_WORD *)v11 |= 1u;
      *(_WORD *)(v11 + 2) = *(_WORD *)(v6 + 22);
      *(_WORD *)(v11 + 4) = *(_WORD *)(v6 + 24);
      *(_BYTE *)(v11 + 6) = *(_BYTE *)(v6 + 26);
      *(_WORD *)(v11 + 8) = *(_WORD *)(v6 + 32);
      *(_WORD *)(v11 + 10) = *(_WORD *)(v6 + 36);
      *(_WORD *)(v11 + 12) = *(_WORD *)(v6 + 40);
      *(_WORD *)(v11 + 14) = *(_WORD *)(v6 + 44);
    }
    if ( (*(_BYTE *)(v6 + 20) & 2) != 0 )
    {
      *(_WORD *)v11 |= 2u;
      v12 = *(_DWORD *)(v6 + 52);
      switch ( v12 )
      {
        case 1:
          *(_BYTE *)(v8 + 64) = 0;
          break;
        case 2:
          *(_BYTE *)(v8 + 64) = 1;
          break;
        case 3:
          *(_BYTE *)(v8 + 64) = 2;
          break;
      }
      *(_BYTE *)(v8 + 65) = *(_BYTE *)(v6 + 56);
      *(_BYTE *)(v8 + 66) = *(_BYTE *)(v6 + 57);
      *(_DWORD *)(v8 + 68) = *(_DWORD *)(v6 + 60);
      *(_DWORD *)(v8 + 72) = *(_DWORD *)(v6 + 64);
      *(_DWORD *)(v8 + 76) = *(_DWORD *)(v6 + 68);
      *(_DWORD *)(v8 + 80) = *(_DWORD *)(v6 + 72);
      *(_DWORD *)(v8 + 84) = *(_DWORD *)(v6 + 76);
      *(_DWORD *)(v8 + 88) = *(_DWORD *)(v6 + 80);
      *(_DWORD *)(v8 + 92) = *(_DWORD *)(v6 + 84);
      *(_DWORD *)(v8 + 96) = *(_DWORD *)(v6 + 88);
    }
    if ( (*(_BYTE *)(v6 + 20) & 4) != 0 )
      *(_OWORD *)(v8 + 48) = *(_OWORD *)(v6 + 104);
    sub_1C0076740((__int64)Dst, 0, *(unsigned __int16 *)(v6 + 8), 0, 0x80u);
    v14 = sub_1C00AEFFC(
            a1,
            (void *)v8,
            0LL,
            0x80u,
            Dst,
            v17,
            1u,
            1,
            (unsigned int)v13 & v18,
            (_DWORD *)(v13 & v19),
            &v22);
    v9 = v22;
    v15 = v14;
  }
  else
  {
    v15 = -1073741811;
  }
  v21 = v15;
  if ( v8 )
    ExFreePoolWithTag((PVOID)v8, 0x464D6152u);
  if ( v15 < 0 )
    goto LABEL_38;
LABEL_39:
  if ( v7 )
    sub_1C0078140(a1, 0);
  sub_1C0077BD8(a1, v6, v9, v15);
  return (unsigned int)v15;
}
