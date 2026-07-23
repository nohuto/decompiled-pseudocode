/*
 * XREFs of sub_14045B3DA @ 0x14045B3DA
 * Callers:
 *     sub_14045AFC6 @ 0x14045AFC6 (sub_14045AFC6.c)
 * Callees:
 *     sub_14023BA88 @ 0x14023BA88 (sub_14023BA88.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14045B3BC @ 0x14045B3BC (sub_14045B3BC.c)
 */

__int64 __fastcall sub_14045B3DA(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int8 *v8; // rdx
  __int64 v9; // rdi
  _BYTE *v10; // rbp
  __int64 v11; // r12
  char v12; // r8
  int v13; // r9d
  unsigned int v14; // r11d
  unsigned int v15; // r10d
  _BYTE *v16; // rbx
  unsigned int v17; // edx
  _BYTE *v18; // r10
  _BYTE v20[64]; // [rsp+20h] [rbp-88h] BYREF

  v5 = *(_QWORD *)(a2 + 34880) & a3;
  if ( ((v5 - 1) & v5) == 0 )
    return a2;
  v8 = *(unsigned __int8 **)(a2 + 34888);
  v9 = v8[657];
  v10 = &v20[v9];
  memmove(&v20[v9], v8 + 528, v8[656]);
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 264LL);
  if ( sub_14023BA88() && (v11 & v5) != 0 && sub_14045B3BC((unsigned __int8)*(_DWORD *)(a1 + 512)) )
  {
    v15 = v9;
    if ( (unsigned int)v9 < v14 )
    {
      v16 = &v20[v9];
      do
      {
        if ( ((1LL << v15) & v11 & v5) != 0 && (*v16 & 0x7F) < v12 )
        {
          v13 = v15;
          v12 = *v16 & 0x7F;
        }
        ++v15;
        ++v16;
      }
      while ( v15 < v14 );
    }
  }
  if ( !a4 )
    goto LABEL_19;
  if ( v13 >= 0 )
    return qword_140D088C0[dword_140D105E0[64 * *(unsigned __int8 *)(a2 + 208) + v13]];
  v17 = v9;
  if ( (unsigned int)v9 < v14 )
  {
    v18 = &v20[v9];
    do
    {
      if ( ((1LL << v17) & a4) != 0 && (*v18 & 0x7F) < v12 )
      {
        v13 = v17;
        v12 = *v18 & 0x7F;
      }
      ++v17;
      ++v18;
    }
    while ( v17 < v14 );
LABEL_19:
    if ( v13 >= 0 )
      return qword_140D088C0[dword_140D105E0[64 * *(unsigned __int8 *)(a2 + 208) + v13]];
    if ( (unsigned int)v9 < v14 )
    {
      do
      {
        if ( ((1LL << v9) & v5) != 0 && (*v10 & 0x7F) < v12 )
        {
          v13 = v9;
          v12 = *v10 & 0x7F;
        }
        LODWORD(v9) = v9 + 1;
        ++v10;
      }
      while ( (unsigned int)v9 < v14 );
      if ( v13 >= 0 )
        return qword_140D088C0[dword_140D105E0[64 * *(unsigned __int8 *)(a2 + 208) + v13]];
    }
  }
  return a2;
}
