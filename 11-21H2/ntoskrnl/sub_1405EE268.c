/*
 * XREFs of sub_1405EE268 @ 0x1405EE268
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x1405EDE20 (RtlTraceDatabaseAdd.c)
 * Callees:
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405EE240 @ 0x1405EE240 (sub_1405EE240.c)
 *     sub_1405EE42C @ 0x1405EE42C (sub_1405EE42C.c)
 */

char __fastcall sub_1405EE268(__int64 a1, unsigned int a2, const void *a3, _QWORD *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rax
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v18[0] = 0LL;
  v5 = a2;
  if ( a2 <= 0x100 )
  {
    if ( (unsigned __int8)sub_1405EE42C(a1, a2, a3, v18) )
    {
      v8 = v18[0];
      ++*(_DWORD *)(v18[0] + 4LL);
      if ( a4 )
        *a4 = v8;
      ++*(_QWORD *)(a1 + 144);
      return 1;
    }
    v10 = *(_QWORD **)(a1 + 16);
    v11 = 8 * v5 + 56;
    if ( v11 > v10[5] - v10[6] )
    {
      v12 = *(_QWORD *)(a1 + 24);
      if ( v12 && *(_QWORD *)(a1 + 32) > v12
        || (v13 = sub_1405EE240(0x1000uLL, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8)), (v10 = v13) == 0LL) )
      {
LABEL_11:
        if ( a4 )
          *a4 = 0LL;
        return 0;
      }
      *(_DWORD *)v13 = -1412580421;
      v13[1] = a1;
      v13[3] = 4096LL;
      v13[4] = v13;
      v13[5] = v13 + 512;
      v13[6] = v13 + 7;
      v13[2] = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 32) += 4096LL;
      *(_QWORD *)(a1 + 16) = v13;
    }
    v14 = v10[6];
    if ( v11 <= v10[5] - v14 )
    {
      v10[6] = v14 + v11;
      *(_DWORD *)v14 = -1412584790;
      *(_DWORD *)(v14 + 8) = v5;
      *(_DWORD *)(v14 + 4) = 1;
      *(_QWORD *)(v14 + 48) = v14 + 56;
      *(_QWORD *)(v14 + 16) = 0LL;
      *(_QWORD *)(v14 + 24) = 0LL;
      memmove((void *)(v14 + 56), a3, 8 * v5);
      v15 = sub_14042A5E0((unsigned int)v5, a3);
      v16 = *(_DWORD *)(a1 + 112);
      v17 = v15 % v16;
      ++*(_DWORD *)(a1 + 4LL * (v17 / (v16 >> 4)) + 152);
      *(_QWORD *)(v14 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (v15 % v16));
      *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v17) = v14;
      if ( a4 )
        *a4 = v14;
      ++*(_QWORD *)(a1 + 136);
      return 1;
    }
    DbgPrint("Trace database: failing attempt to save biiiiig trace (size %u) \n", v5);
    goto LABEL_11;
  }
  return 0;
}
