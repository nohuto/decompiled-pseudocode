/*
 * XREFs of sub_140796C40 @ 0x140796C40
 * Callers:
 *     sub_1406D2394 @ 0x1406D2394 (sub_1406D2394.c)
 *     sub_140796040 @ 0x140796040 (sub_140796040.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     sub_140758DB8 @ 0x140758DB8 (sub_140758DB8.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

void __fastcall sub_140796C40(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // r13
  char v4; // r15
  __int64 v5; // r12
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14

  v1 = *(_WORD *)(a1 + 98);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = (v1 & 1) == 0;
  v5 = *(_QWORD *)(v3 + 392);
  if ( (v1 & 8) != 0 )
  {
    if ( (*(_BYTE *)(v3 + 91) & 1) != 0 )
    {
      v11 = sub_140797594(*(_QWORD *)(v3 + 392), *(unsigned __int16 *)(v3 + 88), 0LL);
      v12 = v11;
      if ( v11 )
      {
        sub_140758DB8(v11, v4, a1);
        sub_1407981E8(v12, 0LL);
      }
    }
  }
  else
  {
    v6 = 1;
    v7 = 0LL;
    v8 = 8LL;
    do
    {
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a1 + 100)) != 0 )
      {
        v9 = sub_140797594(v5, *(unsigned __int16 *)(v7 + v3 + 134), 0LL);
        v10 = (unsigned int *)v9;
        if ( v9 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(v9 + 816) & 0x2000000) != 0 )
            sub_140758DB8(v9, v4, a1);
          ExReleaseRundownProtectionCacheAwareEx(
            *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v10 + 137) + 448LL) + 8LL * *v10),
            1u);
        }
      }
      if ( ((unsigned __int8)v6 & *(_BYTE *)(a1 + 102)) != 0 )
      {
        v13 = sub_140797594(qword_140D05008, *(unsigned __int16 *)(*(_QWORD *)(v3 + 400) + v7 + 134), 0LL);
        v14 = v13;
        if ( v13 )
        {
          if ( (*(_BYTE *)(a1 + 98) & 0x20) != 0 || (*(_DWORD *)(v13 + 816) & 0x2000000) != 0 )
            sub_140758DB8(v13, v4, a1);
          sub_1407981E8(v14, 0LL);
        }
      }
      v6 = __ROL4__(v6, 1);
      v7 += 32LL;
      --v8;
    }
    while ( v8 );
  }
}
