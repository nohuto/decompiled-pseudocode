/*
 * XREFs of ??1?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAA@XZ @ 0x1800149C8
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x180015100 (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::~CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>(
        char **a1)
{
  int v2; // ebp
  __int64 v3; // rdi
  char *v4; // rsi
  unsigned __int64 v5; // rdx
  char *v6; // rcx

  if ( *a1 )
  {
    v2 = 0;
    if ( *((int *)a1 + 4) > 0 )
    {
      v3 = 0LL;
      do
      {
        v4 = *a1;
        v5 = *(_QWORD *)&(*a1)[v3 + 24];
        if ( v5 >= 8 )
          std::_Deallocate<16,0>(*(char **)&v4[v3], 2 * v5 + 2);
        *(_QWORD *)&v4[v3 + 16] = 0LL;
        ++v2;
        *(_QWORD *)&v4[v3 + 24] = 7LL;
        *(_WORD *)&v4[v3] = 0;
        v3 += 32LL;
      }
      while ( v2 < *((_DWORD *)a1 + 4) );
    }
    free(*a1);
    *a1 = 0LL;
  }
  v6 = a1[1];
  if ( v6 )
  {
    free(v6);
    a1[1] = 0LL;
  }
  *((_DWORD *)a1 + 4) = 0;
}
