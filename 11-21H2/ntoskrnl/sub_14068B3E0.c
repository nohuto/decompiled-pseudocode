/*
 * XREFs of sub_14068B3E0 @ 0x14068B3E0
 * Callers:
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068B68C @ 0x14068B68C (sub_14068B68C.c)
 *     sub_14068C238 @ 0x14068C238 (sub_14068C238.c)
 *     sub_14068E424 @ 0x14068E424 (sub_14068E424.c)
 *     sub_14068E480 @ 0x14068E480 (sub_14068E480.c)
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 */

__int64 __fastcall sub_14068B3E0(
        ULONG_PTR a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        _OWORD *a10,
        _OWORD *a11,
        _BYTE *a12,
        _DWORD *a13,
        __int64 a14)
{
  unsigned int v15; // ebp
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  char *v21; // rax
  char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ebp
  int v26; // eax

  if ( *(_DWORD *)a1 != -1092567328 || (a3 & 0xFD617CEC) != 0 || a4 > 2 || (unsigned int)(a6 - 1) > 7 )
    __fastfail(5u);
  v15 = a3 & 0xFFFDFFFF;
  if ( !(_BYTE)a2 )
    v15 = a3;
  *(_DWORD *)(a1 + 160) = v15;
  if ( a5 )
  {
    *(_QWORD *)(a1 + 24) = *a5;
    *(_QWORD *)(a1 + 32) = a5[1];
    *(_QWORD *)(a1 + 40) = a5[3];
    *(_QWORD *)(a1 + 48) = a5[4];
  }
  if ( a4 )
  {
    v16 = 4;
    if ( a4 == 1 )
      v16 = 1;
    *(_DWORD *)(a1 + 168) = v16;
  }
  else
  {
    *(_DWORD *)(a1 + 168) = 0;
  }
  *(_DWORD *)(a1 + 132) = 4096;
  *(_QWORD *)(a1 + 8) = sub_1407C9820;
  *(_DWORD *)(a1 + 136) = a6;
  *(_QWORD *)(a1 + 16) = sub_1407C97C0;
  *(_DWORD *)(a1 + 216) = 2;
  v17 = MEMORY[0xFFFFF78000000014];
  if ( (_BYTE)a2 )
  {
    LOBYTE(a2) = 1;
    v21 = (char *)sub_14042A5E0(*(unsigned int *)(a1 + 132), a2);
    v22 = v21;
    if ( !v21 )
    {
      LODWORD(v18) = -1073741670;
      sub_14020A890(a14, 0, 24, 0xC000009A, 0x10u);
      return (unsigned int)v18;
    }
    memset(v21, 0, *(unsigned int *)(a1 + 132));
    *((_DWORD *)v22 + 7) = 0;
    *((_DWORD *)v22 + 9) = -1;
    *((_DWORD *)v22 + 10) = 0;
    *(_DWORD *)v22 = 1718052210;
    *((_DWORD *)v22 + 1) = 1;
    *((_DWORD *)v22 + 2) = 1;
    *((_DWORD *)v22 + 8) = 1;
    *((_DWORD *)v22 + 11) = 1;
    sub_14068B68C(v22, a8);
    *((_DWORD *)v22 + 36) = 0;
    v25 = v15 & 0x80000;
    if ( v25 )
      *((_DWORD *)v22 + 36) = 2;
    *((_DWORD *)v22 + 5) = 1;
    v26 = v25 != 0 ? 6 : 3;
    *((_DWORD *)v22 + 6) = v26;
    *(_DWORD *)(a1 + 220) = v26;
    *((_DWORD *)v22 + 41) = 1836346738;
    *(_QWORD *)(v22 + 12) = v17;
    if ( a10 )
    {
      *((_OWORD *)v22 + 7) = *a10;
      *((_OWORD *)v22 + 8) = *a10;
    }
    if ( a11 )
      *(_OWORD *)(v22 + 148) = *a11;
    *((_DWORD *)v22 + 127) = sub_140AB41B0(v22, v23, v24);
    *(_QWORD *)(a1 + 64) = v22;
    *(_DWORD *)(a1 + 184) = 1;
    *(_DWORD *)(a1 + 172) = 1;
    *(_DWORD *)(a1 + 176) = 1;
    *(_BYTE *)(a1 + 194) = 1;
    if ( a13 )
      *a13 = 825314627;
  }
  else
  {
    sub_14068E480();
    v18 = (unsigned int)sub_14068C238(a1);
    sub_14068E424(v18);
    if ( (int)v18 < 0 )
    {
      sub_14020A890(a14, 0, 24, v18, 0x40u);
      return (unsigned int)v18;
    }
    if ( (_DWORD)v18 == 1073741833 && a12 )
      *a12 = 1;
    if ( a13 )
      *a13 = 825445699;
    v19 = *(_QWORD *)(a1 + 64);
    if ( (*(_DWORD *)(v19 + 144) & 1) != 0 )
    {
      sub_1406CA514(a1);
      if ( a12 )
        *a12 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) &= ~1u;
      v19 = *(_QWORD *)(a1 + 64);
    }
    sub_14068B68C(v19, a8);
  }
  LODWORD(v18) = 0;
  return (unsigned int)v18;
}
