/*
 * XREFs of MiAllocateLargeZeroPages @ 0x1402E7A70
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402E6ED0 (MiAllocateSlabEntry.c)
 *     MiAllocateFastLargePagesForMdl @ 0x14038B6E4 (MiAllocateFastLargePagesForMdl.c)
 *     MiCreateLargePfnList @ 0x140667F3C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     MiGetLargePagesForSystemMapping @ 0x140A32574 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiChangePageAttributeContiguous @ 0x14021A6A0 (MiChangePageAttributeContiguous.c)
 *     MiUpdatePageFileHighInPte @ 0x1402858CC (MiUpdatePageFileHighInPte.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402D2D60 (MiConvertEntireLargePageToSmall.c)
 *     MiProtectionToCacheAttribute @ 0x1402E17F0 (MiProtectionToCacheAttribute.c)
 *     MiIsFreeZeroPfnCold @ 0x1402E8860 (MiIsFreeZeroPfnCold.c)
 *     MiGetFastLargePages @ 0x1402E898C (MiGetFastLargePages.c)
 *     MiProcessPageGroupInfo @ 0x14032F7A0 (MiProcessPageGroupInfo.c)
 *     MiPfnBestZeroAttribute @ 0x1403397FC (MiPfnBestZeroAttribute.c)
 *     MiCreatePageChains @ 0x14035B920 (MiCreatePageChains.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403A64F0 (MiInsertMdlPageNeedsZero.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B8540 (MiConvertSmallPageRangeToLarge.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiZeroAndConvertPage @ 0x140650584 (MiZeroAndConvertPage.c)
 *     MiAddPageToHeatRanges @ 0x140654244 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140654B4C (MiNotifyPageHeat.c)
 *     MiAssemblePfnList @ 0x140667C38 (MiAssemblePfnList.c)
 *     MiFindLargePageMemory @ 0x140A49A18 (MiFindLargePageMemory.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateLargeZeroPages(unsigned int *a1)
{
  unsigned __int64 v2; // r14
  unsigned int v3; // ecx
  int v4; // edx
  _QWORD *v5; // r8
  __int64 *v6; // r15
  int v7; // r13d
  unsigned int v8; // ebp
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // r12
  int v16; // ecx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 PageChains; // rax
  unsigned int v20; // eax
  unsigned __int64 *i; // rbx
  unsigned __int64 **v22; // rax
  unsigned __int64 *v23; // r14
  unsigned __int64 *v24; // rdx
  unsigned __int64 *v25; // rcx
  unsigned __int64 *v26; // rcx
  unsigned __int64 v27; // r15
  __int64 v28; // rbp
  __int64 *v29; // rax
  unsigned int j; // edi
  __int64 v31; // rcx
  int v32; // [rsp+40h] [rbp-138h]
  unsigned int v33; // [rsp+44h] [rbp-134h]
  _QWORD *v34; // [rsp+48h] [rbp-130h] BYREF
  __int64 v35; // [rsp+50h] [rbp-128h] BYREF
  int v36; // [rsp+58h] [rbp-120h]
  _DWORD v37[32]; // [rsp+5Ch] [rbp-11Ch] BYREF
  _BYTE v38[96]; // [rsp+E0h] [rbp-98h] BYREF

  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  v32 = 1;
  v2 = 0LL;
  v34 = 0LL;
  if ( KeGetCurrentIrql() == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    v32 = 0;
  v3 = a1[9];
  v35 = 1LL;
  v36 = 16;
  v33 = MiProtectionToCacheAttribute(v3);
  if ( *((_QWORD *)a1 + 8) < *((_QWORD *)a1 + 2) )
  {
    while ( 1 )
    {
      MiGetFastLargePages(a1, v38);
      v5 = 0LL;
      v6 = MiLargePageSizes;
      v7 = 0;
      v8 = 0;
      v9 = 0LL;
      do
      {
        while ( 1 )
        {
          v10 = &v38[v9];
          v11 = *(_QWORD *)&v38[v9];
          if ( (_QWORD *)*v10 == v10 )
            break;
          v7 = 1;
          if ( *(_QWORD **)(v11 + 8) != v10 )
            goto LABEL_41;
          v13 = *(_QWORD *)v11;
          if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
            goto LABEL_41;
          *v10 = v13;
          *(_QWORD *)(v13 + 8) = v10;
          --v10[2];
          if ( (*a1 & 8) == 0 && (*(_DWORD *)(v11 + 16) & 0x3E0LL) != 0 )
            v14 = 1;
          else
            v14 = (int)v5;
          v15 = *v6;
          if ( (unsigned int)MiIsFreeZeroPfnCold(v11) && (HvlEnlightenments & 0x200000) != 0 )
          {
            if ( (unsigned int)MiAddPageToHeatRanges(&v35, 0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4), v8) )
              MiNotifyPageHeat(&v35);
            *(_QWORD *)(v11 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v11 + 16), 0LL);
            v5 = 0LL;
          }
          if ( !v14 )
            goto LABEL_23;
          if ( (*(_BYTE *)(v11 + 34) & 0xC0) == 0xC0 )
          {
            v20 = MiPfnBestZeroAttribute(v11, v33, v5);
            MiChangePageAttributeContiguous(0xAAAAAAAAAAAAAAABuLL * ((v11 + 0x220000000000LL) >> 4), v15, v20, 0);
          }
          v2 = (unsigned __int64)v34;
          if ( v34 )
          {
LABEL_34:
            MiInsertMdlPageNeedsZero(v2, v11, v15);
            v5 = 0LL;
          }
          else
          {
            if ( v32 )
            {
              PageChains = MiCreatePageChains(*((_QWORD *)a1 + 1), a1[8], v33);
              v34 = (_QWORD *)PageChains;
              v2 = PageChains;
              if ( PageChains )
              {
                *(_DWORD *)(PageChains + 16) = 1;
                goto LABEL_34;
              }
            }
            MiZeroAndConvertPage(v16, v11, v8, v33, 1);
            v5 = 0LL;
LABEL_23:
            if ( (*a1 & 0x20) != 0 )
            {
              MiConvertEntireLargePageToSmall(v11, v8, 0, 1, (__int64)v5, v5, v5);
              v5 = 0LL;
            }
            v17 = v9 + *((_QWORD *)a1 + 9);
            v18 = *(__int64 **)(v17 + 8);
            if ( *v18 != v17 )
LABEL_41:
              __fastfail(3u);
            v2 = (unsigned __int64)v34;
            *(_QWORD *)v11 = v17;
            *(_QWORD *)(v11 + 8) = v18;
            *v18 = v11;
            *(_QWORD *)(v17 + 8) = v11;
            ++*(_QWORD *)(*((_QWORD *)a1 + 9) + v9 + 16);
          }
        }
        ++v8;
        ++v6;
        v9 += 24LL;
      }
      while ( v8 < 4 );
      if ( !v7 || *((_QWORD *)a1 + 8) >= *((_QWORD *)a1 + 2) )
      {
        if ( HIDWORD(v35) )
        {
          MiNotifyPageHeat(&v35);
          v5 = 0LL;
        }
        if ( v2 )
        {
          MiProcessPageGroupInfo(v2, *((_QWORD *)a1 + 9), (*a1 >> 5) & 1);
          v5 = 0LL;
        }
        v4 = v32;
        break;
      }
    }
  }
  result = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 8) != result )
  {
    if ( v4 )
    {
      result = *a1;
      if ( (result & 0x10) == 0 )
      {
        v34 = v5;
        MiFindLargePageMemory(a1, &v34);
        result = (__int64)v34;
        i = 0LL;
        if ( v34 )
        {
          do
          {
            i = (unsigned __int64 *)result;
            result = *(_QWORD *)result;
          }
          while ( result );
        }
        for ( ; i; result = MiAssemblePfnList(v31, v28, j) )
        {
          v22 = (unsigned __int64 **)i[1];
          v23 = i - 2;
          v24 = i;
          v25 = i;
          if ( v22 )
          {
            v26 = *v22;
            for ( i = (unsigned __int64 *)i[1]; v26; v26 = (unsigned __int64 *)*v26 )
              i = v26;
          }
          else
          {
            for ( i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                  i;
                  i = (unsigned __int64 *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (unsigned __int64 *)*i == v25 )
                break;
              v25 = i;
            }
          }
          RtlAvlRemoveNode((unsigned __int64 *)&v34, v24);
          v27 = v23[1];
          v28 = 48 * *v23 - 0x220000000000LL;
          v29 = MiLargePageSizes;
          for ( j = 0; j < 3; ++j )
          {
            if ( v27 == *v29 )
              break;
            ++v29;
          }
          if ( (*a1 & 0x20) == 0 )
            MiConvertSmallPageRangeToLarge(*v23);
          ExFreePoolWithTag(v23, 0);
          v31 = *((_QWORD *)a1 + 9);
          *((_QWORD *)a1 + 8) += v27;
        }
      }
    }
  }
  return result;
}
