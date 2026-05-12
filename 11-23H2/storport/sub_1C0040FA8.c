/*
 * XREFs of sub_1C0040FA8 @ 0x1C0040FA8
 * Callers:
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 * Callees:
 *     sub_1C0010160 @ 0x1C0010160 (sub_1C0010160.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C0023A9C @ 0x1C0023A9C (sub_1C0023A9C.c)
 *     sub_1C00407E4 @ 0x1C00407E4 (sub_1C00407E4.c)
 *     sub_1C007896C @ 0x1C007896C (sub_1C007896C.c)
 */

bool __fastcall sub_1C0040FA8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  char *v7; // r14
  char v8; // si
  unsigned int v9; // r11d
  unsigned int i; // r9d
  char *v11; // r10
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  char v17; // r11
  unsigned __int8 v18; // bp
  unsigned int v19; // r10d
  unsigned int j; // r9d
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rsi
  ULONG_PTR v27; // rax
  __int64 v28; // r11
  signed __int8 v29; // al
  char v30; // tt
  __int64 v31; // rdx
  signed __int8 v32; // al
  bool v33; // bp
  __int64 v34; // r11
  __int64 v36; // [rsp+90h] [rbp+18h] BYREF
  __int64 v37; // [rsp+98h] [rbp+20h] BYREF

  v36 = a3;
  if ( !a2 )
    return 0;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v7 = 0LL;
    v8 = 0;
    if ( !*(_DWORD *)(v6 + 20) )
    {
      v9 = *(_DWORD *)(v6 + 56);
      for ( i = 0; i < v9; ++i )
      {
        v11 = v7;
        v12 = *(unsigned int *)(v6 + 4LL * i + 120);
        if ( (unsigned int)v12 >= 0x80 )
        {
          v13 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v12 < (unsigned int)v13 )
          {
            v14 = (unsigned int)v12;
            v15 = *(_DWORD *)(v12 + v6) - 64;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 == 1 && v14 + 40 <= v13 )
                {
                  v7 = (char *)(v14 + v6 + 32);
                  if ( !*(_DWORD *)(v14 + v6 + 12) )
                    v7 = v11;
                  break;
                }
              }
              else if ( v14 + 56 <= v13 )
              {
                v8 = 1;
                if ( !*(_BYTE *)(v14 + v6 + 10) )
                  break;
                v7 = (char *)(v14 + v6 + 24);
              }
            }
            else if ( v14 + 40 <= v13 )
            {
              if ( *(_BYTE *)(v14 + v6 + 10) )
                v7 = (char *)(v14 + v6 + 24);
              break;
            }
            if ( v8 )
              break;
          }
        }
      }
    }
    v17 = 0;
    v18 = 0;
    if ( !*(_DWORD *)(v6 + 20) )
    {
      v19 = *(_DWORD *)(v6 + 56);
      for ( j = 0; j < v19; ++j )
      {
        v21 = *(unsigned int *)(v6 + 4LL * j + 120);
        if ( (unsigned int)v21 >= 0x80 )
        {
          v22 = *(unsigned int *)(v6 + 16);
          if ( (unsigned int)v21 < (unsigned int)v22 )
          {
            v23 = (unsigned int)v21;
            v24 = *(_DWORD *)(v21 + v6) - 64;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                if ( v25 == 1 && v23 + 40 <= v22 )
                  break;
              }
              else if ( v23 + 56 <= v22 )
              {
                v18 = *(_BYTE *)(v23 + v6 + 10);
                v17 = 1;
              }
            }
            else if ( v23 + 40 <= v22 )
            {
              v18 = *(_BYTE *)(v23 + v6 + 10);
              break;
            }
            if ( v17 )
              break;
          }
        }
      }
    }
  }
  else
  {
    v18 = *(_BYTE *)(v6 + 10);
    v7 = (char *)(v6 + 72);
  }
  v26 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( !sub_1C0010160(v26, a2, 0LL, 0LL) )
    return 0;
  v27 = sub_1C007896C(v7, v18);
  v28 = (unsigned int)sub_1C0023A9C(v26, v27);
  do
  {
    v31 = *(_QWORD *)(v26 + 3352);
    v32 = *(_BYTE *)(v31 + v28);
    if ( v32 == -1 )
    {
      *(_DWORD *)(v6 + 12) |= 0x1000000u;
      _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
      v33 = 1;
      ++*(_DWORD *)(*(_QWORD *)(v26 + 24) + 5584LL);
      ++*(_DWORD *)(v26 + 2208);
      goto LABEL_45;
    }
    v30 = *(_BYTE *)(v31 + v28);
    v29 = _InterlockedCompareExchange8((volatile signed __int8 *)(v28 + v31), v32 + 1, v32);
  }
  while ( v30 != v29 );
  v33 = v29 != 0;
LABEL_45:
  if ( (qword_1C0093468 & 0x1000) != 0 )
  {
    v37 = 0LL;
    LODWORD(v36) = 0;
    sub_1C00407E4(v7, (__int64)&v37, (__int64)&v36);
    sub_1C0019E4C(
      *(_QWORD *)(v26 + 24),
      45,
      v37,
      (unsigned int)v36,
      *(unsigned __int8 *)(v34 + *(_QWORD *)(v26 + 3352)),
      v6,
      0LL);
  }
  return v33;
}
