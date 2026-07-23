/*
 * XREFs of sub_1403B1624 @ 0x1403B1624
 * Callers:
 *     sub_1403A4CC0 @ 0x1403A4CC0 (sub_1403A4CC0.c)
 *     sub_1403B1020 @ 0x1403B1020 (sub_1403B1020.c)
 *     sub_1403B1270 @ 0x1403B1270 (sub_1403B1270.c)
 * Callees:
 *     sub_1403B171C @ 0x1403B171C (sub_1403B171C.c)
 *     sub_1403B17EC @ 0x1403B17EC (sub_1403B17EC.c)
 *     sub_1403B92D0 @ 0x1403B92D0 (sub_1403B92D0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045DDF6 @ 0x14045DDF6 (sub_14045DDF6.c)
 *     sub_1405CE3A0 @ 0x1405CE3A0 (sub_1405CE3A0.c)
 *     sub_1405CE488 @ 0x1405CE488 (sub_1405CE488.c)
 */

void __fastcall sub_1403B1624(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebp
  int v6; // ebx
  char v7; // r12
  __int64 v9; // rdx
  char v10; // cl
  __int64 v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // rdx
  unsigned int v14; // edi
  unsigned int v15; // r13d
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+28h] [rbp-40h]
  char v25; // [rsp+2Ch] [rbp-3Ch]
  __int16 v26; // [rsp+2Dh] [rbp-3Bh]
  char v27; // [rsp+2Fh] [rbp-39h]
  unsigned int v28; // [rsp+70h] [rbp+8h]
  unsigned int v29; // [rsp+80h] [rbp+18h]
  int v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v4 = a2;
  v5 = 0;
  v6 = a4;
  v7 = a3;
  if ( (_BYTE)a3 )
  {
    if ( a2 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 132), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a3) = 1;
      sub_1403B17EC(a1, 4LL, a3);
    }
  }
  else
  {
    if ( a2 > 1 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 132), 2);
      sub_1403B17EC(a1, 4LL, 0LL);
      if ( (unsigned int)(v6 - 1) <= 1 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
    }
    v9 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v9 != (_DWORD)v4 )
      sub_1403B171C(*(_QWORD *)(a1 + 32), v9, (unsigned int)v4, 0LL);
  }
  v10 = *(_BYTE *)(a1 + 124);
  if ( !v10 && !*(_BYTE *)(a1 + 188) )
  {
    if ( !v7 )
      return;
    goto LABEL_10;
  }
  v12 = 0;
  if ( (_DWORD)v4 != 4 )
    v12 = *(_DWORD *)(a1 + 4 * v4 + 140);
  v13 = *(int *)(a1 + 168);
  v29 = v12;
  v14 = 0;
  if ( (_DWORD)v13 != 4 )
    v14 = *(_DWORD *)(a1 + 4 * v13 + 140);
  v28 = v14;
  if ( !v7 && (_DWORD)v13 != (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v15 = 0;
      if ( *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v16 = 208LL * v15;
          v17 = *(unsigned int *)(v16 + a1 + 368);
          sub_1403B92D0(0LL, *(unsigned int *)(*(_QWORD *)(v16 + a1 + 392) + 24 * v17 + 16), 1LL, v16 + a1 + 384);
          sub_14045DDF6(*(_QWORD *)(a1 + 32), *(unsigned int *)(v16 + a1 + 200), (unsigned int)v17, 0LL);
          ++v15;
        }
        while ( v15 < *(_DWORD *)(a1 + 180) );
        v14 = v28;
        v6 = v30;
      }
      v12 = v29;
    }
    sub_1403B92D0(v14, v12, 1LL, a1 + 184);
    sub_1405CE488(*(_QWORD *)(a1 + 32), (unsigned int)v4, 0LL);
    v10 = *(_BYTE *)(a1 + 124);
  }
  if ( v10 )
  {
    v18 = *(_QWORD *)(a1 + 32);
    v27 = 0;
    v24 = v4;
    v25 = v7;
    v26 = v6 == 1;
    v23 = *(_QWORD *)(v18 + 72);
    sub_14042A5E0(5LL, &v23);
  }
  if ( v7 )
  {
    if ( *(_DWORD *)(a1 + 168) != (_DWORD)v4 )
    {
      if ( dword_140D01524 )
      {
        if ( *(_BYTE *)(a1 + 177) || (v19 = *(_DWORD *)(a1 + 168), *(_BYTE *)(a1 + 176)) && (_DWORD)v4 == 1 )
        {
          v20 = 0;
          v19 = *(_DWORD *)(a1 + 168);
          if ( *(_DWORD *)(a1 + 180) )
          {
            do
            {
              v21 = 208LL * v20;
              if ( *(_BYTE *)(v21 + a1 + 376) )
              {
                LOBYTE(a3) = 1;
                sub_1405CE3A0(*(_QWORD *)(a1 + 32), *(unsigned int *)(v21 + a1 + 200), a3, (unsigned int)v4);
              }
              ++v20;
            }
            while ( v20 < *(_DWORD *)(a1 + 180) );
            v19 = *(_DWORD *)(a1 + 168);
          }
        }
      }
      else
      {
        v19 = *(_DWORD *)(a1 + 168);
      }
      if ( v19 == 1 && *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v22 = 208LL * v5;
          sub_1403B92D0(
            *(unsigned int *)(*(_QWORD *)(v22 + a1 + 392) + 24LL * *(unsigned int *)(v22 + a1 + 368) + 16),
            0LL,
            0LL,
            v22 + a1 + 384);
          sub_14045DDF6(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(v22 + a1 + 200),
            (unsigned int)(*(_DWORD *)(v22 + a1 + 380) - 1),
            1LL);
          ++v5;
        }
        while ( v5 < *(_DWORD *)(a1 + 180) );
      }
      sub_1403B92D0(v14, v12, 0LL, a1 + 184);
      sub_1405CE488(*(_QWORD *)(a1 + 32), (unsigned int)v4, 1LL);
    }
LABEL_10:
    v11 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v11 != (_DWORD)v4 )
    {
      LOBYTE(a4) = v7;
      sub_1403B171C(*(_QWORD *)(a1 + 32), v11, (unsigned int)v4, a4);
      *(_DWORD *)(a1 + 168) = v4;
    }
  }
}
