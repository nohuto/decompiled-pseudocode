/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x1805DCE70
 * Callers:
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x1805DCD08 (TabletModeDragPattern--GetWindowTitleWithMap.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800EF61C (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1805DCF54 (-_RehashTable@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicatio.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUIApplicationView@@@Z @ 0x1805DD020 (-s_LookupEntry@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicati.c)
 */

__int64 __fastcall CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        _DWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // rsi
  _DWORD *v6; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rax

  v4 = a1 + 4;
  v6 = a1 + 1;
  if ( !*((_QWORD *)a1 + 2) )
  {
    v9 = (unsigned int)*v6;
    *v4 = 0LL;
    v11 = v9;
    v10 = v9 * (unsigned __int128)0x18uLL;
    result = is_mul_ok(v11, 0x18uLL)
           ? CTLocalAllocPolicy::Alloc(a1, *((__int64 *)&v10 + 1), v10, (void **)a1 + 2)
           : 2147942934LL;
    if ( (int)result < 0 )
      return result;
  }
  v13 = (unsigned int)*v6;
  if ( *a1 > *v6 >> 1 )
  {
    v13 = (unsigned int)(2 * v13 - 1);
    goto LABEL_9;
  }
  if ( a1[2] > (unsigned int)v13 >> 2 )
  {
LABEL_9:
    result = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
               a1,
               v13);
    if ( (int)result < 0 )
      return result;
  }
  v14 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *v4,
          (unsigned int)*v6,
          a3);
  if ( *(_DWORD *)v14 == 1 )
  {
    *(_QWORD *)(v14 + 16) = *a4;
  }
  else
  {
    if ( *(_DWORD *)v14 == 2 )
      --a1[2];
    *(_QWORD *)(v14 + 8) = *a3;
    *(_QWORD *)(v14 + 16) = *a4;
    *(_DWORD *)v14 = 1;
    ++*a1;
  }
  return 0LL;
}
