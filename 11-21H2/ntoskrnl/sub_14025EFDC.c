/*
 * XREFs of sub_14025EFDC @ 0x14025EFDC
 * Callers:
 *     sub_14025ED04 @ 0x14025ED04 (sub_14025ED04.c)
 *     sub_14025EDC8 @ 0x14025EDC8 (sub_14025EDC8.c)
 *     sub_14059C440 @ 0x14059C440 (sub_14059C440.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025EFDC(unsigned int *a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned int *v9; // r10
  unsigned __int64 v10; // r15
  unsigned int v11; // r9d
  int v12; // r11d
  unsigned int v13; // r8d
  char v14; // dl
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // r8d
  int v19; // ecx
  char v20; // bp
  unsigned int *v21; // rax
  char v22; // dl
  __int64 v23; // rcx

  v5 = a4;
  if ( a4 < 0x20 )
    return 0LL;
  v6 = *a1;
  if ( *a1 < 0x20 || a2 > v6 - 32 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 1);
  v8 = (unsigned __int64)(v6 - 1) >> 5;
  v9 = (unsigned int *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
  v10 = v7 + 4 * v8 - 4;
  if ( (v6 & 0x1F) == 0 )
    v10 = v7 + 4 * v8;
  v11 = *v9 | *((_DWORD *)qword_140015FA0 + (a2 & 0x1F));
  v12 = 0;
  do
  {
    while ( 1 )
    {
      if ( v11 == -1 )
        goto LABEL_8;
      v12 = 32 * (((__int64)v9 - v7) >> 2);
      if ( !v11 )
        break;
      v14 = -1;
      v15 = !_BitScanReverse64((unsigned __int64 *)&v16, v11);
      if ( !v15 )
        v14 = v16;
      if ( v14 != 31 )
      {
        v12 += v14 + 1;
        break;
      }
LABEL_8:
      v13 = 0;
      if ( (unsigned __int64)v9 >= v10 )
        goto LABEL_31;
      v11 = *++v9;
    }
    v17 = v12 & 0x1F;
    v18 = 0;
    v19 = v11 & ~*((_DWORD *)qword_140015FA0 + v17);
    v11 = v19;
    if ( (unsigned __int64)v9 > v10 )
    {
LABEL_21:
      v20 = 1;
      if ( (v6 & 0x1F) == 0 )
        goto LABEL_29;
      v21 = v9 + 1;
      if ( v18 )
        v11 = *v21;
      else
        v21 = v9;
      v9 = v21;
      v11 |= ~*((_DWORD *)qword_140015FA0 + (v6 & 0x1F));
LABEL_26:
      v22 = -1;
      v15 = !_BitScanForward64((unsigned __int64 *)&v23, v11);
      if ( !v15 )
        v22 = v23;
      v18 += v22;
      goto LABEL_29;
    }
    v20 = 0;
    if ( v19 )
      goto LABEL_26;
    while ( 1 )
    {
      v18 += 32;
      if ( v18 >= v5 && v18 - (unsigned int)v17 >= v5 )
        break;
      if ( v9 == (unsigned int *)v10 )
        goto LABEL_21;
      v11 = *++v9;
      if ( *v9 )
        goto LABEL_26;
    }
LABEL_29:
    v13 = v18 - v17;
    if ( v13 > v5 )
      goto LABEL_34;
    if ( v13 >= 0x20 )
      break;
    v13 = 0;
  }
  while ( !v20 );
LABEL_31:
  if ( v13 > v5 )
    v13 = v5;
  v5 = v13;
LABEL_34:
  *a5 = v12;
  return v5;
}
