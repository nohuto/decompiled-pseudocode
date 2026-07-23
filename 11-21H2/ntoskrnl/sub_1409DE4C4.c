/*
 * XREFs of sub_1409DE4C4 @ 0x1409DE4C4
 * Callers:
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_14080E2B0 @ 0x14080E2B0 (sub_14080E2B0.c)
 *     sub_1409DE80C @ 0x1409DE80C (sub_1409DE80C.c)
 * Callees:
 *     sub_140204630 @ 0x140204630 (sub_140204630.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14075DD3C @ 0x14075DD3C (sub_14075DD3C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_1409DE4C4(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // r14d
  _QWORD *v5; // r15
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rsi
  char *PoolWithTag; // rax
  char *v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // [rsp+38h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 72) )
  {
    v4 = 0;
    v5 = (_QWORD *)(a1 + 88);
    do
    {
      v6 = *(_DWORD *)(a1 + 16);
      if ( (v6 & 2) != 0 )
      {
        v7 = -1LL;
        v8 = v4;
        do
          ++v7;
        while ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v4) + 2 * v7) );
        v9 = 2 * v7 + 4;
      }
      else
      {
        if ( (v6 & 1) == 0 )
          return;
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)(*v5 + 2 * v10 + 4) );
        v9 = 2 * v10 + 14;
        v8 = v4;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v9 + 74, 0x70696D57u);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v9 + 74);
        *(_DWORD *)v12 = v9 + 74;
        *((_DWORD *)v12 + 1) = 3;
        *((_QWORD *)v12 + 1) = 1LL;
        *((_DWORD *)v12 + 11) = 10;
        *(_OWORD *)(v12 + 24) = *a2;
        *((_QWORD *)v12 + 2) = MEMORY[0xFFFFF78000000014];
        *((_DWORD *)v12 + 15) = v9 + 2;
        v14 = v9 - 2;
        *((_DWORD *)v12 + 12) = 64;
        *((_DWORD *)v12 + 14) = 72;
        *((_WORD *)v12 + 32) = 0;
        *((_WORD *)v12 + 36) = 0;
        v15 = *(_DWORD *)(a1 + 16);
        if ( (v15 & 2) != 0 )
        {
          *((_WORD *)v12 + 37) = v14;
          sub_1402E0978((_WORD *)v12 + 38, v14, *(_QWORD *)(*v5 + 8 * v8));
        }
        else if ( (v15 & 1) != 0 )
        {
          LODWORD(v16) = v4 + *(_DWORD *)*v5;
          sub_140204630((_WORD *)v12 + 38, v14, 0LL, 0LL, 0x200u, L"%ws%d", *v5 + 4LL, v16);
          *((_WORD *)v12 + 37) = v14;
        }
        LOBYTE(v13) = 1;
        sub_14075DD3C(v12, v13, 0);
        ExFreePoolWithTag(v12, 0);
        v5 = (_QWORD *)(a1 + 88);
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a1 + 72) );
  }
}
