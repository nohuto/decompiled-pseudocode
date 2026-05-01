/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x1805244C4
 * Callers:
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x180524340 (TabletModeDragPattern--GetWindowTitleWithMap.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18012A9F8 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x18052459C (-_RehashTable@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicatio.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUIApplicationView@@@Z @ 0x180524668 (-s_LookupEntry@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicati.c)
 */

__int64 __fastcall CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        void **a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  void **v5; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  __int64 v12; // rdx
  __int64 v13; // rax

  result = 0LL;
  v5 = a1 + 2;
  if ( !a1[2] )
  {
    v9 = *((unsigned int *)a1 + 1);
    *v5 = 0LL;
    v11 = v9;
    v10 = v9 * (unsigned __int128)0x18uLL;
    if ( is_mul_ok(v11, 0x18uLL) )
      result = CTLocalAllocPolicy::Alloc(a1, *((__int64 *)&v10 + 1), v10, v5);
    else
      result = 2147942934LL;
  }
  if ( (int)result >= 0 )
  {
    v12 = *((unsigned int *)a1 + 1);
    if ( *(_DWORD *)a1 <= *((_DWORD *)a1 + 1) >> 1 )
    {
      if ( *((_DWORD *)a1 + 2) <= (unsigned int)v12 >> 2 )
      {
LABEL_10:
        v13 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                *v5,
                *((unsigned int *)a1 + 1),
                a3);
        if ( *(_DWORD *)v13 == 1 )
        {
          *(_QWORD *)(v13 + 16) = *a4;
        }
        else
        {
          if ( *(_DWORD *)v13 == 2 )
            --*((_DWORD *)a1 + 2);
          *(_QWORD *)(v13 + 8) = *a3;
          *(_QWORD *)(v13 + 16) = *a4;
          *(_DWORD *)v13 = 1;
          ++*(_DWORD *)a1;
        }
        return 0LL;
      }
    }
    else
    {
      v12 = (unsigned int)(2 * v12 - 1);
    }
    result = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
               a1,
               v12);
    if ( (int)result < 0 )
      return result;
    goto LABEL_10;
  }
  return result;
}
