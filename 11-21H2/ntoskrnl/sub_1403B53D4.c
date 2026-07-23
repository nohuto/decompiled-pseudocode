/*
 * XREFs of sub_1403B53D4 @ 0x1403B53D4
 * Callers:
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     sub_1403919F0 @ 0x1403919F0 (sub_1403919F0.c)
 *     sub_1403BC620 @ 0x1403BC620 (sub_1403BC620.c)
 *     sub_14050C764 @ 0x14050C764 (sub_14050C764.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_1403B54DC @ 0x1403B54DC (sub_1403B54DC.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B53D4(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r11
  signed __int64 v9; // rax
  int v10; // r10d
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  signed __int64 v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned __int64 v20; // r8
  signed __int32 v21[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 220) == 64 )
  {
    v15 = sub_140303720(a1);
    v17 = sub_14042A5E0(v15, v16);
    v4 = *(_QWORD *)(a1 + 208);
    v13 = v17;
  }
  else
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 208);
      do
      {
        v5 = *(_QWORD *)(a1 + 200);
        v6 = sub_140303720(a1);
        v8 = sub_14042A5E0(v6, v7);
        _InterlockedOr(v21, 0);
        v9 = *(_QWORD *)(a1 + 200);
      }
      while ( v5 != v9 );
    }
    while ( v4 != *(_QWORD *)(a1 + 208) );
    v10 = *(_DWORD *)(a1 + 220);
    v11 = v5 ^ v8;
    if ( _bittest64((const __int64 *)&v11, (unsigned __int8)(v10 - 1)) )
    {
      v18 = 1LL;
      if ( v10 == 64 )
        v19 = -1LL;
      else
        v19 = (1LL << v10) - 1;
      if ( v10 != 64 )
        v18 = 1LL << v10;
      v20 = v5 & v19;
      v13 = v8 | v5 ^ v20;
      if ( v8 < v20 )
        v13 += v18;
      _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 200), v13, v9);
    }
    else
    {
      if ( v10 == 64 )
        v12 = -1LL;
      else
        v12 = (1LL << v10) - 1;
      v13 = v8 | v5 & ~v12;
    }
  }
  *(_QWORD *)(a1 + 208) = a2 + *(_QWORD *)(a1 + 208) - v4 - v13;
  sub_1403B54DC(a1);
  return 0LL;
}
