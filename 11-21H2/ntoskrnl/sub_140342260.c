/*
 * XREFs of sub_140342260 @ 0x140342260
 * Callers:
 *     sub_1403419B0 @ 0x1403419B0 (sub_1403419B0.c)
 * Callees:
 *     sub_14023B2A0 @ 0x14023B2A0 (sub_14023B2A0.c)
 *     sub_140342740 @ 0x140342740 (sub_140342740.c)
 *     sub_140573CBC @ 0x140573CBC (sub_140573CBC.c)
 */

__int64 __fastcall sub_140342260(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, char a5, char a6)
{
  bool v7; // zf
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  char v21; // r14
  int v22; // edx
  int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned __int64 v25[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v7 = (*(_BYTE *)(a1 + 13244) & 1) == 0;
  v25[0] = 0LL;
  if ( v7 || *(_BYTE *)(a3 + 643) != 15 && *(_DWORD *)(a3 + 84) >= (unsigned int)dword_140D06B94 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 192);
  v11 = *(unsigned __int16 *)(v10 + 136);
  if ( (unsigned __int16)v11 >= *a4 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)&a4[4 * v11 + 4];
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v13 & v12;
  v15 = v13 & v12;
  v26 = v13 & v12;
  if ( a6 )
  {
    if ( v14 )
      goto LABEL_9;
    v13 = *(_QWORD *)(v10 + 40) & *(_QWORD *)(v10 + 88);
    v14 = v13 & v12;
    v26 = v13 & v12;
    v15 = v13 & v12;
  }
  if ( !v15 )
    return 0LL;
LABEL_9:
  v16 = v15 & *(_QWORD *)(a1 + 34928);
  if ( v16 )
  {
    v14 = v15 & *(_QWORD *)(a1 + 34928);
    v26 = v14;
    v15 = v16;
  }
  if ( qword_140D053D0 != -1 && *(_QWORD *)(a1 + 13088) && (v15 & *(_QWORD *)(a1 + 200)) != 0 )
  {
    if ( !*(_DWORD *)(a1 + 13144) && (*(_WORD *)(a1 + 13244) & 0xFFDF) == 1 )
    {
      v17 = *(_QWORD *)(a1 + 13096);
      if ( v17 != 1 )
      {
LABEL_19:
        if ( v17 != 2 )
        {
          v19 = __rdtsc();
          v20 = (((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) - *(_QWORD *)(a1 + 13104);
          if ( v17 < v20 || v17 - v20 < qword_140D053D0 )
            return a1;
        }
        goto LABEL_24;
      }
      if ( (unsigned __int8)sub_140342740(a1, *(_QWORD *)(a1 + 13088), v25) )
      {
        v18 = v25[0];
        *(_QWORD *)(a1 + 13096) = v25[0];
        v17 = v18;
        goto LABEL_19;
      }
      *(_QWORD *)(a1 + 13096) = 2LL;
    }
LABEL_24:
    v14 = v26;
  }
  if ( (*(_BYTE *)(v10 + 184) & 1) == 0 )
    goto LABEL_29;
  v21 = a5;
  if ( !a5 || !(unsigned __int8)sub_140573CBC(a1, &v26) )
  {
    v14 = v26 & *(_QWORD *)(v10 + 16);
    if ( v14 )
    {
      if ( !v21
        || (unsigned int)((0x101010101010101LL
                         * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= dword_140D06AC0 )
      {
LABEL_29:
        if ( (v14 & ~*(_QWORD *)(a1 + 34912)) != 0 )
          v14 &= ~*(_QWORD *)(a1 + 34912);
        goto LABEL_31;
      }
      return 0LL;
    }
    if ( v21 )
      return 0LL;
    if ( !sub_14023B2A0(a1, &v26) )
    {
      v14 = v26;
      goto LABEL_29;
    }
  }
  v14 = v26;
LABEL_31:
  v22 = *(unsigned __int8 *)(a1 + 208);
  v23 = *(_DWORD *)(a1 + 34900);
  if ( *(_BYTE *)(a2 + 208) == (_BYTE)v22 && (*(_QWORD *)(a1 + 34920) & *(_QWORD *)(a2 + 200)) != 0LL )
    LOBYTE(v23) = *(_BYTE *)(a2 + 209);
  _BitScanForward64(&v24, __ROR8__(v14, v23));
  return qword_140D088C0[dword_140D105E0[64 * v22 + (((_BYTE)v24 + (_BYTE)v23) & 0x3F)]];
}
