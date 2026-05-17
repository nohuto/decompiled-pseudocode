/*
 * XREFs of RtlpHpSegPageRangeHandleCommit @ 0x18004771C
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x180046E10 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeHandleCommit(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  char v6; // cl
  unsigned int v8; // esi
  int v9; // ebx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r9
  unsigned int v12; // r14d
  int v13; // edx
  unsigned __int64 v14; // rbp
  unsigned int v15; // ecx
  unsigned __int64 v16; // rbp
  unsigned int v17; // r15d
  bool v18; // zf
  unsigned int v19; // eax
  int v20; // r8d
  unsigned int v22; // r8d
  int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  int v27; // eax

  v6 = *(_BYTE *)(a1 + 9);
  v8 = 1 << v6;
  v9 = -1;
  v10 = a2 + 32 * ((unsigned __int64)(unsigned int)*a3 >> v6);
  v11 = (unsigned __int64)(unsigned int)*a3 >> v6 << v6;
  v12 = *a3 & ((1 << v6) - 1);
  v13 = -1;
  v14 = 32 * ((unsigned __int64)(v12 + *a4 - 1) >> v6);
  v15 = 0;
  v16 = v10 + v14;
  v17 = ((v12 + *a4 - 1) & (v8 - 1)) + 1;
  if ( v12 )
  {
    v24 = *(unsigned __int8 *)(v10 + 25);
    v25 = v8;
    if ( v10 == v16 )
      v25 = ((v12 + *a4 - 1) & (v8 - 1)) + 1;
    if ( a5 > 1 )
    {
      if ( a5 == 2 && v24 > v12 )
      {
        v13 = v11 + v12;
        v26 = v12;
        v9 = v24 + v11;
        goto LABEL_31;
      }
    }
    else if ( v24 < v25 )
    {
      v13 = v24 + v11;
      v26 = v25;
      v9 = v11 + v25;
LABEL_31:
      v15 = v26 - v24;
      if ( v15 && a5 >= 1 )
        *(_BYTE *)(v10 + 25) = v15 + v24;
    }
    v10 += 32LL;
    LODWORD(v11) = v8 + v11;
  }
  v18 = v10 == v16;
  if ( v10 >= v16 )
    goto LABEL_3;
  do
  {
    v22 = *(unsigned __int8 *)(v10 + 25);
    v23 = 0;
    if ( a5 > 1 )
    {
      if ( a5 != 2 || !*(_BYTE *)(v10 + 25) )
        goto LABEL_24;
      v9 = v22 + v11;
      v23 = -v22;
      v27 = v11;
      if ( v13 != -1 )
        v27 = v13;
      v13 = v27;
    }
    else
    {
      if ( v22 >= v8 )
        goto LABEL_24;
      if ( v13 == -1 )
        v13 = v22 + v11;
      v9 = v11 + v8;
      v23 = v8 - v22;
    }
    if ( v23 && a5 >= 1 )
      *(_BYTE *)(v10 + 25) = v23 + v22;
LABEL_24:
    v15 += v23;
    v10 += 32LL;
    LODWORD(v11) = v8 + v11;
  }
  while ( v10 < v16 );
  v18 = v10 == v16;
LABEL_3:
  if ( v18 )
  {
    v19 = *(unsigned __int8 *)(v10 + 25);
    v20 = 0;
    if ( a5 > 1 )
    {
      if ( a5 == 2 && *(_BYTE *)(v10 + 25) )
      {
        v9 = v19 + v11;
        v20 = -v19;
        if ( v13 != -1 )
          LODWORD(v11) = v13;
        v13 = v11;
LABEL_9:
        if ( v20 && a5 >= 1 )
          *(_BYTE *)(v10 + 25) = v20 + v19;
      }
    }
    else if ( v19 < v17 )
    {
      if ( v13 == -1 )
        v13 = v19 + v11;
      v9 = v17 + v11;
      v20 = v17 - v19;
      goto LABEL_9;
    }
    v15 += v20;
  }
  if ( v15 )
  {
    *a3 = v13;
    *a4 = v9 - v13;
  }
  return v15;
}
