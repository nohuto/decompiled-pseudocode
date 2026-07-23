/*
 * XREFs of sub_1403CF218 @ 0x1403CF218
 * Callers:
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

char __fastcall sub_1403CF218(__int64 a1)
{
  char result; // al
  unsigned __int8 v3; // r12
  unsigned __int8 v4; // di
  unsigned __int8 v5; // si
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // cl
  __int64 v8; // rdi
  __int64 v9; // r10
  unsigned int v10; // r9d
  _DWORD *v11; // r11
  __int64 v12; // r8
  bool v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int i; // r14d
  char v17; // r13
  int v18; // ebx
  int v19; // r15d
  __int64 v20; // rcx
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // dl
  __int64 v23; // r8
  unsigned __int8 v24; // cl
  __int64 v25; // r15
  __int64 v26; // r8
  __int64 v27; // rdx
  _BYTE *v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // [rsp+20h] [rbp-28h] BYREF
  int v31; // [rsp+24h] [rbp-24h]
  unsigned __int16 *v32; // [rsp+28h] [rbp-20h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]
  __int16 v34; // [rsp+38h] [rbp-10h]
  int v35; // [rsp+3Ah] [rbp-Eh]
  __int16 v36; // [rsp+3Eh] [rbp-Ah]
  char v38; // [rsp+A0h] [rbp+58h]
  unsigned __int8 v39; // [rsp+A8h] [rbp+60h]

  result = 0;
  v35 = 0;
  v36 = 0;
  v30 = 0;
  if ( byte_140D068E2 )
  {
    if ( byte_140D069E6 )
    {
      v3 = 0;
      v33 = qword_140C0B8E8[0];
      v4 = 0;
      v32 = (unsigned __int16 *)word_140C0B8E0;
      v5 = -1;
      LOBYTE(v31) = 0;
      v34 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v32) )
      {
        v6 = *(_BYTE *)(sub_140348800(v30) + 34125);
        v7 = v6;
        if ( v6 <= v4 )
          v7 = v4;
        v4 = v7;
        if ( v6 >= v5 )
          v6 = v5;
        v5 = v6;
      }
      if ( byte_140D06A48 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
        {
          v17 = 0;
          LOBYTE(v18) = v31;
          v33 = qword_140C0B8E8[0];
          v32 = (unsigned __int16 *)word_140C0B8E0;
          v38 = 1;
          v34 = 0;
          while ( 1 )
          {
            v19 = (unsigned __int8)v18;
            v39 = v3;
            if ( (unsigned int)KeEnumerateNextProcessor(&v30, &v32) )
              break;
            v20 = *(_QWORD *)(sub_140348800(v30) + 34128);
            v3 = *(_BYTE *)(v20 + 4LL * i + 5);
            v18 = *(unsigned __int8 *)(v20 + 4LL * i + 4);
            if ( v3 <= v39 )
              v3 = v39;
            if ( (unsigned __int8)v18 <= (unsigned __int8)v19 )
              v18 = v19;
            v31 = v18;
            if ( *(_BYTE *)(v20 + 4LL * i + 6) && *(_BYTE *)(v20 + 4LL * i + 7) )
              v38 = 0;
            else
              v17 = 1;
          }
          v21 = v3;
          v22 = (v17 != 0) + 1;
          v23 = *(_QWORD *)(a1 + 16);
          if ( v22 < v3 )
            v21 = (v17 != 0) + 1;
          *(_BYTE *)(v23 + 2LL * i + 1) = v22;
          *(_BYTE *)(v23 + 2LL * i) = v21;
          v24 = *(_BYTE *)(v23 + 2LL * i + 1);
          if ( v24 >= (unsigned __int8)v18 )
            v24 = v18;
          *(_BYTE *)(v23 + 2LL * i + 1) = v24;
          v33 = qword_140C0B8E8[0];
          v32 = (unsigned __int16 *)word_140C0B8E0;
          v34 = 0;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v32) )
          {
            v25 = v30;
            v26 = sub_140348800(v30);
            v27 = i + (_DWORD)v25 * *(_DWORD *)(a1 + 4) + 8LL;
            v28 = (_BYTE *)(a1 + 2 * v27 + v27);
            v29 = *(_QWORD *)(v26 + 34128);
            if ( !v38 && (!*(_BYTE *)(v29 + 4LL * i + 6) || !*(_BYTE *)(v29 + 4LL * i + 7)) )
              v28[2] = 1;
            v28[1] = *(_BYTE *)(v29 + 4LL * i + 4);
            *v28 = *(_BYTE *)(v29 + 4LL * i + 5);
            *(_BYTE *)(v25 + *(_QWORD *)(a1 + 8)) = *(_BYTE *)(v26 + 34125) != v5;
          }
        }
      }
      else if ( v4 != v5 )
      {
        v33 = qword_140C0B8E8[0];
        v34 = 0;
        v32 = (unsigned __int16 *)word_140C0B8E0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v32) )
        {
          v8 = v30;
          v9 = sub_140348800(v30);
          v10 = 0;
          *(_BYTE *)(v8 + *(_QWORD *)(a1 + 8)) = *(_BYTE *)(v9 + 34125) != v5;
          v11 = qword_140D06998;
          if ( *((_DWORD *)qword_140D06998 + 1) )
          {
            do
            {
              v12 = v10 + (_DWORD)v8 * *(_DWORD *)(a1 + 4) + 8LL;
              v13 = *(_BYTE *)(v9 + 34125) == v5;
              v14 = a1 + 2 * v12;
              *(_BYTE *)(v12 + v14 + 1) = *(_BYTE *)(v9 + 34125) != v5;
              *(_BYTE *)(v12 + v14) = v13;
              v15 = v10++;
              *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v15) = 257;
            }
            while ( v10 < v11[1] );
          }
        }
      }
      return 1;
    }
    else
    {
      *(_DWORD *)(a1 + 4) = 1;
    }
  }
  return result;
}
