/*
 * XREFs of sub_14030A3C0 @ 0x14030A3C0
 * Callers:
 *     sub_1403086B0 @ 0x1403086B0 (sub_1403086B0.c)
 *     sub_140353FB0 @ 0x140353FB0 (sub_140353FB0.c)
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 *     sub_14056C810 @ 0x14056C810 (sub_14056C810.c)
 * Callees:
 *     sub_14030A6F0 @ 0x14030A6F0 (sub_14030A6F0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14063DA44 @ 0x14063DA44 (sub_14063DA44.c)
 */

int *__fastcall sub_14030A3C0(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int64 *a6,
        int *a7)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v12; // rsi
  __int64 v13; // r14
  int v14; // r12d
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int *result; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // r8
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  char v24; // al
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // [rsp+20h] [rbp-48h] BYREF

  v7 = 0LL;
  v8 = -1LL;
  v27 = -1LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v14 = 1;
    goto LABEL_12;
  }
  if ( dword_140D050B4 == 2 && !dword_140D05038 && !*(_BYTE *)(a1 + 33) )
  {
    v14 = 2;
    goto LABEL_12;
  }
  v12 = -1LL;
  v13 = 4LL;
  v14 = 4;
  if ( a4 )
  {
    v16 = sub_14063DA44();
    v27 = v16;
  }
  else
  {
    v15 = sub_14030A6F0(a1, a3, a2, &v27);
    v16 = v27;
    v12 = v15;
  }
  if ( !byte_140D068BE )
    goto LABEL_6;
  if ( a2 )
  {
    if ( asc_140C0B690[0] )
    {
      while ( !qword_140C0B698[(unsigned __int16)v7] )
      {
        LOWORD(v7) = v7 + 1;
        if ( (unsigned __int16)v7 >= asc_140C0B690[0] )
          goto LABEL_6;
      }
      goto LABEL_60;
    }
  }
  else
  {
    v20 = dword_140D0E5E0[*(unsigned int *)(a1 + 36)];
    v21 = v20 >> 6;
    if ( (unsigned int)v21 < asc_140C0B690[0] && (((unsigned __int64)qword_140C0B698[v21] >> (v20 & 0x3F)) & 1) != 0 )
    {
LABEL_60:
      if ( qword_140C2BD08 * (unsigned __int64)DesiredTime < v16 )
      {
        v16 = qword_140C2BD08 * DesiredTime;
        v27 = v16;
        v14 = 5;
      }
    }
  }
LABEL_6:
  if ( !*(_BYTE *)(a1 + 33) )
    goto LABEL_7;
  v22 = -1LL;
  if ( !a4 )
    v13 = 2LL;
  while ( 1 )
  {
    v23 = qword_140C2B8D0[3 * v13];
    if ( v13 == 2 )
    {
      if ( v23 < v8 )
        v8 = qword_140C2B8D0[6];
      goto LABEL_35;
    }
    if ( v23 < v22 )
    {
      v22 = qword_140C2B8D0[3 * v13];
      if ( v13 == 4 )
        break;
    }
LABEL_35:
    ++v13;
    v24 = 0;
    if ( v13 > 4 )
      goto LABEL_36;
  }
  v24 = 1;
LABEL_36:
  if ( v8 < v12 )
  {
    v12 = v8;
    v14 = 6;
  }
  v16 = v27;
  if ( v22 < v27 )
  {
    v16 = v22;
    v27 = v22;
    if ( v22 < v12 )
    {
      v14 = 6;
      if ( v24 )
        v14 = 7;
    }
  }
LABEL_7:
  if ( !dword_140D06A20 )
  {
    v16 = v27;
    v18 = (unsigned int)dword_140D069B8 - (unsigned __int64)(unsigned int)(dword_140D06960 - 1) + qword_140C4E940;
    if ( dword_140D06984 < (unsigned int)dword_140D069B8 && v27 < v18 )
    {
      v16 = (unsigned int)dword_140D06984 + a3;
      if ( v16 < v18 )
      {
        v19 = (unsigned int)dword_140D06984 + a3;
        do
        {
          v19 += (unsigned int)dword_140D06984;
          if ( v19 > v27 + (unsigned int)dword_140D069B8 )
            break;
          v16 = v19;
        }
        while ( v19 < v18 );
      }
    }
  }
  v7 = v12;
  if ( v12 >= v16 )
    v7 = v16;
  if ( a2 )
  {
    if ( qword_140C2B7F8 && qword_140C2B7F8 < v7 )
    {
      v7 = qword_140C2B7F8;
      v14 = 6;
    }
    if ( !(_BYTE)KdDebuggerNotPresent && a3 < v7 )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        v25 = (unsigned int)(10000 * dword_140D052F8);
        if ( v7 - a3 > v25 )
        {
          v7 = v25 + a3;
          v14 = 8;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v26 = sub_14042A5E0(a5, v16);
    if ( v26 )
    {
      if ( v7 > v26 )
      {
        v7 = v26;
        v14 = 9;
        if ( a3 > v26 )
          v7 = a3;
      }
    }
  }
LABEL_12:
  *a6 = v7;
  result = a7;
  *a7 = v14;
  return result;
}
