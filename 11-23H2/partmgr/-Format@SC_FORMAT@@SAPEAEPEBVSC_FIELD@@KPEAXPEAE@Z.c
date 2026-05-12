/*
 * XREFs of ?Format@SC_FORMAT@@SAPEAEPEBVSC_FIELD@@KPEAXPEAE@Z @ 0x1C00051E8
 * Callers:
 *     ?Format@SC_DRIVE_HEADER@@QEAAXPEAPEAEK@Z @ 0x1C00050EC (-Format@SC_DRIVE_HEADER@@QEAAXPEAPEAEK@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall SC_FORMAT::Format(
        const struct SC_FIELD *a1,
        unsigned int a2,
        char *a3,
        unsigned __int8 *a4)
{
  unsigned __int16 *v5; // rbx
  unsigned __int16 *v6; // r10
  int v7; // ecx
  char *v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  unsigned __int8 *v18; // rdx
  unsigned __int8 v19; // al
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  unsigned __int8 *v23; // r8
  unsigned __int8 *v24; // r11
  int v25; // ecx
  unsigned int v26; // r8d
  int v27; // ecx
  unsigned __int8 *v28; // r8
  __int16 v29; // cx
  unsigned __int8 v30; // al
  unsigned __int8 *v31; // r8
  __int64 v32; // rcx
  __int16 v33; // cx
  unsigned __int8 v34; // al

  v5 = (unsigned __int16 *)((char *)a1 + 12 * a2);
  if ( a1 < (const struct SC_FIELD *)v5 )
  {
    v6 = (unsigned __int16 *)((char *)a1 + 4);
    while ( 1 )
    {
      v7 = *((_DWORD *)v6 - 1);
      v8 = &a3[v6[2]];
      if ( v7 > 7 )
        break;
      if ( v7 == 7 )
      {
        v28 = *(unsigned __int8 **)v8;
        v29 = *(_WORD *)&a3[*v6];
        if ( *(_QWORD *)v8 )
        {
          a4[1] = v29;
          *a4 = HIBYTE(v29);
          for ( a4 += 2; v29; --v29 )
          {
            v30 = *v28++;
            *a4++ = v30;
          }
          goto LABEL_13;
        }
LABEL_45:
        *(_WORD *)a4 = 0;
        goto LABEL_12;
      }
      v9 = v7 - 1;
      if ( !v9 )
        goto LABEL_25;
      v10 = v9 - 1;
      if ( !v10 )
      {
        *a4 = v8[1];
        a4[1] = *v8;
LABEL_12:
        a4 += 2;
        goto LABEL_13;
      }
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 )
        {
          v26 = *(_DWORD *)v8;
          v24 = a4++;
          v27 = 24;
          while ( !(unsigned __int8)(v26 >> v27) )
          {
            v27 -= 8;
            if ( v27 < 0 )
              goto LABEL_38;
          }
          do
          {
            *a4++ = v26 >> v27;
            v27 -= 8;
          }
          while ( v27 >= 0 );
          goto LABEL_38;
        }
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            v23 = *(unsigned __int8 **)v8;
            v24 = a4++;
            v25 = 56;
            while ( !(unsigned __int8)((unsigned __int64)v23 >> v25) )
            {
              v25 -= 8;
              if ( v25 < 0 )
                goto LABEL_38;
            }
            do
            {
              *a4++ = (unsigned __int64)v23 >> v25;
              v25 -= 8;
            }
            while ( v25 >= 0 );
LABEL_38:
            *v24 = (_BYTE)a4 - (_BYTE)v24 - 1;
          }
        }
        else
        {
          *a4 = v8[7];
          a4[1] = v8[6];
          a4[2] = v8[5];
          a4[3] = v8[4];
          a4[4] = v8[3];
          a4[5] = v8[2];
          a4[6] = v8[1];
          a4[7] = *v8;
          a4 += 8;
        }
      }
      else
      {
        *a4 = v8[3];
        a4[1] = v8[2];
        a4[2] = v8[1];
        a4[3] = *v8;
        a4 += 4;
      }
LABEL_13:
      v6 += 6;
      if ( v6 - 2 >= v5 )
        return a4;
    }
    v15 = v7 - 8;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        v17 = 8LL;
        *a4 = v8[3];
        a4[1] = v8[2];
        a4[2] = v8[1];
        a4[3] = *v8;
        a4[4] = v8[5];
        a4[5] = v8[4];
        a4[6] = v8[7];
        a4[7] = v8[6];
        a4 += 8;
        v18 = (unsigned __int8 *)(v8 + 8);
        do
        {
          v19 = *v18++;
          *a4++ = v19;
          --v17;
        }
        while ( v17 );
        goto LABEL_13;
      }
      v20 = v16 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
            a4 += v6[1];
          goto LABEL_13;
        }
LABEL_25:
        LOBYTE(v22) = *v8;
      }
      else if ( *(_DWORD *)v8 )
      {
        _BitScanReverse((unsigned int *)&v22, *(_DWORD *)v8);
      }
      else
      {
        LOBYTE(v22) = -1;
      }
      *a4++ = v22;
      goto LABEL_13;
    }
    v31 = *(unsigned __int8 **)v8;
    if ( *(_QWORD *)v8 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( *(_WORD *)&v31[2 * v32] );
      v33 = v32 + 1;
      a4[1] = v33;
      *a4 = HIBYTE(v33);
      for ( a4 += 2; v33; --v33 )
      {
        *a4 = v31[1];
        v34 = *v31;
        v31 += 2;
        a4[1] = v34;
        a4 += 2;
      }
      goto LABEL_13;
    }
    goto LABEL_45;
  }
  return a4;
}
