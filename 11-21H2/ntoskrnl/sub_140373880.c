/*
 * XREFs of sub_140373880 @ 0x140373880
 * Callers:
 *     sub_1403731C0 @ 0x1403731C0 (sub_1403731C0.c)
 *     sub_1403737D0 @ 0x1403737D0 (sub_1403737D0.c)
 *     sub_1405972B4 @ 0x1405972B4 (sub_1405972B4.c)
 * Callees:
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 */

void __fastcall sub_140373880(__int64 a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // r14
  ULONG v6; // r8d
  unsigned __int64 v7; // r12
  __int64 v8; // r12
  int v9; // r13d
  char *v10; // rsi
  ULONG v11; // r9d
  ULONG v12; // eax
  ULONG v13; // r11d
  ULONG v14; // ecx
  char *v15; // rbx
  __int64 i; // rdx
  unsigned __int64 v17; // rax
  ULONG v18; // ebx
  _DWORD *v19; // r8
  unsigned int v20; // edi
  _DWORD *v21; // rdx
  __int64 v22; // r9
  int v23; // esi
  __int64 v24; // r9
  unsigned int j; // eax
  unsigned int v26; // edi
  _DWORD *v27; // rdx
  ULONG SizeOfBitMap; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+90h] [rbp+18h]

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  v3 = 0;
  LODWORD(BitMapHeader.Buffer) = 0;
  v30 = *(_QWORD *)(a1 + 24);
  while ( v3 != 2 )
  {
    v4 = 80LL * v3;
    v5 = v4 + a2 + 256;
    if ( !*(_BYTE *)(v5 + 72) )
      goto LABEL_4;
    v6 = 0;
    v7 = (*(_QWORD *)(v5 + 64) & 0xFFFFFFFFFFFFF000uLL) << 16;
    BitMapHeader.SizeOfBitMap = 512;
    BitMapHeader.Buffer = (PULONG)(v4 + a2 + 256);
    v8 = (__int64)(v7 & 0xFFFFFFE000000000uLL) >> 16;
    v9 = (((_BYTE)v4 + (_BYTE)a2) & 4) != 0LL ? 0x20 : 0;
    v10 = (char *)BitMapHeader.Buffer - ((((_BYTE)v4 + (_BYTE)a2) & 4) != 0LL ? 4 : 0);
    while ( 2 )
    {
      v11 = v6 < BitMapHeader.SizeOfBitMap ? v6 : 0;
      v12 = BitMapHeader.SizeOfBitMap - 1;
      while ( 1 )
      {
        v13 = v12 + v9;
        v14 = v11 + v9;
        if ( v12 - v11 != -1 )
        {
          v15 = &v10[8 * ((unsigned __int64)v14 >> 6)];
          for ( i = ~*(_QWORD *)v15 | ((1LL << (v14 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v15 )
          {
            v15 += 8;
            if ( v15 > &v10[8 * ((unsigned __int64)v13 >> 6)] )
              goto LABEL_46;
          }
          _BitScanForward64(&v17, ~i);
          v18 = v17 + ((unsigned int)((v15 - v10) >> 3) << 6);
          if ( v18 <= v13 )
            break;
        }
LABEL_46:
        v18 = -1;
LABEL_49:
        if ( !v11 )
          goto LABEL_17;
        SizeOfBitMap = v6 + 1;
        if ( v6 + 1 > BitMapHeader.SizeOfBitMap )
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v12 = SizeOfBitMap - 1;
        v11 = 0;
      }
      if ( v18 == -1 )
        goto LABEL_49;
      v18 -= v9;
LABEL_17:
      if ( v18 >= v6 && v18 != -1 )
      {
        if ( v18 >= 0x200 )
        {
          v23 = 0;
        }
        else
        {
          v19 = (_DWORD *)(v5 + 60);
          v20 = v18;
          v21 = (_DWORD *)(v5 + 4 * ((unsigned __int64)v18 >> 5));
          if ( v21 != (_DWORD *)(v5 + 60) )
          {
            v22 = v18 & 0x1F;
            if ( (*v21 | *((_DWORD *)qword_140015FA0 + v22)) == -1 )
            {
              v20 = v18 - v22 + 32;
              for ( ++v21; v21 < v19 && *v21 == -1; ++v21 )
                v20 += 32;
              goto LABEL_26;
            }
          }
          do
          {
            if ( !_bittest((const signed __int32 *)v5, v20) )
              break;
            ++v20;
LABEL_26:
            ;
          }
          while ( v20 < 0x200 );
          v23 = 0;
          if ( v21 == v19 || (v24 = v20 & 0x1F, (*v21 & ~*((_DWORD *)qword_140015FA0 + v24)) != 0) )
          {
LABEL_31:
            for ( j = v23 + v20; j < 0x200 && !_bittest((const signed __int32 *)v5, j) && v23 != -1; ++j )
              ++v23;
          }
          else
          {
            v23 = 32 - v24;
            if ( (_DWORD)v24 != 33 )
            {
              v27 = v21 + 1;
              while ( v27 < v19 && !*v27 )
              {
                ++v27;
                v23 += 32;
                if ( v23 == -1 )
                  goto LABEL_36;
              }
              goto LABEL_31;
            }
          }
LABEL_36:
          if ( v23 )
          {
LABEL_37:
            v26 = v20 - v18;
            sub_1403171A0(v30, v8 + (v18 << 12), v26, v3 != 0 ? 6 : 0);
            RtlClearBits(&BitMapHeader, v18, v26);
            v6 = v26 + v23 + v18;
            if ( !v23 )
              break;
            v10 = (char *)(v5 - ((v5 & 4) != 0 ? 4 : 0));
            if ( v6 == 512 )
              break;
            continue;
          }
        }
        v20 = 512;
        goto LABEL_37;
      }
      break;
    }
    *(_BYTE *)(v5 + 72) = 0;
LABEL_4:
    ++v3;
  }
  if ( *(_DWORD *)(a2 + 76) )
    *(_QWORD *)(a2 + 16) -= sub_1402C1D70(v30, a2 + 64, (*(_DWORD *)a2 >> 12) & 1);
}
