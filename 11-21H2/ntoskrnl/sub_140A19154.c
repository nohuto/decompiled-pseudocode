/*
 * XREFs of sub_140A19154 @ 0x140A19154
 * Callers:
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140841A58 @ 0x140841A58 (sub_140841A58.c)
 *     sub_140A194A0 @ 0x140A194A0 (sub_140A194A0.c)
 */

__int64 __fastcall sub_140A19154(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // eax
  int v6; // r9d
  int v7; // r10d
  int v8; // r11d
  int v9; // esi
  int v10; // r14d
  int v11; // r15d
  int v12; // ecx
  int v13; // r10d
  int v14; // r11d
  int v15; // esi
  int v16; // r14d
  int v17; // r15d
  _WORD v19[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v20; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v21; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned int v23; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+64h] [rbp-Ch] BYREF
  unsigned __int16 v25; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 v26; // [rsp+C8h] [rbp+58h] BYREF

  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v19[0] = 0;
  v20 = 0;
  v4 = sub_140841A58(a2);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 64) == 6 )
    {
      *(_DWORD *)(a1 + 664) |= 2u;
      *(_DWORD *)(a1 + 696) |= 2u;
      v5 = sub_140A194A0(
             (unsigned int)&v21,
             (unsigned int)&v22,
             (unsigned int)&v23,
             (unsigned int)&v24,
             (__int64)&v25,
             (__int64)&v26,
             (__int64)v19,
             (__int64)&v20,
             a2);
      v6 = *(_DWORD *)(a1 + 600);
      v7 = *(_DWORD *)(a1 + 632);
      v8 = *(_DWORD *)(a1 + 728);
      v9 = *(_DWORD *)(a1 + 56);
      v10 = *(_DWORD *)(a1 + 952);
      v11 = *(_DWORD *)(a1 + 984);
      if ( v5 < 0 )
      {
        v13 = v7 | 2;
        v14 = v8 | 2;
        *(_DWORD *)(a1 + 600) = v6 | 2;
        v15 = v9 | 2;
        v16 = v10 | 2;
        v17 = v11 | 2;
        v12 = 2;
      }
      else
      {
        *(_QWORD *)(a1 + 592) = v21;
        *(_QWORD *)(a1 + 624) = v22;
        v12 = 1;
        *(_QWORD *)(a1 + 720) = v23;
        v13 = v7 | 1;
        *(_QWORD *)(a1 + 48) = v24;
        v14 = v8 | 1;
        v15 = v9 | 1;
        *(_QWORD *)(a1 + 944) = v25;
        v16 = v10 | 1;
        v17 = v11 | 1;
        *(_QWORD *)(a1 + 976) = v26;
        *(_QWORD *)(a1 + 1008) = v19[0];
        *(_QWORD *)(a1 + 1072) = v20;
        *(_DWORD *)(a1 + 576) = 2;
        *(_QWORD *)(a1 + 584) = 4LL;
        *(_DWORD *)(a1 + 600) = v6 | 1;
        *(_DWORD *)(a1 + 608) = 2;
        *(_QWORD *)(a1 + 616) = 4LL;
        *(_DWORD *)(a1 + 704) = 2;
        *(_QWORD *)(a1 + 712) = 4LL;
        *(_DWORD *)(a1 + 32) = 2;
        *(_QWORD *)(a1 + 40) = 4LL;
        *(_DWORD *)(a1 + 928) = 1;
        *(_QWORD *)(a1 + 936) = 2LL;
        *(_DWORD *)(a1 + 960) = 1;
        *(_QWORD *)(a1 + 968) = 2LL;
        *(_DWORD *)(a1 + 992) = 1;
        *(_QWORD *)(a1 + 1000) = 2LL;
        *(_DWORD *)(a1 + 1056) = 1;
        *(_QWORD *)(a1 + 1064) = 2LL;
      }
      *(_DWORD *)(a1 + 1016) |= v12;
      *(_DWORD *)(a1 + 1080) |= v12;
      *(_DWORD *)(a1 + 632) = v13;
      *(_DWORD *)(a1 + 984) = v17;
      *(_DWORD *)(a1 + 952) = v16;
      *(_DWORD *)(a1 + 56) = v15;
      *(_DWORD *)(a1 + 728) = v14;
    }
    else
    {
      *(_DWORD *)(a1 + 600) |= 2u;
      *(_DWORD *)(a1 + 632) |= 2u;
      *(_DWORD *)(a1 + 728) |= 2u;
      *(_DWORD *)(a1 + 56) |= 2u;
      *(_DWORD *)(a1 + 1016) |= 2u;
      *(_DWORD *)(a1 + 952) |= 2u;
      *(_DWORD *)(a1 + 984) |= 2u;
      *(_DWORD *)(a1 + 1080) |= 2u;
    }
    return 0;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"AslpFileGetHeaderAttributesPE");
  }
  return (unsigned int)v4;
}
