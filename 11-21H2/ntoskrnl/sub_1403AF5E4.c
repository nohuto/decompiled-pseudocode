/*
 * XREFs of sub_1403AF5E4 @ 0x1403AF5E4
 * Callers:
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 * Callees:
 *     sub_1403AEB58 @ 0x1403AEB58 (sub_1403AEB58.c)
 *     sub_1403AF7F0 @ 0x1403AF7F0 (sub_1403AF7F0.c)
 *     sub_1403AFA58 @ 0x1403AFA58 (sub_1403AFA58.c)
 *     sub_1403AFE68 @ 0x1403AFE68 (sub_1403AFE68.c)
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14056ECDC @ 0x14056ECDC (sub_14056ECDC.c)
 *     sub_14056F494 @ 0x14056F494 (sub_14056F494.c)
 */

__int64 __fastcall sub_1403AF5E4(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // r15
  char v6; // al
  char v7; // r12
  unsigned __int8 v8; // si
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  bool v12; // zf
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int16 v15; // r12
  __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  unsigned int v27; // [rsp+30h] [rbp-30h] BYREF
  __int128 v28; // [rsp+38h] [rbp-28h]
  __int128 v29; // [rsp+48h] [rbp-18h] BYREF
  char v30; // [rsp+A8h] [rbp+48h] BYREF
  char v31; // [rsp+B8h] [rbp+58h]

  v27 = 0;
  v4 = a2;
  v30 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v6 = sub_1403AFE68(a3);
  v7 = 0;
  v31 = v6;
  v8 = 0;
  if ( (_BYTE)v4 )
  {
    do
    {
      *(_DWORD *)(a1[v8] + 104) |= 1u;
      v9 = v6 ? sub_14056ECDC() : sub_1403AF7F0();
      v11 = v9;
      if ( v9 < 0 )
        goto LABEL_39;
      v12 = v9 == 295;
      v6 = v31;
      if ( v12 )
        v7 = 1;
    }
    while ( ++v8 < (unsigned __int8)v4 );
  }
  v11 = sub_1403AFA58((_DWORD)a1, v4, (int)a3 + 8, (unsigned int)&v30, (__int64)&v29);
  if ( (v11 & 0x80000000) != 0 )
    goto LABEL_39;
  v8 = 0;
  if ( (_BYTE)v4 )
  {
    v13 = a1;
    v8 = v4;
    v14 = v4;
    do
    {
      _InterlockedAnd((volatile signed __int32 *)(*v13++ + 104), 0xFFFFFFFE);
      --v14;
    }
    while ( v14 );
  }
  if ( v7 )
  {
    if ( (int)sub_14042A5E0(a3 + 8, &v27) < 0 )
      return 295;
    v26 = v31 ? sub_14056F494(*(unsigned int *)(*a1 + 88), v27, v24, v25) : sub_14042A5E0(v27, 0LL);
    v11 = v26;
    if ( v26 >= 0 )
      return 295;
    goto LABEL_39;
  }
  if ( v30 )
  {
    v15 = *(_WORD *)(a3 + 40);
    v16 = *(_QWORD *)(a3 + 32);
    *(_WORD *)(a3 + 40) = WORD4(v29);
    *(_QWORD *)(a3 + 32) = v29;
    WORD4(v28) = v15;
    *(_QWORD *)&v28 = v16;
  }
  else
  {
    v15 = WORD4(v28);
    v16 = v28;
  }
  v17 = HalEnableInterrupt(a3);
  v11 = v17;
  if ( v30 )
  {
    *(_WORD *)(a3 + 40) = v15;
    *(_QWORD *)(a3 + 32) = v16;
  }
  if ( v17 < 0 )
  {
LABEL_39:
    if ( v8 )
    {
      LOBYTE(v10) = v8;
      sub_1403AEB58(a1, v10, a3);
    }
    return v11;
  }
  v18 = *(_QWORD *)(*a1 + 168);
  if ( v18 && *(_BYTE *)(v18 + 56) )
  {
    v19 = *(_QWORD *)(v18 + 16);
    v20 = *(_DWORD *)(v19 + 128);
    if ( v20 == 2 )
    {
      if ( !(_BYTE)v4 || (v21 = *(_QWORD *)(*a1 + 272)) == 0 )
        __fastfail(5u);
      *(_BYTE *)(v21 + 16) = 1;
    }
    else if ( v20 != 1 )
    {
      return v11;
    }
    *(_BYTE *)(v19 + 132) = 1;
    _InterlockedExchange(&dword_140C2AAF4, 1);
    if ( (_BYTE)v4 )
    {
      v22 = v4;
      do
      {
        _InterlockedOr((volatile signed __int32 *)(*a1++ + 104), 4u);
        --v22;
      }
      while ( v22 );
    }
  }
  return v11;
}
