/*
 * XREFs of MiInitializeMdlOneNodeBatchPages @ 0x1402F9AA0
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x1402F95A0 (MiInitializeMdlBatchPages.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x14021C9B4 (MiChangePageAttributeBatch.c)
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402F9D98 (MiUpdateCacheAttributeListsForPage.c)
 *     MiZeroInParallel @ 0x1403044C0 (MiZeroInParallel.c)
 *     MiDereferencePageChains @ 0x14032F8BC (MiDereferencePageChains.c)
 *     MiPfnBestZeroAttribute @ 0x1403397FC (MiPfnBestZeroAttribute.c)
 *     MiCreatePageChains @ 0x14035B920 (MiCreatePageChains.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403A64F0 (MiInsertMdlPageNeedsZero.c)
 *     MiZeroAndConvertPage @ 0x140650584 (MiZeroAndConvertPage.c)
 */

void __fastcall MiInitializeMdlOneNodeBatchPages(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // ebp
  __int64 v5; // r12
  int v6; // ebx
  _QWORD *v7; // r15
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // r14
  int v13; // ebp
  __int64 v14; // r15
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // r14
  int v18; // ebx
  _QWORD *v19; // rax
  __int64 PageChains; // rax
  __int64 v21; // r8
  __int64 v22; // rsi
  int v23; // ecx
  unsigned int v24; // eax
  char v25; // [rsp+20h] [rbp-A8h]
  char v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+48h] [rbp-80h]
  __int64 v28; // [rsp+50h] [rbp-78h]
  __int64 v29; // [rsp+58h] [rbp-70h] BYREF
  __int64 v30; // [rsp+60h] [rbp-68h] BYREF
  __int64 v31; // [rsp+68h] [rbp-60h] BYREF
  __int64 v32; // [rsp+70h] [rbp-58h] BYREF
  __int64 v33; // [rsp+78h] [rbp-50h]
  _QWORD *v35; // [rsp+D8h] [rbp+10h]
  __int64 v36; // [rsp+E0h] [rbp+18h]
  unsigned int v37; // [rsp+E8h] [rbp+20h]

  v36 = a3;
  v35 = a2;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 56);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 80);
  v7 = a2;
  v26 = v4;
  v37 = v6;
  v33 = v3;
  v28 = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  if ( !a3 )
    return;
  v8 = 0xAAAAAAAAAAAAAAABuLL;
  v9 = 0xFFFFDE0000000022uLL;
  v10 = 0xFFFFDE0000000010uLL;
  do
  {
    v11 = 48LL * *v7 - 0x220000000000LL;
    if ( !v3 )
      goto LABEL_11;
    v12 = v3;
    v13 = v4 & 1;
    v14 = v27;
    do
    {
      if ( v13
        || (*(_DWORD *)(v11 + 16) & 0x3E0LL) == 0
        && ((v15 = *(unsigned __int8 *)(v11 + 34) >> 6, v15 == v6)
         || ((unsigned __int8)((1 << v15) | (1 << v6)) & (unsigned __int8)byte_140C65B98) == 0) )
      {
        v16 = 0;
        if ( *(unsigned __int8 *)(v11 + 34) >> 6 == v6 )
          goto LABEL_9;
      }
      else
      {
        if ( !v14 )
        {
          v18 = 1;
          if ( (v26 & 8) != 0 )
            v18 = 5;
          v19 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4));
          PageChains = MiCreatePageChains(*(_QWORD *)a1, *((unsigned int *)v19 + 2), v37);
          v14 = PageChains;
          if ( !PageChains )
          {
            v23 = *(unsigned __int8 *)(v11 + 34);
            LOBYTE(v23) = v23 & 0xC0;
            if ( (_BYTE)v23 == 0xC0 )
            {
              v24 = MiPfnBestZeroAttribute(v11, v37, v21);
              MiChangePageAttribute(v11, v24, 0LL);
            }
            v25 = v18;
            v6 = v37;
            MiZeroAndConvertPage(v23, v11, 3, v37, v25);
            goto LABEL_21;
          }
          *(_DWORD *)(PageChains + 16) = v18;
          v6 = v37;
        }
        MiInsertMdlPageNeedsZero(v14, v11, 1LL);
        ++v28;
        v16 = 1;
      }
      MiUpdateCacheAttributeListsForPage(v11, v6, v16, (unsigned int)&v30, (__int64)&v31, (__int64)&v29, (__int64)&v32);
LABEL_21:
      v8 = 0xAAAAAAAAAAAAAAABuLL;
LABEL_9:
      v11 += 48LL;
      v9 = 0xFFFFDE0000000022uLL;
      v10 = 0xFFFFDE0000000010uLL;
      --v12;
    }
    while ( v12 );
    v5 = v36;
    v3 = v33;
    LOBYTE(v4) = v26;
    v27 = v14;
    v7 = v35;
LABEL_11:
    ++v7;
    --v5;
    v35 = v7;
    v36 = v5;
  }
  while ( v5 );
  if ( v29 )
    MiChangePageAttributeBatch(v29, v6, 0LL);
  if ( v28 )
  {
    v22 = v30;
    if ( v30 )
      MiChangePageAttributeBatch(v30, 1, -1LL);
    v17 = v27;
    MiZeroInParallel(v27, v9, v10, v8);
    if ( v22 )
      MiChangePageAttributeBatch(v22, 3, 0LL);
    if ( v31 )
      MiChangePageAttributeBatch(v31, 3, 0LL);
    if ( v32 )
      MiChangePageAttributeBatch(v32, v6, 0LL);
  }
  else
  {
    v17 = v27;
  }
  if ( v17 )
    MiDereferencePageChains(v17);
}
