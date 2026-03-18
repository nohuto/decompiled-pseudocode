/*
 * XREFs of MiUpdateForkMaps @ 0x1405BBD5C
 * Callers:
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 * Callees:
 *     MiMapSinglePage @ 0x14026C124 (MiMapSinglePage.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiFillPteHierarchy @ 0x140352E50 (MiFillPteHierarchy.c)
 *     MiBuildForkPageTable @ 0x1405B85F8 (MiBuildForkPageTable.c)
 *     MiDoneWithThisPageGetAnother @ 0x1405BA768 (MiDoneWithThisPageGetAnother.c)
 */

__int64 __fastcall MiUpdateForkMaps(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  int v8; // r13d
  __int64 NextPageTable; // rax
  ULONG_PTR v10; // rdi
  __int64 result; // rax
  unsigned int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 *v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 *v25; // rbx
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v27; // [rsp+38h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-48h] BYREF
  __int128 v29; // [rsp+50h] [rbp-38h] BYREF
  __int64 *v30; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  LODWORD(v30) = 0;
  v8 = 4;
  v28 = 0LL;
  v29 = 0LL;
  NextPageTable = MiGetNextPageTable(a2, a3, 0LL, a6, 4, &v30);
  v27 = NextPageTable;
  v10 = NextPageTable;
  if ( !NextPageTable )
    return a3 + 8;
  v12 = MI_IS_PHYSICAL_ADDRESS(NextPageTable << 25 >> 16);
  if ( v12 )
  {
    v14 = v12;
    do
    {
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v14;
    }
    while ( v14 );
    v15 = v12;
    result = v10 + 8;
    do
    {
      result = result << 25 >> 16;
      --v15;
    }
    while ( v15 );
  }
  else
  {
    if ( ((v10 ^ a1[6]) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiFillPteHierarchy((__int64)(v10 << 25) >> 16, (unsigned __int64 *)&v28);
      v17 = *a1;
      v18 = (unsigned __int64 *)&v29 + 1;
      a1[6] = v10;
      v19 = *(_QWORD *)(v17 + 40) >> 12;
      v20 = 0LL;
      v21 = v19;
      v22 = 3LL;
      do
      {
        v30 = (__int64 *)(MiMapSinglePage(a1[7], v19, 1073741856, 0) + 8LL * ((*(_DWORD *)v18 >> 3) & 0x1FF));
        v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v30);
        v26 = v23;
        v24 = v23;
        if ( v23 )
        {
          if ( (v23 & 1) != 0 )
          {
            v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v26);
          }
          else if ( qword_140C50780 )
          {
            if ( (v23 & 0x10) != 0 )
              v24 = v23 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v24 = ~qword_140C50780 & v23;
          }
          v19 = (v24 >> 12) & 0xFFFFFFFFFFLL;
        }
        else
        {
          v25 = &a1[4 - v8];
          MiDoneWithThisPageGetAnother(v25 + 1, a5, *a1, a6);
          v19 = v25[1];
          MiBuildForkPageTable(*a1, v19, *v18, v30, v21, v8 - 1);
          ++*v31;
          if ( v20 )
            MiIncreaseUsedPtesCount(v20, 1u);
        }
        v20 = 48 * v19 - 0x220000000000LL;
        --v8;
        --v18;
        v21 = v19;
        --v22;
      }
      while ( v22 );
      v16 = MiMapSinglePage(a1[7], v19, 1073741856, 0);
      v10 = v27;
      a1[4] = v16;
      a1[8] = v20;
    }
    else
    {
      v16 = a1[4];
    }
    LOBYTE(v13) = a6;
    a1[5] = v16 | v10 & 0xFFF;
    MiMakeSystemAddressValid(v10, 0LL, 0, v13, 1);
    return v10;
  }
  return result;
}
