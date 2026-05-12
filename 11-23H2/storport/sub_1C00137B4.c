/*
 * XREFs of sub_1C00137B4 @ 0x1C00137B4
 * Callers:
 *     sub_1C00A21E0 @ 0x1C00A21E0 (sub_1C00A21E0.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memmove @ 0x1C0024A40 (memmove.c)
 */

__int64 __fastcall sub_1C00137B4(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int *v4; // rbp
  unsigned int v5; // ebx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r15d
  __int64 v13; // rax
  __int64 v15; // rax

  v4 = *(unsigned int **)(a2 + 24);
  v5 = 0;
  v7 = 0LL;
  LODWORD(v8) = 0;
  v9 = (char *)v4 + v4[3];
  if ( *(_BYTE *)(a2 + 64) || *(_DWORD *)v9 < 0x1Cu || *(_DWORD *)v9 > v4[4] || *((_DWORD *)v9 + 2) != 1 )
    goto LABEL_23;
  v10 = *(_QWORD *)(v9 + 12) - 0x4DB838FC0D0A64A1LL;
  if ( *(_QWORD *)(v9 + 12) == 0x4DB838FC0D0A64A1LL )
    v10 = *(_QWORD *)(v9 + 20) - 0x5C7CCD52433FE79FLL;
  if ( !v10 )
  {
    v12 = 1;
    goto LABEL_12;
  }
  v11 = *(_QWORD *)(v9 + 12) - 0x4CF8B9A3B7624D64LL;
  if ( *(_QWORD *)(v9 + 12) == 0x4CF8B9A3B7624D64LL )
    v11 = *(_QWORD *)(v9 + 20) + 0x4818BF3679A4EE80LL;
  if ( !v11 )
  {
    v12 = 2;
    goto LABEL_12;
  }
  v15 = *(_QWORD *)(v9 + 12) - 0x4DBDD2A69D453EB7LL;
  if ( *(_QWORD *)(v9 + 12) == 0x4DBDD2A69D453EB7LL )
    v15 = *(_QWORD *)(v9 + 20) + 0x56F66E122F041C5ELL;
  if ( v15 )
  {
LABEL_23:
    v5 = -1073741637;
    goto LABEL_15;
  }
  v12 = 3;
LABEL_12:
  v8 = ((v4[6] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 76;
  if ( v8 > 0xFFFFFFFF )
  {
    v5 = -1073741811;
  }
  else
  {
    v13 = sub_1C0007CF4(64LL, (unsigned int)v8, 1918067026LL, *(_QWORD *)(a1 + 8));
    v7 = v13;
    if ( v13 )
    {
      *(_DWORD *)(v13 + 16) = 1771296;
      *(_DWORD *)v13 = 28;
      *(_DWORD *)(v13 + 24) = v8 - 28;
      *(_DWORD *)(v13 + 20) = 0;
      *(_QWORD *)(v13 + 4) = 0x2020204D5344504DLL;
      *(_DWORD *)(v13 + 28) = 48;
      *(_DWORD *)(v13 + 32) = 1;
      *(_DWORD *)(v13 + 36) = *((_DWORD *)v9 + 1);
      *(_DWORD *)(v13 + 40) = v12;
      *(_QWORD *)(v13 + 44) = 0LL;
      *(_DWORD *)(v13 + 52) = 0;
      *(_DWORD *)(v13 + 56) = v4[6] >> 4;
      memmove((void *)(v13 + 60), (char *)v4 + v4[5], v4[6]);
    }
    else
    {
      v5 = -1073741670;
    }
  }
LABEL_15:
  *a4 = v8;
  *a3 = v7;
  return v5;
}
