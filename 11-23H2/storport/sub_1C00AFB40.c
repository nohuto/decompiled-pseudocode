/*
 * XREFs of sub_1C00AFB40 @ 0x1C00AFB40
 * Callers:
 *     sub_1C003A65C @ 0x1C003A65C (sub_1C003A65C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EC88 @ 0x1C003EC88 (sub_1C003EC88.c)
 *     sub_1C0077460 @ 0x1C0077460 (sub_1C0077460.c)
 *     sub_1C0078140 @ 0x1C0078140 (sub_1C0078140.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C00AFB40(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  void *v7; // rsi
  unsigned __int16 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r15
  unsigned int v11; // edx
  __int64 v12; // rcx
  ULONG v13; // r13d
  char *v14; // rax
  _BYTE *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r9
  _QWORD *v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  int v21; // ecx
  int v22; // eax
  int v23; // ebx
  char v25; // [rsp+28h] [rbp-51h]
  _OWORD Dst[2]; // [rsp+60h] [rbp-19h] BYREF
  ULONG v27; // [rsp+88h] [rbp+Fh]
  unsigned int v28; // [rsp+9Ch] [rbp+23h]
  char v29; // [rsp+E0h] [rbp+67h]
  int v30; // [rsp+E8h] [rbp+6Fh] BYREF
  int v31; // [rsp+F0h] [rbp+77h] BYREF

  v3 = 0LL;
  v29 = 0;
  v7 = 0LL;
  memset_0(Dst, 0, 0x40uLL);
  *a3 = 0LL;
  v8 = 0;
  v31 = 0;
  if ( (*(_BYTE *)(a1 + 111) & 1) == 0 )
  {
    v30 = -1073741637;
LABEL_47:
    sub_1C003EC88(v8, &v30);
    v23 = v30;
    goto LABEL_48;
  }
  if ( *(_DWORD *)(a1 + 5964) != 1 )
  {
    v30 = -1073741436;
    goto LABEL_47;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x18u )
  {
    v30 = -1073741585;
    goto LABEL_47;
  }
  v3 = *(_QWORD *)(a2 + 24) + 8LL;
  if ( *(_WORD *)v3 == 1
    && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL) >= 0x54u
    && (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 24) + 16LL) - 1) <= 0xFFFDu )
  {
    v9 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 32LL)
       + (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a2 + 24) + 34LL);
    if ( *(_WORD *)(*(_QWORD *)(a2 + 24) + 24LL) != 1
      || (v10 = (unsigned int)v9, *(unsigned int *)(v3 + 20) < (unsigned __int64)(24 * v9 + 44)) )
    {
      v30 = -1073741584;
      goto LABEL_47;
    }
    v11 = 0;
    if ( (_DWORD)v9 )
    {
      v12 = v3 + 64;
      while ( *(_WORD *)(v12 - 4) == 1 && *(_DWORD *)v12 == 24 && (unsigned __int8)(*(_BYTE *)(v12 + 4) - 1) <= 1u )
      {
        ++v11;
        v12 += 24LL;
        if ( v11 >= (unsigned int)v9 )
          goto LABEL_18;
      }
      v30 = -1073741583;
      goto LABEL_47;
    }
LABEL_18:
    if ( *(_DWORD *)(a1 + 5960) != 1 )
    {
      v30 = sub_1C0078140(a1, 1);
      if ( v30 < 0 )
        goto LABEL_47;
      v29 = 1;
    }
    v13 = 8 * v9 + 40;
    v14 = (char *)sub_1C0007CF4(64LL, v13, 1179476306LL, *(_QWORD *)(a1 + 8));
    v7 = v14;
    if ( !v14 )
    {
      v30 = -1073741670;
      goto LABEL_47;
    }
    *(_DWORD *)v14 = v13;
    v15 = v14 + 32;
    *((_WORD *)v14 + 2) = *(_WORD *)(v3 + 24);
    *((_WORD *)v14 + 3) = *(_WORD *)(v3 + 26);
    *((_QWORD *)v14 + 1) = *(_QWORD *)(v3 + 28);
    *((_QWORD *)v14 + 2) = *(_QWORD *)(v3 + 36);
    *((_WORD *)v14 + 12) = *(_WORD *)(v3 + 44);
    *((_WORD *)v14 + 13) = *(_WORD *)(v3 + 46);
    *((_WORD *)v14 + 14) = *(_WORD *)(v3 + 48);
    *((_WORD *)v14 + 15) = *(_WORD *)(v3 + 50);
    if ( (*(_BYTE *)(v3 + 52) & 1) != 0 )
      *v15 |= 1u;
    if ( (*(_BYTE *)(v3 + 52) & 2) != 0 )
      *v15 |= 2u;
    if ( (*(_BYTE *)(v3 + 52) & 4) != 0 )
      *v15 |= 4u;
    if ( (*(_BYTE *)(v3 + 52) & 8) != 0 )
      *v15 |= 8u;
    if ( (_DWORD)v9 )
    {
      v16 = v14 + 40;
      v17 = (unsigned int)v9;
      v18 = v14 + 40;
      v19 = (_QWORD *)(v3 + 76);
      do
      {
        if ( *((_BYTE *)v19 - 8) == 1 )
          *v18 = *v19;
        ++v18;
        v19 += 3;
        --v17;
      }
      while ( v17 );
      v20 = (_QWORD *)(v3 + 76);
      do
      {
        if ( *((_BYTE *)v20 - 8) == 2 )
          *v16 = *v20;
        ++v16;
        v20 += 3;
        --v10;
      }
      while ( v10 );
    }
    v21 = *(unsigned __int16 *)(v3 + 8);
    LOBYTE(v28) = 13;
    LODWORD(Dst[0]) = Dst[0] & 0xFFFFFF00 | 0xD1;
    v27 = v13 >> 2;
    v28 = v28 & 0xFF0000FF | (v21 << 8);
    v22 = sub_1C00AEFFC(a1, v14, 0LL, v13, Dst, v25, 1u, 1, 0, 0LL, &v31);
    v8 = v31;
    v23 = v22;
  }
  else
  {
    v23 = -1073741811;
  }
  v30 = v23;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x464D6152u);
  if ( v23 < 0 )
    goto LABEL_47;
LABEL_48:
  if ( v29 )
    sub_1C0078140(a1, 0);
  sub_1C0077460(a1, v3, v8, v23);
  return (unsigned int)v23;
}
