/*
 * XREFs of sub_14082A0D8 @ 0x14082A0D8
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     sub_1403DC498 @ 0x1403DC498 (sub_1403DC498.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14082A224 @ 0x14082A224 (sub_14082A224.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14082A0D8(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // cl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rdi
  void *v9; // rsi
  __int64 v10; // rcx
  PVOID PoolWithTag; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( dword_140D05038 )
    {
      if ( dword_140D05038 != 1 )
        dword_140D05038 = 0;
    }
    else
    {
      dword_140D05038 = (unsigned __int8)sub_14042A5E0(a1, a2) != 0;
    }
    sub_1403DC498();
  }
  v3 = *(_BYTE *)(a1 + 208);
  if ( !qword_140D07E90[2 * v3 + 1] )
  {
    v8 = 0x4000LL;
    if ( v3 )
    {
      if ( dword_140D05038 )
      {
        v9 = 0LL;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x4000uLL, 0x6254654Bu);
        v9 = PoolWithTag;
        if ( !PoolWithTag )
          return 3221225626LL;
        memset(PoolWithTag, 0, 0x4000uLL);
        v3 = *(_BYTE *)(a1 + 208);
      }
    }
    else
    {
      v9 = &unk_140D364C0;
      if ( dword_140D05038 )
        v8 = 32LL;
    }
    v10 = 2LL * v3;
    qword_140D07E90[v10] = 8 * v8;
    qword_140D07E90[v10 + 1] = (__int64)v9;
  }
  *(_DWORD *)(a1 + 13248) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 32496), (PKDEFERRED_ROUTINE)sub_1403951E0, 0LL);
  if ( !*(_QWORD *)(a1 + 32552) )
    *(_WORD *)(a1 + 32498) = *(_DWORD *)(a1 + 36) + 2048;
  v4 = a1 + 15880;
  v5 = 2LL;
  do
  {
    v6 = 256LL;
    do
    {
      *(_QWORD *)(v4 - 8) = 0LL;
      *(_DWORD *)(v4 + 20) = -1;
      *(_DWORD *)(v4 + 16) = 0;
      *(_QWORD *)(v4 + 8) = v4;
      *(_QWORD *)v4 = v4;
      v4 += 32LL;
      --v6;
    }
    while ( v6 );
    --v5;
  }
  while ( v5 );
  sub_14082A224(a1);
  return 0LL;
}
