/*
 * XREFs of sub_140A59B28 @ 0x140A59B28
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140829AB0 @ 0x140829AB0 (sub_140829AB0.c)
 */

__int64 __fastcall sub_140A59B28(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // di
  unsigned int v5; // ebp
  void *v6; // rax
  void *v7; // rsi
  int v8; // r10d
  _DWORD *v9; // r8
  int v11; // eax
  unsigned int v12; // eax

  if ( (qword_140D068D8 & 0x800000) != 0 )
  {
    v3 = (unsigned int)(dword_140D050A0 + dword_140D0518C + 893);
    if ( (_BYTE)byte_140E01841 )
      v3 = (unsigned int)(v3 + 32);
    v4 = 1;
    if ( (_DWORD)v3 )
    {
      v5 = v3;
      v6 = (void *)sub_140829AB0(v3, a2);
      v7 = v6;
      if ( !v6 )
        return 3221225626LL;
      memset(v6, 0, v5);
      *(_QWORD *)(a1 + 35280) = ((unsigned __int64)v7 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      goto LABEL_7;
    }
  }
  else
  {
    v4 = 0;
  }
  if ( v4 )
  {
LABEL_7:
    v8 = dword_140D050A0 - 512;
    v9 = (_DWORD *)((*(_QWORD *)(a1 + 35280) + (unsigned int)dword_140D0518C + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v9[310] = -1232;
    v9[311] = 1232;
    v9[313] = v8;
    v9[308] = -1232;
    v9[312] = (((_DWORD)v9 + 1327) & 0xFFFFFFC0) - ((_DWORD)v9 + 1232);
    v9[309] = (((_DWORD)v9 + 1327) & 0xFFFFFFC0) - (_DWORD)v9 + v8;
    if ( (_BYTE)byte_140E01841 )
    {
      v9[315] = 24;
      v12 = (((((_DWORD)v9 + 1327) & 0xFFFFFFC0) + v8 + 7) & 0xFFFFFFF8) - ((_DWORD)v9 + 1232);
      v9[314] = v12;
      v9[309] = v12 + 1256;
    }
    *(_QWORD *)(a1 + 35264) = v9;
  }
  *(_DWORD *)(a1 + 35272) = 1048587;
  if ( v4 && !*(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 35272) = 1048651;
    v11 = *(_DWORD *)(a1 + 35272);
    if ( (_BYTE)byte_140E01841 )
      v11 = 1048779;
    *(_DWORD *)(a1 + 35272) = v11;
  }
  return 0LL;
}
