/*
 * XREFs of sub_140A98ACC @ 0x140A98ACC
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A98420 @ 0x140A98420 (sub_140A98420.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A81A04 @ 0x140A81A04 (sub_140A81A04.c)
 *     sub_140A99A38 @ 0x140A99A38 (sub_140A99A38.c)
 *     sub_140A99C74 @ 0x140A99C74 (sub_140A99C74.c)
 *     sub_140A99F58 @ 0x140A99F58 (sub_140A99F58.c)
 */

__int64 __fastcall sub_140A98ACC(ULONG_PTR a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9

  v6 = (int)a2;
  if ( a2 > 8 )
    return 0LL;
  v10 = 0;
  v11 = sub_140A99F58(a1, a6, a3);
  if ( v11 )
  {
    if ( (dword_140A750B0[v6] & 8) == 0 )
    {
      sub_140A99A38(byte_140C0D9E4, "Re-initializing active lock 0x%p.", (const void *)0x1005);
      sub_1405FFA20(0xC4u, 0x1005uLL, a1, v11, 0LL, byte_140C0D9E4);
    }
    if ( *(_QWORD *)(v11 + 16) )
    {
      sub_140A99A38(byte_140C0D9E8, "Re-initializing active lock 0x%p.", (const void *)0x1005);
      sub_1405FFA20(0xC4u, 0x1005uLL, a1, v11, 1uLL, byte_140C0D9E8);
    }
    sub_140A99C74(v11);
    *a5 = v11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (a1 >= *((_QWORD *)CurrentThread + 5) || a1 <= *((_QWORD *)CurrentThread + 6)) && a3 )
  {
    v13 = qword_140D57500;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    *(_QWORD *)(a3 + 120) = 0LL;
    *(_QWORD *)(a3 + 184) = 0LL;
    *(_DWORD *)(a3 + 4) = 0;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_DWORD *)a3 = v6;
    *(_QWORD *)(a3 + 8) = a1;
    *(_OWORD *)(a3 + 56) = *a4;
    v14 = ((a1 >> 12) * (unsigned __int128)0x40100401004011uLL) >> 64;
    *(_OWORD *)(a3 + 72) = a4[1];
    *(_OWORD *)(a3 + 88) = a4[2];
    *(_OWORD *)(a3 + 104) = a4[3];
    v15 = (_QWORD *)(a3 + 40);
    v16 = (a1 >> 12) - 1023 * ((v14 + (((a1 >> 12) - v14) >> 1)) >> 9);
    v17 = v13[2] + 16 * v16;
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
      __fastfail(3u);
    v19 = (unsigned int)dword_140A75168[v6];
    *v15 = v18;
    v15[1] = v17;
    *(_QWORD *)(v18 + 8) = v15;
    *(_QWORD *)v17 = v15;
    sub_140A81A04(&v13[2 * v16 + 4], a1, v19);
    ++*(_QWORD *)(v20 + 24);
    return 1;
  }
  return v10;
}
