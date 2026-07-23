/*
 * XREFs of sub_1403CC390 @ 0x1403CC390
 * Callers:
 *     sub_1403CC230 @ 0x1403CC230 (sub_1403CC230.c)
 * Callees:
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

int *__fastcall sub_1403CC390(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v6; // ebp
  unsigned __int16 v7; // r10
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned int v11; // eax
  int *v12; // r15
  int v13; // edi
  int v14; // ecx
  int v15; // r8d
  int v16; // eax
  int v17; // edx
  unsigned int v18; // eax

  if ( *(_BYTE *)(a1 + 137) )
    v6 = *(_DWORD *)(a1 + 52);
  else
    v6 = *(unsigned __int16 *)(a1 + 52);
  v7 = *(_WORD *)(a1 + 56);
  v8 = *(_DWORD *)(a1 + 120);
  v9 = ((_WORD)v6 + 16 * v7) & 0xFFF;
  v10 = v8 + 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x400) != 0 )
    v11 = v9 / v10 + 1;
  else
    v11 = (v8 - v9 + 4096) / v10;
  if ( *a4 > v11 )
    *a4 = v11;
  v12 = sub_1403A3520(v7, v6);
  v13 = (*a4 - 1) * (*(_DWORD *)(a1 + 120) + 1);
  if ( (*(_DWORD *)(a1 + 16) & 0x400) != 0 )
    v13 = -v13;
  if ( (unsigned int)sub_1403A3520(*(_WORD *)(a1 + 56), (unsigned __int16)v13 + (unsigned __int16)v6) - (_DWORD)v12 == v13 )
  {
    v14 = *a4;
  }
  else
  {
    *a4 = 1;
    v14 = 1;
  }
  v15 = *(_DWORD *)(a1 + 120);
  v16 = v14 * (v15 + 1);
  v17 = *(_DWORD *)(a1 + 16) & 0x400;
  if ( v17 )
    v16 = -v16;
  if ( *(_BYTE *)(a1 + 137) )
    *(_DWORD *)(a1 + 52) += v16;
  else
    *(_WORD *)(a1 + 52) += v16;
  if ( v17 )
    v18 = v15 + v6;
  else
    v18 = v6 + v16 - 1;
  if ( v18 > *(unsigned __int16 *)(a1 + 68) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return v12;
}
